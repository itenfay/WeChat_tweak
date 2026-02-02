//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoAttr, NSArray, NSString, SightDraft, VideoCompositionAttr;

@interface WCMomentsFinderShareViewModel
{
    _Bool _hasRecordedDisplay;
    _Bool _hasRecordedClick;
    _Bool _Configurations_alwaysAllowsImagesWithPOI;
    _Bool _isAsyncExportingVideo;
    double _Configurations_minimumVideoDuration;
    long long _Configurations_minimumImageCount;
    NSString *_Configurations_customizedShareTips;
    EditVideoAttr *_videoEditAttributes;
    VideoCompositionAttr *_compositionAttr;
    NSArray *_videoEditWidgetStateList;
    SightDraft *_sightDraft;
}

+ (id)sharedReportCache;
- (void).cxx_destruct;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(copy, nonatomic) NSArray *videoEditWidgetStateList; // @synthesize videoEditWidgetStateList=_videoEditWidgetStateList;
@property(retain, nonatomic) VideoCompositionAttr *compositionAttr; // @synthesize compositionAttr=_compositionAttr;
@property(retain, nonatomic) EditVideoAttr *videoEditAttributes; // @synthesize videoEditAttributes=_videoEditAttributes;
@property(nonatomic) _Bool isAsyncExportingVideo; // @synthesize isAsyncExportingVideo=_isAsyncExportingVideo;
@property(copy, nonatomic) NSString *Configurations_customizedShareTips; // @synthesize Configurations_customizedShareTips=_Configurations_customizedShareTips;
@property(nonatomic) _Bool Configurations_alwaysAllowsImagesWithPOI; // @synthesize Configurations_alwaysAllowsImagesWithPOI=_Configurations_alwaysAllowsImagesWithPOI;
@property(nonatomic) long long Configurations_minimumImageCount; // @synthesize Configurations_minimumImageCount=_Configurations_minimumImageCount;
@property(nonatomic) double Configurations_minimumVideoDuration; // @synthesize Configurations_minimumVideoDuration=_Configurations_minimumVideoDuration;
- (id)generateFinderImageModels;
- (id)fetchAssets;
- (_Bool)_shareImagesToFinderFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shareVideoToFinderFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)reallyShareFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)willStartSharing;
- (void)didClickShareButton;
- (void)willDisplayShareButton;
- (_Bool)hasActionRecordForShowingShareButton;
- (_Bool)shouldShowShareButton;
- (_Bool)validCompositeVideoTask;
- (_Bool)validateMediaItemListForScene;
- (_Bool)validateMediaItemList;
- (_Bool)validateDataItem;
- (_Bool)validateConflicts;
- (_Bool)validateDevice;
- (id)tips;
- (id)svgIconColor;
- (id)svgIconName;
- (void)reportFinderWithAction:(long long)arg1 finderPostSessionID:(id)arg2;
- (long long)reportSceneFromShareScene:(long long)arg1;
- (id)reportCache;

@end

