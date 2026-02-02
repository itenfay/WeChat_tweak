//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MJAdaptiveMovieTemplateExportSettingsLoader
{
    _Bool _hasDecoration;
}

@property(nonatomic) _Bool hasDecoration; // @synthesize hasDecoration=_hasDecoration;
- (void)_fetchABAParamsWithAsset:(id)arg1 videoEncodeParams:(id)arg2 workingQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchABAParamsWithFileURL:(id)arg1 videoEncodeParams:(id)arg2 workingQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)exportSettingsWithVideoEncodeParams:(id)arg1;
- (id)_defaultExportSettings;
- (void)loadExportSettingsWithVideoTemplate:(id)arg1 assetInfoList:(id)arg2 videoAspectRatio:(double)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

