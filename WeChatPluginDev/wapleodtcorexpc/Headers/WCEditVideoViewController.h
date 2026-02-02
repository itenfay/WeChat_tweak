//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageAttr, EditVideoAttr, NSArray, NSMutableArray, NSString, RecommendedMusicInfo, WCEditVideoLayoutView, WCEditViewControllerUIConfig;
@protocol WCEditVideoViewControllerDelegate;

@interface WCEditVideoViewController
{
    EditImageAttr *_originImageAttr;
    _Bool _defaultOriginalSoundMute;
    _Bool _shouldHideTopRightEntrance;
    _Bool _shouldSkipAutoCrop;
    _Bool _isEmoticonBoardSearchEnabled;
    NSMutableArray *_assets;
    NSMutableArray *_avAssets;
    id <WCEditVideoViewControllerDelegate> _delegate;
    unsigned long long _entranceType;
    unsigned long long _editImageUIStyle;
    NSArray *_initialEditWidgetStates;
    WCEditVideoLayoutView *_editVideoLayoutView;
    NSMutableArray *_thumbImages;
    NSMutableArray *_videoPaths;
    EditVideoAttr *_videoAttr;
    long long _cameraPosition;
    RecommendedMusicInfo *_patMusicInfo;
    WCEditViewControllerUIConfig *_uiConfig;
    NSString *_videoMD5String;
    CDStruct_1b6d18a9 _videoDuration;
}

+ (unsigned long long)convertToEntranceFromPickerScene:(int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoMD5String; // @synthesize videoMD5String=_videoMD5String;
@property(retain, nonatomic) WCEditViewControllerUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(nonatomic) _Bool isEmoticonBoardSearchEnabled; // @synthesize isEmoticonBoardSearchEnabled=_isEmoticonBoardSearchEnabled;
@property(nonatomic) _Bool shouldSkipAutoCrop; // @synthesize shouldSkipAutoCrop=_shouldSkipAutoCrop;
@property(nonatomic) _Bool shouldHideTopRightEntrance; // @synthesize shouldHideTopRightEntrance=_shouldHideTopRightEntrance;
@property(nonatomic) _Bool defaultOriginalSoundMute; // @synthesize defaultOriginalSoundMute=_defaultOriginalSoundMute;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(retain, nonatomic) EditVideoAttr *videoAttr; // @synthesize videoAttr=_videoAttr;
@property(retain, nonatomic) NSMutableArray *videoPaths; // @synthesize videoPaths=_videoPaths;
@property(retain, nonatomic) NSMutableArray *thumbImages; // @synthesize thumbImages=_thumbImages;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCEditVideoLayoutView *editVideoLayoutView; // @synthesize editVideoLayoutView=_editVideoLayoutView;
@property(copy, nonatomic) NSArray *initialEditWidgetStates; // @synthesize initialEditWidgetStates=_initialEditWidgetStates;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <WCEditVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *avAssets; // @synthesize avAssets=_avAssets;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (id)buildVideoCompositionAttr;
- (void)debugTap;
- (_Bool)isVideoCompositionEditing;
- (CDStruct_e83c9415)getEditedTimeRange;
- (void)returnToTimelineOrAlbum;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (double)getMinDuration;
- (float)getOutputTime;
- (CDStruct_e83c9415)originalTimeRange;
- (CDStruct_e83c9415)editedTimeRange;
- (id)getAssetId;
- (id)getAssetUrl;
- (id)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (struct CGSize)getOriginalAssetSize;
- (id)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (CDStruct_1b6d18a9)videoLayoutViewGetVideoDuration:(id)arg1;
- (id)horizontalVideoMd5Str;
- (struct CGRect)getCropRectInScreen;
- (struct CGRect)getFullScreenRectInScreen;
- (void)onClickEditVideoDoneButton;
- (void)cancelVideoPreCompose;
- (void)triggerVideoPreCompose;
- (void)_realTriggerVideoPreCompose;
- (void)onClickSecondCutPromotionButton:(long long)arg1 musicId:(id)arg2;
- (void)onClickJumpMoreButton:(id)arg1;
- (void)onClickLaunchMiaoJianButton;
- (void)onClickEditVideoCancelButton;
- (void)onOriginSoundChange:(_Bool)arg1;
- (void)onChooseVideoBGMDone:(id)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (id)currentViewController;
- (void)onEnterForeground:(id)arg1;
- (void)onResigned:(id)arg1;
- (void)cancelLoopPlay;
- (void)loopPlay;
- (void)loadDurationWithAsset:(id)arg1 path:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)showEditVideoViewOn:(id)arg1;
- (id)generateWidgetStateList;
- (id)snapshotAtVideoTime:(double)arg1;
- (void)resetEditVideoAttr;
- (id)getEditVideoAttr;
- (id)getEditResultMultiVideoComposition;
- (_Bool)isEditingMultiVideo;
- (id)videoPath;
- (id)thumbImage;
- (id)avAsset;
- (id)asset;
- (void)onEditVideoAtPaths:(id)arg1 andThumbImages:(id)arg2;
- (void)onEditVideos:(id)arg1;
- (void)onEditVideoWithAssets:(id)arg1 videoPaths:(id)arg2 thumbImages:(id)arg3;
- (void)dealloc;
- (_Bool)hidesStatusBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithVideoPaths:(id)arg1 thumbImages:(id)arg2;
- (id)initWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)initWithAssets:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

