// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SceneViewExtension.h"
#include "RenderGraphUtils.h"
#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
#include "Runtime/Renderer/Public/ScreenPass.h"
#elif ENGINE_MINOR_VERSION <= 3
#include "Runtime/Renderer/Private/ScreenPass.h"
#endif

class FScreenSpaceFogScatteringViewExtension : public FSceneViewExtensionBase
{
public:
	FScreenSpaceFogScatteringViewExtension(const FAutoRegister& AutoRegister);
	
	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {};
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {};
	virtual void PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override {};
	virtual void PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override {};
	virtual void PrePostProcessPass_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessingInputs& Inputs) override;
	
private:

	int32 PassAmount = 8;

	TArray<FScreenPassTexture> DownsampleMipMaps;
	TArray<FScreenPassTexture> UpsampleMipMaps;
	
	FIntPoint DefaultGroupSize = FIntPoint(8, 8);
	
	void RenderSSFS(FRDGBuilder& GraphBuilder, const FViewInfo& View, const FPostProcessingInputs& Inputs, FScreenPassTexture& Output);
	
	FRDGTextureRef Setup(FRDGBuilder& GraphBuilder, const FViewInfo& View, FRDGTextureRef InputTexture, FRDGTextureRef DepthTexture, const FIntRect& ViewRect);
	FRDGTextureRef Downsample(FRDGBuilder& GraphBuilder, const FViewInfo& View, const int32 PassNumber, const FString& PassName, const FString* TextureName, FRDGTextureRef InputTexture, const FIntRect& ViewRect);
	FRDGTextureRef UpsampleCombine(FRDGBuilder& GraphBuilder, const FViewInfo& View, const FString& PassName, const FString* TextureName, const FScreenPassTexture& InputTexture, const FScreenPassTexture& PreviousTexture, float Radius);
	FRDGTextureRef Recombine(FRDGBuilder& GraphBuilder, const FViewInfo& View, const FScreenPassTexture& SceneColor, FRDGTextureRef ScatteringTexture, FRDGTextureRef SetupTexture, const FIntRect& ViewRect);
};