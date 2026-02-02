//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCFinderAlbumScrollViewParamModel, WCFinderHalfScreenEditFrameBlurView;

@interface WCFinderHalfScreenEditImageLayoutView
{
    _Bool _hiddenCropBtn;
    _Bool _needAdjustThumbItemSize;
    UIView *_headBlurView;
    UIView *_bottomBlurView;
    WCFinderAlbumScrollViewParamModel *_scrollViewParamModel;
    WCFinderHalfScreenEditFrameBlurView *_frameCropView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needAdjustThumbItemSize; // @synthesize needAdjustThumbItemSize=_needAdjustThumbItemSize;
@property(retain, nonatomic) WCFinderHalfScreenEditFrameBlurView *frameCropView; // @synthesize frameCropView=_frameCropView;
@property(nonatomic) WCFinderAlbumScrollViewParamModel *scrollViewParamModel; // @synthesize scrollViewParamModel=_scrollViewParamModel;
@property(retain, nonatomic) UIView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) UIView *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(_Bool)arg2;
- (_Bool)isTouchOnEditWidget:(struct CGPoint)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (struct CGRect)currentCropRectInScreen;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (void)addBlurView;
- (id)initWithFrame:(struct CGRect)arg1 hiddenCropBtn:(_Bool)arg2 scrollViewParamModel:(id)arg3;
- (struct CGRect)currentCropRectInImage;
- (void)updateCurScrollViewZoomRate;
- (struct CGSize)getEditSelectedCollectionViewItemSize;
- (unsigned long long)setBGMViewButtonOption;
- (void)resetPreviewImageAndSetScrollViewFrame;
- (void)resetPreviewImageAndSetScrollViewFrameWithAnim:(_Bool)arg1;
- (void)onDoubleClickScrollViewAction;
- (void)updateScrollViewLayoutViews;
- (void)onFinderEditFrameBlurViewUpdateBlurButtonFrame:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateScrollViewFrame;
- (void)triggerScrollViewDidEndZooming;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

