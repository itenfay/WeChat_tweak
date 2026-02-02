//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetTransferWordingResponse, MMTipsViewController, NSMutableDictionary, NSMutableSet, NSString, OpenMinimchGuide, RecvChannel, UIView, WCActionSheet, WCPayGetTransferWordingCgi, WCPayNoticeItemView;
@protocol WCPayTransferMoneyStatusViewControllerDelegate;

@interface WCPayTransferMoneyStatusViewController
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate;
    _Bool _m_shouldRefreshDataOnAppear;
    _Bool _m_expendAddress;
    _Bool _hasShowChannelHalfTips;
    _Bool _m_bHasChannelTypeExpousreReport;
    _Bool _m_bHasCustomerCellReport;
    _Bool _m_bNeedRefresh;
    _Bool _m_bShowingBalanceDescription;
    _Bool _didFromOpenRecvChannelPage;
    _Bool _isPreloadedLiteApp;
    unsigned int _currentSelectedRecvChannelType;
    OpenMinimchGuide *_resumeGuide;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayNoticeItemView *_noticeBanner;
    WCActionSheet *_m_actionSheet;
    MMTipsViewController *_resendTipsView;
    NSMutableDictionary *_receiveAccountDownImages;
    UIView *_topContentCantainerView;
    NSMutableDictionary *_subTitleClickInfo;
    NSMutableSet *_chanelsHasShowFirstChooseGuide;
    NSMutableDictionary *_subChannelSelectdDictionary;
    RecvChannel *_modalSelectedChannel;
}

