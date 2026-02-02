//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLotteryGetPrizeMethodView, MMFinderLiveLotteryInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMUIButton, MMUILabel, MilestoneLotteryCouponRecordInfo, MilestoneLotteryInfo, MilestoneLotteryRedpacketInfo, NSString, RichTextView, UIImageView, UIScrollView, UIView, WCAddressBaseAddress;

@interface WCFinderLiveCouponLotteryWinDetailViewController
{
    _Bool _hasRefreshData;
    _Bool _isInLive;
    unsigned int _lotteryType;
    UIScrollView *_mainScrollView;
    UIView *_contentView;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    UIView *_lotteryIconView;
    UIImageView *_lotteryIconImg;
    MMUILabel *_nameLabel;
    MMUILabel *_lotteryTitleLabel;
    MMUILabel *_lotteryPrizeLabel;
    MMUIButton *_lotteryActionButton;
    UIView *_sepelateLine;
    MMUILabel *_lotteryPrizeTitleLabel;
    MMUILabel *_lotteryPrizeContentLabel;
    MMUILabel *_lotteryAttendTitleLabel;
    MMUILabel *_lotteryAttendContentLabel;
    MMUILabel *_lotteryWinCountTitleLabel;
    MMUILabel *_lotteryWinCountContentLabel;
    MMUILabel *_lotteryWinTimeTitleLabel;
    MMUILabel *_lotteryWinTimeContentLabel;
    MMUILabel *_timeOutLabel;
    unsigned long long _scene;
    NSString *_anchorNickName;
    UIImageView *_topLuckyBagImageView;
    UIImageView *_bottomLuckyBagImageView;
    UIImageView *_leftLotteryImageView;
    UIImageView *_rightLotteryImageView;
    UIImageView *_lotteryPrizeImageView;
    MMUILabel *_liveSpecifiedLabel;
    WCAddressBaseAddress *_addressInfo;
    unsigned long long _objectId;
    unsigned long long _liveId;
    MMFinderLiveLotteryGetPrizeMethodView *_getPrizeMethodView;
    RichTextView *_agreementText;
    NSString *_lotteryId;
    MMFinderLiveTaskId *_liveTaskId;
    MilestoneLotteryCouponRecordInfo *_couponRecordInfo;
    MilestoneLotteryRedpacketInfo *_redpacketRecordInfo;
    MilestoneLotteryInfo *_milestoneRecordInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) _Bool hasRefreshData; // @synthesize hasRefreshData=_hasRefreshData;
