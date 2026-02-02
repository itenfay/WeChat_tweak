//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanBlurEffectView, CameraScanCombineCropImageView, CameraScanCombineGoodsListView, MMTimer, NSString, UIView;
@protocol CameraScanCombineContentViewDelegate, CameraScanGoodsMarkDotViewInterface;

@interface CameraScanCombineContentView
{
    _Bool _isAppendItemAnimating;
    id <CameraScanCombineContentViewDelegate> _delegate;
    CameraScanBlurEffectView *_blurView;
    UIView *_maskView;
    UIView<CameraScanGoodsMarkDotViewInterface> *_markDotView;
    CameraScanCombineCropImageView *_goodsCropImageBorderView;
    MMTimer *_timerForUITest;
    CameraScanCombineGoodsListView *_listView;
    UIView *_centerMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *centerMaskView; // @synthesize centerMaskView=_centerMaskView;
@property(retain, nonatomic) CameraScanCombineGoodsListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) MMTimer *timerForUITest; // @synthesize timerForUITest=_timerForUITest;
@property(retain, nonatomic) CameraScanCombineCropImageView *goodsCropImageBorderView; // @synthesize goodsCropImageBorderView=_goodsCropImageBorderView;
@property(retain, nonatomic) UIView<CameraScanGoodsMarkDotViewInterface> *markDotView; // @synthesize markDotView=_markDotView;
@property(readonly, nonatomic) _Bool isAppendItemAnimating; // @synthesize isAppendItemAnimating=_isAppendItemAnimating;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CameraScanBlurEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <CameraScanCombineContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isListViewFold;
- (double)listViewHeight;
- (void)makeDetectSuccessEffect;
- (long long)indexOfItemInList:(id)arg1;
- (unsigned long long)listItemCardCount;
- (_Bool)shouldShowInfoLabel;
- (void)onListViewWillEndDragging;
- (void)onListViewWillStartDragging;
- (void)listViewDidFold:(_Bool)arg1;
- (void)listViewWillFold:(_Bool)arg1;
- (double)gradienLayerMaskHeight;
- (void)callAppendNewCardItemToList:(id)arg1;
- (void)onCompleteAppendAnimationWithCardItem:(id)arg1;
- (void)onClikcItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onClickHoleMaskView;
- (id)itemsNeedRetrack;
- (void)contentViewDisappear;
- (void)clearListView;
- (void)onDetectScanGoodItemFail:(id)arg1;
- (void)addItemFromDetectors:(id)arg1;
- (void)layoutSubviews;
- (void)stopMarkingAnimation;
- (void)startMarkingAnimation:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupCenterMaskView;
- (void)setupMarkdotView;
- (void)setupMaskView;
- (void)setupBlurView;
- (void)setupListView;
- (void)setupGoodsCropImageView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

