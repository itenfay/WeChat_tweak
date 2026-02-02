//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCFinderFullScreenEditImageLayoutViewDelegate;

@interface WCFinderFullScreenEditImageLayoutView
{
    _Bool _hiddenCropBtn;
    _Bool _needAdjustThumbItemSize;
    id <WCFinderFullScreenEditImageLayoutViewDelegate> _finderDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needAdjustThumbItemSize; // @synthesize needAdjustThumbItemSize=_needAdjustThumbItemSize;
@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
@property(nonatomic) __weak id <WCFinderFullScreenEditImageLayoutViewDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)reportClickDoneAction;
- (void)onClickmusicBGMViewAction;
- (struct CGSize)getEditSelectedCollectionViewItemSize;
- (unsigned long long)setBGMViewButtonOption;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(_Bool)arg2;
- (_Bool)isTouchOnEditWidget:(struct CGPoint)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (struct CGRect)fullScreenCropRect;
- (struct CGRect)currentCropRectInScreen;
- (struct CGRect)currentCropRectInImage;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hiddenCropBtn:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

