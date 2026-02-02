//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAAnimationGroup, CABasicAnimation, CameraScanBlurButtonWrapView, CameraScanCodesCenterDotView, CameraScanCombineContentView, ImageFitWithBlurredBackgroundView, MMUIButton, NSMutableArray, NSString, UIImageView, UILabel, UIView;
@protocol CameraScanCodesContentViewDelegate;

@interface CameraScanCodesContentView
{
    _Bool m_bShowMyQRCode;
    _Bool m_bInfoLabelNeedShowAgain;
    _Bool _isShowErrorView;
    _Bool _isHandlingMultiCodes;
    _Bool _isShowScanGoodsGuide;
    _Bool _isShowTipsIKnow;
    _Bool _isMaskViewShow;
    _Bool _isEnableCombineTab;
    _Bool _isUseSmallCropArea;
    _Bool _isMultiCodes;
    CameraScanBlurButtonWrapView *_myQRButtonWrapView;
    unsigned long long _selectedIdx;
    UIImageView *_scanCropImageView;
    UIImageView *_scanLineView;
    NSMutableArray *_markDotViewList;
    CameraScanCodesCenterDotView *_centerDotView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    ImageFitWithBlurredBackgroundView *_snapshotImageView;
    UIView *_maskView;
    MMUIButton *_cancelButton;
    CAAnimationGroup *_scanLineAnimation;
    CABasicAnimation *_maskViewAnimation;
    double _scanLineTopCenterY;
    double _scanLineBottomCenterY;
    MMUIButton *_tryScanGoodsButton;
    MMUIButton *_tipsIKnowButton;
    CameraScanCombineContentView *_goodCombineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraScanCombineContentView *goodCombineView; // @synthesize goodCombineView=_goodCombineView;
@property(retain, nonatomic) MMUIButton *tipsIKnowButton; // @synthesize tipsIKnowButton=_tipsIKnowButton;
@property(retain, nonatomic) MMUIButton *tryScanGoodsButton; // @synthesize tryScanGoodsButton=_tryScanGoodsButton;
@property(nonatomic) double scanLineBottomCenterY; // @synthesize scanLineBottomCenterY=_scanLineBottomCenterY;
@property(nonatomic) double scanLineTopCenterY; // @synthesize scanLineTopCenterY=_scanLineTopCenterY;
@property(nonatomic) _Bool isMultiCodes; // @synthesize isMultiCodes=_isMultiCodes;
@property(nonatomic) _Bool isUseSmallCropArea; // @synthesize isUseSmallCropArea=_isUseSmallCropArea;
@property(nonatomic) _Bool isEnableCombineTab; // @synthesize isEnableCombineTab=_isEnableCombineTab;
@property(retain, nonatomic) CABasicAnimation *maskViewAnimation; // @synthesize maskViewAnimation=_maskViewAnimation;
@property(nonatomic) _Bool isMaskViewShow; // @synthesize isMaskViewShow=_isMaskViewShow;
@property(retain, nonatomic) CAAnimationGroup *scanLineAnimation; // @synthesize scanLineAnimation=_scanLineAnimation;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) ImageFitWithBlurredBackgroundView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CameraScanCodesCenterDotView *centerDotView; // @synthesize centerDotView=_centerDotView;
@property(retain, nonatomic) NSMutableArray *markDotViewList; // @synthesize markDotViewList=_markDotViewList;
@property(retain, nonatomic) UIImageView *scanLineView; // @synthesize scanLineView=_scanLineView;
@property(retain, nonatomic) UIImageView *scanCropImageView; // @synthesize scanCropImageView=_scanCropImageView;
@property(nonatomic) unsigned long long selectedIdx; // @synthesize selectedIdx=_selectedIdx;
@property(nonatomic) _Bool isShowTipsIKnow; // @synthesize isShowTipsIKnow=_isShowTipsIKnow;
@property(nonatomic) _Bool isShowScanGoodsGuide; // @synthesize isShowScanGoodsGuide=_isShowScanGoodsGuide;
@property(nonatomic) _Bool isHandlingMultiCodes; // @synthesize isHandlingMultiCodes=_isHandlingMultiCodes;
@property(nonatomic) _Bool isShowErrorView; // @synthesize isShowErrorView=_isShowErrorView;
@property(retain, nonatomic) CameraScanBlurButtonWrapView *myQRButtonWrapView; // @synthesize myQRButtonWrapView=_myQRButtonWrapView;
- (void)callSetupHoleMaskViewWithHoleFrame:(struct CGRect)arg1;
- (void)onListViewWillEndDragging;
- (void)onListViewWillStartDragging;
- (void)listViewDidFold:(_Bool)arg1;
- (void)listViewWillFold:(_Bool)arg1;
- (double)getContentBottomMarginToTabView;
- (void)onClikcItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onAddItemFromDetectorsWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (double)getWidthBetweenAlbumButtonAndMyQRCodeButton;
- (double)getContentBottomMargin;
- (void)onTipsIKnowBtnClicked:(id)arg1;
- (void)onTryScanGoodsBtnClicked:(id)arg1;
- (void)onMyQRBtnClicked:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onStopScanAlbumLoading;
- (void)onStartScanAlbumLoading;
- (void)onCombineContentViewStarMarkingAnimation;
- (double)getMyQRCodeButtonY;
- (id)goodCombineContentView;
- (void)setupGoodCombineAttachView;
- (_Bool)tapInCancelButton:(id)arg1;
- (_Bool)isCollisionWithAnyMarkDotView;
- (void)showTipsIKnow;
- (void)showScanGoodsGuide:(id)arg1;
- (void)showNetTimeout;
- (void)showNetDisconnectWithSubtitle:(_Bool)arg1;
- (void)hideSnapshotImage;
- (void)showSnapshotImage:(id)arg1;
- (void)resetWhenStartScan;
- (void)resetNetStatusModiy;
- (void)resetTipsIKnow;
- (void)resetScanGoodsGuide;
- (void)resetMultiCodesModify:(_Bool)arg1;
- (void)stopHandleMultiCodes;
- (void)startHandleMultiCodes;
- (void)stopLoadingDotAnimation;
- (void)startLoadingDotAnimation;
- (void)stopScanLineAnimation;
- (void)startScanLineAnimation;
- (id)currSelectedMarkDotView;
- (void)updateScanGoodsGuide:(id)arg1;
- (void)updateMarkDotInfoList:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)maskViewsHidden;
- (void)maskViewsShowWithAnimation:(_Bool)arg1;
- (void)markDotViewsCleanUpNonSelectedItems;
- (void)markDotViewsRemoveFromSuperview;
- (void)markDotViewsStopAllAnimations;
- (void)markDotViewsStartBreatheAnimation;
- (void)markDotViewsStartShowAnimation;
- (void)layoutSubviews;
- (void)setupMaskViewAnimation;
- (void)setupTipsIKnowButton;
- (void)setupTryScanGoodsButton;
- (void)setupMyQRButton;
- (void)setupCancelButton;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupCenterDotView;
- (void)setupMaskView;
- (void)setupSnapshotImageView;
- (void)setupScanLineView;
- (void)setupScanCropImageView;
- (void)setScanCropRect:(struct CGRect)arg1;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (id)centerTabTitle;
- (void)setupSubViews;
- (id)initWithIsUseSmallCropArea:(_Bool)arg1 bShowMyQRCode:(_Bool)arg2 bEnableCombineTab:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <CameraScanCodesContentViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

