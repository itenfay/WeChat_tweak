//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MAVVideoComposition, NSMutableArray, NSString, WCFinderEditVideoCropView, WCFinderEditVideoMultiVideoCropView, WCFinderEditVideoPorgressInfoViewModel, WCFinderEditVideoProgressInfoView, WCFinderFullScreenEditFrameBlurView;
@protocol WCFinderFullScreenCompositionLayoutViewDelegate;

@interface WCFinderFullScreenCompositionLayoutView
{
    _Bool _isTimeCropDragging;
    id <WCFinderFullScreenCompositionLayoutViewDelegate> _finderDelegate;
    WCFinderEditVideoProgressInfoView *_progressView;
    WCFinderEditVideoCropView *_finderEditVideoCropView;
    WCFinderEditVideoMultiVideoCropView *_multiVideoTimeCropView;
    WCFinderEditVideoPorgressInfoViewModel *_progressViewModel;
    WCFinderFullScreenEditFrameBlurView *_frameCropView;
    NSMutableArray *_videoUrls;
    MAVVideoComposition *_composition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVVideoComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) NSMutableArray *videoUrls; // @synthesize videoUrls=_videoUrls;
@property(retain, nonatomic) WCFinderFullScreenEditFrameBlurView *frameCropView; // @synthesize frameCropView=_frameCropView;
@property(nonatomic) _Bool isTimeCropDragging; // @synthesize isTimeCropDragging=_isTimeCropDragging;
@property(retain, nonatomic) WCFinderEditVideoPorgressInfoViewModel *progressViewModel; // @synthesize progressViewModel=_progressViewModel;
@property(retain, nonatomic) WCFinderEditVideoMultiVideoCropView *multiVideoTimeCropView; // @synthesize multiVideoTimeCropView=_multiVideoTimeCropView;
@property(retain, nonatomic) WCFinderEditVideoCropView *finderEditVideoCropView; // @synthesize finderEditVideoCropView=_finderEditVideoCropView;
@property(retain, nonatomic) WCFinderEditVideoProgressInfoView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <WCFinderFullScreenCompositionLayoutViewDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (_Bool)isOnCropProcess;
- (_Bool)shouldShowNewBGMPanel;
- (void)updateFrameCropViewsLayout;
- (struct CGRect)getFullScreenCropRect;
- (_Bool)isTouchOnEditWidget:(struct CGPoint)arg1;
- (_Bool)useVideoCompositionPreview;
- (void)addPatMusicInfoToBGMLogic;
- (struct CGRect)currentPreviewRect;
- (void)makePlayerViewLayoutLegalToCropView;
- (void)setPlayerViewZoomScaleFillToCropRect;
- (struct CGSize)getCurrentAssetSize;
- (struct CGRect)currentVideoVisibleRect;
- (_Bool)currentPlayerViewLayoutIsIllegal;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)videoCompositionBrowserViewPlayReachEnd:(id)arg1;
- (void)videoCompositionBrowserView:(id)arg1 progressDidUpdateWithCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)finderEditCropView:(id)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)finderEditCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)finderEditCropView:(id)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)finderEditCropView:(id)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didEndDeceleratingWithProgress:(double)arg2;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickPlayButtonWithPlayState:(_Bool)arg2;
- (void)finderMultiVideoTimeCropView:(id)arg1 didScrollWithProgress:(double)arg2 withIndex:(unsigned long long)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didEndChangeCropTimeWithAttr:(id)arg2 pauseAtTime:(double)arg3 index:(unsigned long long)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didChangePanSingleVideoAtIndex:(unsigned long long)arg2 progress:(double)arg3 withAttr:(id)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didStartPanSingleVideoAtIndex:(unsigned long long)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickCancelButton:(id)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickDoneButton:(id)arg2 withAttr:(id)arg3;
- (void)finderEditVideoProgressInfoView:(id)arg1 didEndDraggingWidhProgress:(double)arg2;
- (void)finderEditVideoProgressInfoViewDidStartDragging;
- (void)finderEditVideoScrollViewDidEndDeceleratingWithProgress:(double)arg1;
- (void)finderEditVideo:(id)arg1 didScrollIsDecelerating:(_Bool)arg2;
- (void)finderEditVideoProgressInfoView:(id)arg1 didClickRow:(unsigned long long)arg2;
- (void)finderEditVideoProgressInfoView:(id)arg1 didTriggerSeekWithProgress:(double)arg2;
- (struct CGRect)getAssetPreviewFrame;
- (void)timeCropForMultiVideo;
- (void)timeCropForSingleVideoAtIndex:(unsigned long long)arg1;
- (void)onClickDone;
- (void)onClickCropEdit:(id)arg1;
- (struct CGRect)calcCenterWithDisplayRect:(struct CGRect)arg1 cropRect:(struct CGRect)arg2 track:(id)arg3;
- (void)updateCompositionWithEditVideoAttr:(id)arg1 needFullVideoCrop:(_Bool)arg2;
- (void)updateSingleCompositionWithEditVideoAttr:(id)arg1 index:(long long)arg2;
- (void)setEditVideoCropViewHidden:(_Bool)arg1;
- (void)setEditMultiVideoTimeCropViewHidden:(_Bool)arg1;
- (void)setCropView:(id)arg1 hidden:(_Bool)arg2;
- (id)editResultCompositionWithTargetWidth:(double)arg1 musicUrl:(id)arg2 needCrop:(_Bool)arg3;
- (struct CGPoint)cropRectCenterOffset;
- (struct CGRect)currentCropRectInScreen;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)setupProgressView;
- (void)setupCropView;
- (struct CGRect)adjustCropViewHeight:(struct CGRect)arg1;
- (void)setupEditFrameBlurView;
- (void)setupMultiVideoTimeCropView;
- (void)setupData;
- (void)cropVideoOutOfLimit;
- (void)genThumbImage;
- (void)onEditVideo;
- (id)adjustCompositionTimeRange:(id)arg1 withAttr:(id)arg2;
- (id)genComposition;
- (void)initView;
- (void)updateFinderProgressBarWithAttr:(id)arg1;
- (void)initCropToolAttrBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

