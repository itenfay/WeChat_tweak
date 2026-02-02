//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CShakeChecker, MMUILabel, MMUIView, NSMutableArray, NSString, UIBezierPath, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCPayCheckMchPosCgi, WCPayControlData, WCPayImageMaskView, WCPayLotteryView, WCPayMchFavView, WCPayPaidDetailFinderInfoView, WCPayPaidDetailLeadTailView, WCPayUnCheckMchPosCgi, WCPayWebImageView;
@protocol WCPayNewPaidOrderDetailViewDelegate;

@interface WCPayNewPaidOrderDetailView
{
    _Bool _isShaking;
    _Bool _bCanShake;
    _Bool _bIsMchFavViewSelected;
    _Bool _bHasShowMchFavPopWindow;
    _Bool _bIsMchUnCheckAfterCheck;
    _Bool _bHasReportFinderInfoViewShow;
    id <WCPayNewPaidOrderDetailViewDelegate> _delegate;
    WCPayControlData *_data;
    NSString *_selectedBrandUsername;
    NSString *_outerBtnTitle;
    UIScrollView *_contentView;
    UIButton *_activityBtn;
    WCPayWebImageView *_activityLogoImgView;
    MMUILabel *_sloganLabel;
    MMUILabel *_titleLabel;
    UIButton *_doneBtn;
    UIImageView *_selectedImageView;
    WCPayImageMaskView *_maskImageView;
    NSMutableArray *_emitterLayerArray;
    WCPayWebImageView *_tinyAppActivityLogoImgView;
    UIButton *_tinyAppActivtyBtn;
    MMUILabel *_tinyAppActivityTitleLabel;
    MMUILabel *_tinyAppActivityDescLabel;
    CShakeChecker *_shakeChecker;
    long long _numberOfShake;
    UIBezierPath *_prevPath;
    UIImageView *_wcpayIconView;
    UILabel *_brandLabel;
    UILabel *_sellerLabel;
    UILabel *_moneyLabel;
    UIView *_discountView;
    MMUIView *_activityInfoView;
    MMUIView *_tinyAppInfoView;
    WCPayLotteryView *_lotteryView;
    WCPayWebImageView *_backgroundImageView;
    MMUIView *_brandSubcribeView;
    WCPayMchFavView *_mchFavView;
    WCPayWebImageView *_mchFavPopWindowImageView;
    WCPayCheckMchPosCgi *_checkPosCgi;
    WCPayUnCheckMchPosCgi *_uncheckPosCgi;
    unsigned long long _checkMchTimestamp;
    WCPayPaidDetailFinderInfoView *_finderInfoView;
    WCPayPaidDetailLeadTailView *_leadTailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPaidDetailLeadTailView *leadTailView; // @synthesize leadTailView=_leadTailView;
@property(nonatomic) _Bool bHasReportFinderInfoViewShow; // @synthesize bHasReportFinderInfoViewShow=_bHasReportFinderInfoViewShow;
@property(retain, nonatomic) WCPayPaidDetailFinderInfoView *finderInfoView; // @synthesize finderInfoView=_finderInfoView;
@property(nonatomic) _Bool bIsMchUnCheckAfterCheck; // @synthesize bIsMchUnCheckAfterCheck=_bIsMchUnCheckAfterCheck;
@property(nonatomic) unsigned long long checkMchTimestamp; // @synthesize checkMchTimestamp=_checkMchTimestamp;
@property(retain, nonatomic) WCPayUnCheckMchPosCgi *uncheckPosCgi; // @synthesize uncheckPosCgi=_uncheckPosCgi;
@property(retain, nonatomic) WCPayCheckMchPosCgi *checkPosCgi; // @synthesize checkPosCgi=_checkPosCgi;
@property(retain, nonatomic) WCPayWebImageView *mchFavPopWindowImageView; // @synthesize mchFavPopWindowImageView=_mchFavPopWindowImageView;
@property(nonatomic) _Bool bHasShowMchFavPopWindow; // @synthesize bHasShowMchFavPopWindow=_bHasShowMchFavPopWindow;
@property(nonatomic) _Bool bIsMchFavViewSelected; // @synthesize bIsMchFavViewSelected=_bIsMchFavViewSelected;
@property(retain, nonatomic) WCPayMchFavView *mchFavView; // @synthesize mchFavView=_mchFavView;
@property(retain, nonatomic) MMUIView *brandSubcribeView; // @synthesize brandSubcribeView=_brandSubcribeView;
@property(retain, nonatomic) WCPayWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) WCPayLotteryView *lotteryView; // @synthesize lotteryView=_lotteryView;
@property(retain, nonatomic) MMUIView *tinyAppInfoView; // @synthesize tinyAppInfoView=_tinyAppInfoView;
@property(retain, nonatomic) MMUIView *activityInfoView; // @synthesize activityInfoView=_activityInfoView;
@property(retain, nonatomic) UIView *discountView; // @synthesize discountView=_discountView;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *sellerLabel; // @synthesize sellerLabel=_sellerLabel;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UIImageView *wcpayIconView; // @synthesize wcpayIconView=_wcpayIconView;
@property(retain, nonatomic) UIBezierPath *prevPath; // @synthesize prevPath=_prevPath;
@property(nonatomic) long long numberOfShake; // @synthesize numberOfShake=_numberOfShake;
@property(nonatomic) _Bool bCanShake; // @synthesize bCanShake=_bCanShake;
@property(nonatomic) _Bool isShaking; // @synthesize isShaking=_isShaking;
@property(retain, nonatomic) CShakeChecker *shakeChecker; // @synthesize shakeChecker=_shakeChecker;
@property(retain, nonatomic) MMUILabel *tinyAppActivityDescLabel; // @synthesize tinyAppActivityDescLabel=_tinyAppActivityDescLabel;
@property(retain, nonatomic) MMUILabel *tinyAppActivityTitleLabel; // @synthesize tinyAppActivityTitleLabel=_tinyAppActivityTitleLabel;
@property(retain, nonatomic) UIButton *tinyAppActivtyBtn; // @synthesize tinyAppActivtyBtn=_tinyAppActivtyBtn;
@property(retain, nonatomic) WCPayWebImageView *tinyAppActivityLogoImgView; // @synthesize tinyAppActivityLogoImgView=_tinyAppActivityLogoImgView;
@property(retain, nonatomic) NSMutableArray *emitterLayerArray; // @synthesize emitterLayerArray=_emitterLayerArray;
@property(retain, nonatomic) WCPayImageMaskView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) WCPayWebImageView *activityLogoImgView; // @synthesize activityLogoImgView=_activityLogoImgView;
@property(retain, nonatomic) UIButton *activityBtn; // @synthesize activityBtn=_activityBtn;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *outerBtnTitle; // @synthesize outerBtnTitle=_outerBtnTitle;
@property(retain, nonatomic) NSString *selectedBrandUsername; // @synthesize selectedBrandUsername=_selectedBrandUsername;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCPayNewPaidOrderDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refreshViewAfterLeadTailViewSettled:(_Bool)arg1 resultContent:(id)arg2;
- (void)onLeadTailViewClickWithCmdData:(id)arg1;
- (void)onLeadTailViewClickWithRouteInfo:(id)arg1;
- (_Bool)needShowLeadTailView;
- (void)onFinderInfoViewClickWithRouteInfo:(id)arg1;
- (void)reportMchFavCommit;
- (void)reportMchFavClick:(_Bool)arg1;
- (void)reportMchFavShowSucc:(_Bool)arg1;
- (void)onGetUnCheckMchPosCgiResp:(id)arg1;
- (void)onGetCheckMchPosCgiResp:(id)arg1;
- (void)sendMchPosCheckStateRequest;
- (void)onPayMchFavViewClick;
- (void)updateMchViewState:(_Bool)arg1;
- (_Bool)needShowMchFavView;
- (void)lotteryViewDidClickButton:(id)arg1;
- (void)lotteryViewDidFinishScratchOrShake:(id)arg1;
- (void)lotteryViewDidScratchOrShake:(id)arg1 drawType:(unsigned int)arg2;
- (id)genEmitterLayerCells:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
- (void)stopAllCurrentEmitterLayer;
- (void)startShowScartchAnimationWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 birthRate:(double)arg3;
- (void)showEmitterEffectWithMinPoint:(struct CGPoint)arg1 maxPoint:(struct CGPoint)arg2;
- (void)imageMaskView:(id)arg1 clearPercentDidChanged:(float)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (id)genGreenButton;
- (id)getActivityInfoData;
- (id)getOrderDetail;
- (void)refreshTinyAppActivityContentWithAppName:(id)arg1 logoUrl:(id)arg2 appDesc:(id)arg3 btnText:(id)arg4;
- (void)tinyAppActivityBtnClick;
- (void)setDoneButtonTitle:(id)arg1;
- (void)refreshH5ActivityContentWithActivityUrl:(id)arg1 logoUrl:(id)arg2 mainTitle:(id)arg3 subTitle:(id)arg4 btnText:(id)arg5;
- (void)refreshNativeActivityBtnTitle:(id)arg1;
- (void)activityBtnClick;
- (void)doneBtnClick;
- (void)tinyAppBtnClick;
- (void)selectBtnClick:(id)arg1;
- (id)getscratchTipsImage:(struct CGRect)arg1;
- (void)updateActivityInfoViewInCenterNew;
- (id)getTinyAppActivityInfoView;
- (id)getTinyAppInfoView;
- (id)getBrandSubscribeView;
- (id)getDiscountView;
- (void)setupBottomContentViewWithContentBottom:(double)arg1;
- (double)setupCenterContentViewWithContentBottom:(double)arg1;
- (id)getShowInfoView;
- (double)setupHeaderContentView;
- (void)setupContentView;
- (void)layoutSubviews;
- (struct CGPoint)normalizeVector:(struct CGPoint)arg1;
- (void)startShakeForPrice;
- (void)OnShake;
- (void)stopCheckShake;
- (void)startCheckShake;
- (void)setupShakeOneShake;
- (void)refreshViewWithData:(id)arg1;
- (id)initNewOrderDetailViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 controlData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