+ (long long)indexInLocation:(struct CGPoint)arg1 withLabel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPreloadedLiteApp; // @synthesize isPreloadedLiteApp=_isPreloadedLiteApp;
@property(retain, nonatomic) RecvChannel *modalSelectedChannel; // @synthesize modalSelectedChannel=_modalSelectedChannel;
@property(retain, nonatomic) NSMutableDictionary *subChannelSelectdDictionary; // @synthesize subChannelSelectdDictionary=_subChannelSelectdDictionary;
@property(nonatomic) _Bool didFromOpenRecvChannelPage; // @synthesize didFromOpenRecvChannelPage=_didFromOpenRecvChannelPage;
@property(nonatomic) unsigned int currentSelectedRecvChannelType; // @synthesize currentSelectedRecvChannelType=_currentSelectedRecvChannelType;
@property(retain, nonatomic) NSMutableSet *chanelsHasShowFirstChooseGuide; // @synthesize chanelsHasShowFirstChooseGuide=_chanelsHasShowFirstChooseGuide;
@property(retain, nonatomic) NSMutableDictionary *subTitleClickInfo; // @synthesize subTitleClickInfo=_subTitleClickInfo;
@property(retain, nonatomic) UIView *topContentCantainerView; // @synthesize topContentCantainerView=_topContentCantainerView;
@property(retain, nonatomic) NSMutableDictionary *receiveAccountDownImages; // @synthesize receiveAccountDownImages=_receiveAccountDownImages;
@property(nonatomic) _Bool m_bShowingBalanceDescription; // @synthesize m_bShowingBalanceDescription=_m_bShowingBalanceDescription;
@property(nonatomic) _Bool m_bNeedRefresh; // @synthesize m_bNeedRefresh=_m_bNeedRefresh;
@property(nonatomic) _Bool m_bHasCustomerCellReport; // @synthesize m_bHasCustomerCellReport=_m_bHasCustomerCellReport;
@property(nonatomic) _Bool m_bHasChannelTypeExpousreReport; // @synthesize m_bHasChannelTypeExpousreReport=_m_bHasChannelTypeExpousreReport;
@property(nonatomic) _Bool hasShowChannelHalfTips; // @synthesize hasShowChannelHalfTips=_hasShowChannelHalfTips;
@property(retain, nonatomic) MMTipsViewController *resendTipsView; // @synthesize resendTipsView=_resendTipsView;
@property(retain, nonatomic) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet=_m_actionSheet;
@property(nonatomic) _Bool m_expendAddress; // @synthesize m_expendAddress=_m_expendAddress;
@property(retain, nonatomic) WCPayNoticeItemView *noticeBanner; // @synthesize noticeBanner=_noticeBanner;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(retain, nonatomic) OpenMinimchGuide *resumeGuide; // @synthesize resumeGuide=_resumeGuide;
@property(nonatomic) _Bool m_shouldRefreshDataOnAppear; // @synthesize m_shouldRefreshDataOnAppear=_m_shouldRefreshDataOnAppear;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)preloadLiteApp;
- (_Bool)shouldShowOptimizeStyle:(id)arg1;
- (_Bool)checkIfRecvSubTitleClicked:(unsigned int)arg1;
- (void)handleRecvChannelSubTitleRoutInfo:(id)arg1 channelType:(unsigned int)arg2 subTitle:(id)arg3;
- (void)setShowRecvChannelOnceUsageTips:(int)arg1;
- (_Bool)hasShowRecvChannelOnceUsageTips:(int)arg1;
- (void)sizeDidChange:(id)arg1;
- (void)didTap:(id)arg1;
- (void)onJsapiConfirmTransfer;
- (id)getTransferChatContact;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSubChannelSelectModalView:(id)arg1;
- (id)findChannelDataByChannelType:(long long)arg1;
- (void)rightBarButtonPress;
- (id)getSenderDisplayName:(id)arg1;
- (id)getReceiverDisplayName:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showResendTipsView;
- (void)reportAction:(unsigned long long)arg1;
- (void)onWCPayAddressRemarkViewCopy;
- (void)onWCPayAddressRemarkViewExpend;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getSubTitleWordingInLocal:(_Bool)arg1;
- (id)getMainTitleWordingInLocal:(_Bool)arg1 receiverContact:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onOpenQA;
- (void)requestWording;
- (void)OnRealnameSucceed;
- (void)reportLocationAndWifi;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)onClickJumpInfo:(id)arg1;
- (void)onClickAddressJumpInfo;
- (void)onClickTextInfo;
- (_Bool)isNotSentFromMeAndWaitingForReceive;
- (void)updateFooterButton:(id)arg1;
- (void)updateExposureView;
- (void)onClickRecvChannel:(id)arg1;
- (void)recvChanelTypeClickReport:(int)arg1 actionType:(int)arg2;
- (void)onClickMiddleInfo;
- (void)delayShowRecvChannelTips:(id)arg1 channelType:(int)arg2 showType:(int)arg3;
- (void)onClickOptimizePaymentOpenRecvChannelBtn:(id)arg1;
- (void)onClickOptimizePaymentCustomerInfo:(id)arg1;
- (void)onClickCustomerInfo:(id)arg1;
- (void)showFirstChooseGuide:(id)arg1;
- (void)saveFirstChooseGuideShowTimes:(long long)arg1 showTimes:(long long)arg2;
- (long long)getFirstChooseGuideShowTimes:(long long)arg1;
- (void)onClickRecvChannelInfoBtn:(id)arg1;
- (void)delayShowRecvChannelFirstTips;
- (id)getRecvChannelDataByChannelType:(int)arg1 fromDestArr:(id)arg2;
- (_Bool)didRecvChannel:(id)arg1 inRecvChannelGroup:(id)arg2;
- (void)handleRecvChannelGroupInfo:(id)arg1;
- (_Bool)checkIfChanelAvaible:(int)arg1;
- (id)getSubChannelNameById:(unsigned long long)arg1 fromChannels:(id)arg2;
- (unsigned long long)getDefaultSelectedSubChannelId:(id)arg1;
- (int)getDefalutSelectedRecvChannelType:(id)arg1;
- (void)layoutOptimizePaymentProcessStyle:(id)arg1 intoView:(id)arg2 receiverContact:(id)arg3 senderContact:(id)arg4;
- (void)reloadTableView;
- (_Bool)shouldUseSmallMargin;
- (id)checkBreakLine:(double)arg1 preStr:(id)arg2 openImName:(id)arg3;
- (double)measureWidth:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)OnHistoryOrderDetailBack;
- (_Bool)shouldInteractivePop;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