@property(retain, nonatomic) MilestoneLotteryInfo *milestoneRecordInfo; // @synthesize milestoneRecordInfo=_milestoneRecordInfo;
@property(retain, nonatomic) MilestoneLotteryRedpacketInfo *redpacketRecordInfo; // @synthesize redpacketRecordInfo=_redpacketRecordInfo;
@property(retain, nonatomic) MilestoneLotteryCouponRecordInfo *couponRecordInfo; // @synthesize couponRecordInfo=_couponRecordInfo;
@property(nonatomic) unsigned int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodView *getPrizeMethodView; // @synthesize getPrizeMethodView=_getPrizeMethodView;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) WCAddressBaseAddress *addressInfo; // @synthesize addressInfo=_addressInfo;
@property(retain, nonatomic) MMUILabel *liveSpecifiedLabel; // @synthesize liveSpecifiedLabel=_liveSpecifiedLabel;
@property(retain, nonatomic) UIImageView *lotteryPrizeImageView; // @synthesize lotteryPrizeImageView=_lotteryPrizeImageView;
@property(retain, nonatomic) UIImageView *rightLotteryImageView; // @synthesize rightLotteryImageView=_rightLotteryImageView;
@property(retain, nonatomic) UIImageView *leftLotteryImageView; // @synthesize leftLotteryImageView=_leftLotteryImageView;
@property(retain, nonatomic) UIImageView *bottomLuckyBagImageView; // @synthesize bottomLuckyBagImageView=_bottomLuckyBagImageView;
@property(retain, nonatomic) UIImageView *topLuckyBagImageView; // @synthesize topLuckyBagImageView=_topLuckyBagImageView;
@property(retain, nonatomic) NSString *anchorNickName; // @synthesize anchorNickName=_anchorNickName;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMUILabel *timeOutLabel; // @synthesize timeOutLabel=_timeOutLabel;
@property(retain, nonatomic) MMUILabel *lotteryWinTimeContentLabel; // @synthesize lotteryWinTimeContentLabel=_lotteryWinTimeContentLabel;
@property(retain, nonatomic) MMUILabel *lotteryWinTimeTitleLabel; // @synthesize lotteryWinTimeTitleLabel=_lotteryWinTimeTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryWinCountContentLabel; // @synthesize lotteryWinCountContentLabel=_lotteryWinCountContentLabel;
@property(retain, nonatomic) MMUILabel *lotteryWinCountTitleLabel; // @synthesize lotteryWinCountTitleLabel=_lotteryWinCountTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryAttendContentLabel; // @synthesize lotteryAttendContentLabel=_lotteryAttendContentLabel;
@property(retain, nonatomic) MMUILabel *lotteryAttendTitleLabel; // @synthesize lotteryAttendTitleLabel=_lotteryAttendTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryPrizeContentLabel; // @synthesize lotteryPrizeContentLabel=_lotteryPrizeContentLabel;
@property(retain, nonatomic) MMUILabel *lotteryPrizeTitleLabel; // @synthesize lotteryPrizeTitleLabel=_lotteryPrizeTitleLabel;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUIButton *lotteryActionButton; // @synthesize lotteryActionButton=_lotteryActionButton;
@property(retain, nonatomic) MMUILabel *lotteryPrizeLabel; // @synthesize lotteryPrizeLabel=_lotteryPrizeLabel;
@property(retain, nonatomic) MMUILabel *lotteryTitleLabel; // @synthesize lotteryTitleLabel=_lotteryTitleLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *lotteryIconImg; // @synthesize lotteryIconImg=_lotteryIconImg;
@property(retain, nonatomic) UIView *lotteryIconView; // @synthesize lotteryIconView=_lotteryIconView;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
- (id)audienceLogReporter;
- (void)gotoChatViewVCWithContact:(id)arg1;
- (void)handelMsgEdit:(id)arg1 type:(int)arg2;
- (id)getAddressDetailString:(id)arg1;
- (void)didSelectAddress:(id)arg1;
- (void)onShowMyAddress;
- (void)openWeAppForShopProduct:(unsigned long long)arg1 sceneName:(id)arg2 sceneNote:(id)arg3 appId:(id)arg4 fullBuyPath:(id)arg5 productExtData:(id)arg6 productPathCookies:(id)arg7 showNavigationBar:(_Bool)arg8 closeBlock:(CDUnknownBlockType)arg9;
- (void)openWeAppForShopProduct2:(id)arg1;
- (void)refreshData;
- (void)handleCouponActionButtonClick;
- (void)handleRedpacketActionButtonClick;
- (void)handleActionButtonClick:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutLotteryWinTimeContentLabel;
- (void)layoutLotteryWinTimeTitleLabel;
- (void)layoutLotteryWinCountContentLabel;
- (void)layoutLotteryWinCountTitleLabel;
- (void)layoutLotteryAttendContentLabel;
- (void)layoutLotteryAttendTitleLabel;
- (void)layoutLotteryPrizeContentLabel;
- (void)layoutLotteryPrizeTitleLabel;
- (void)layoutSeparateLine;
- (_Bool)isExpired;
- (_Bool)isShowTimeOutLabel;
- (_Bool)isFinishEdit;
- (_Bool)isPrizeMilestoneMiniApp;
- (_Bool)isPrizeMilestoneFreeGift;
- (void)layoutActionButton;
- (void)rotateView:(id)arg1 angle:(double)arg2;
- (void)layoutLotteryImageView;
- (void)createLotteryPrizeImageViewIfNeeded;
- (void)layoutLiveSpecifiedLabel;
- (void)layoutLotteryPrizeImageViewIfNeeded;
- (void)layoutPrizeLabel;
- (void)layoutTitleLabel;
- (void)layoutNameLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutAgreementText;
- (void)layoutGetPrizeMethodView;
- (void)layoutTimeOutLabel;
- (void)layoutLotteryIcon;
- (void)layoutContentView;
- (void)layoutMainScrollView;
- (void)layoutUI;
- (void)updateImageWithHeadURLString:(id)arg1 size:(struct CGSize)arg2;
- (void)updateGenericMilestoneData;
- (void)updateRedpacketData;
- (void)updateCouponData;
- (_Bool)shouldShowActionButton;
- (void)updateData;
- (void)viewDidLayoutSubviews;
- (void)updateNav;
- (void)viewDidLoad;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1 lotteryInfo:(id)arg2 scene:(unsigned long long)arg3 anchorNickName:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 lotteryId:(id)arg7 lotteryType:(unsigned int)arg8 couponRecordInfo:(id)arg9 refreshData:(_Bool)arg10 isInLive:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

