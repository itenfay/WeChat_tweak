//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, EditImageAttr, EditVideoAttr, EditVideoInitialView, MMAsset, NSString, UIImage, WCEditViewControllerUIConfig;
@protocol EditVideoLogicItemDelegate, EditVideoOptionsDelegate;

@interface EditVideoLogicItem
{
    EditVideoAttr *_videoAttr;
    UIImage *_thumbImage;
    MMAsset *_asset;
    EditVideoInitialView *_editVideoInitialView;
    EditImageAttr *_originImageAttr;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_e83c9415 _editedTimeRange;
    CDStruct_e83c9415 _originalTimeRange;
    _Bool _isEmoticonBoardSearchEnabled;
    _Bool _hideVideoOriginalSound;
    AVAsset *_avAsset;
    id <EditVideoLogicItemDelegate> _delegate;
    id <EditVideoOptionsDelegate> _optionsDelegate;
    unsigned long long _entranceType;
    unsigned long long _editImageUIStyle;
    NSString *_title;
    WCEditViewControllerUIConfig *_uiConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideVideoOriginalSound; // @synthesize hideVideoOriginalSound=_hideVideoOriginalSound;
@property(nonatomic) _Bool isEmoticonBoardSearchEnabled; // @synthesize isEmoticonBoardSearchEnabled=_isEmoticonBoardSearchEnabled;
@property(retain, nonatomic) WCEditViewControllerUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <EditVideoOptionsDelegate> optionsDelegate; // @synthesize optionsDelegate=_optionsDelegate;
@property(nonatomic) __weak id <EditVideoLogicItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (id)getAssetId;
- (id)getAssetUrl;
- (id)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (id)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (void)onClickSaveEditVideoToAlbumActionSheet:(CDUnknownBlockType)arg1;
- (void)onClickEditVideoDoneButton;
- (CDUnknownBlockType)onWillClickEditVideoDoneButton;
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
- (void)loadDurationComplete:(CDUnknownBlockType)arg1;
- (void)showEditVideoViewOn:(id)arg1;
- (void)onEditVideoFinish;
- (void)hideVideoOriginalSound:(_Bool)arg1;
- (void)clearMusic;
- (void)resetEditVideoAttr;
- (id)getEditVideoAttr;
- (void)setEditImageToolBarHidden:(_Bool)arg1;
- (void)getEditedResult:(CDUnknownBlockType)arg1;
- (void)onEditVideoAtPath:(id)arg1 andThumbImage:(id)arg2 onView:(id)arg3;
- (void)onEditVideo:(id)arg1 onView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

