//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLotteryGetPrizeMethodView, MMFinderLiveLotteryInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveLotteryDetailCardGiftView, MMUIButton, MMUILabel, NSString, RichTextView, UIImageView, UIScrollView, UIView, WCAddressBaseAddress, WCFinderContact;

@interface WCFinderLiveLotteryWinDetailViewController
{
    int _fromScene;
    unsigned long long _sourceType;
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
    WCAddressBaseAddress *_addressInfo;
    unsigned long long _objectId;
    unsigned long long _liveId;
    MMFinderLiveLotteryGetPrizeMethodView *_getPrizeMethodView;
    RichTextView *_agreementText;
    WCFinderContact *_anchorContact;
    MMLiveLotteryDetailCardGiftView *_giftView;
}

+ (long long)transferAliasRoleTypeFromPersonalMsgScene:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveLotteryDetailCardGiftView *giftView; // @synthesize giftView=_giftView;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodView *getPrizeMethodView; // @synthesize getPrizeMethodView=_getPrizeMethodView;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) WCAddressBaseAddress *addressInfo; // @synthesize addressInfo=_addressInfo;
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
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
- (id)audienceLogReporter;
- (_Bool)isShowGameTeamUp;
- (_Bool)isShowPackageGift;
- (void)reportLotteryDetail:(_Bool)arg1;
- (id)getActionButtonChangeText:(id)arg1 font:(id)arg2;
- (_Bool)isFinishOrder;
- (void)refreshData;
- (void)gotoChatViewVCWithContact:(id)arg1;
- (void)handelMsgEdit:(id)arg1 type:(int)arg2;
- (id)getAddressDetailString:(id)arg1;
- (void)didSelectAddress:(id)arg1;
- (void)onShowMyAddress;
- (void)freeOrderUpdateLotteryInfo;
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
- (void)layoutActionButton;
- (void)rotateView:(id)arg1 angle:(double)arg2;
- (void)layoutLotteryImageView;
- (void)layoutPrizeLabel;
- (void)layoutTitleLabel;
- (void)layoutNameLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutAgreementText;
- (void)layoutGetPrizeMethodView;
- (void)layoutPackageGiftView;
- (void)layoutTimeOutLabel;
- (void)layoutLotteryIcon;
- (void)layoutContentView;
- (void)layoutMainScrollView;
- (void)layoutUI;
- (id)innerGetLotteryAttendTypeStr;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)updateImageWithHeadURLString:(id)arg1 size:(struct CGSize)arg2;
- (void)updateData;
- (void)viewDidLayoutSubviews;
- (void)updateNav;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1 lotteryInfo:(id)arg2 scene:(unsigned long long)arg3 anchorNickName:(id)arg4 anchorContact:(id)arg5 objectId:(unsigned long long)arg6 liveId:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

