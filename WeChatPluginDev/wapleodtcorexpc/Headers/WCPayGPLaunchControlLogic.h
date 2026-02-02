//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCPayGPCustomizeLaunchCgi, WCPaySolitairePageSheet;
@protocol WCPayGPLaunchControlLogicDelegate;

@interface WCPayGPLaunchControlLogic
{
    _Bool _bEnableReportLocation;
    _Bool _bEnableReportSSID;
    _Bool _bIsLaunchSucc;
    _Bool _bIsSoliThemeCut;
    unsigned long long _launchTimeStamp;
    NSMutableArray *_solitaireList;
    WCPaySolitairePageSheet *_solitairePageSheet;
    id <WCPayGPLaunchControlLogicDelegate> _launchDelegate;
    NSString *_currentUploadCliMsgId;
    WCPayGPCustomizeLaunchCgi *_customizeLaunchCgi;
    NSString *_launchBillNo;
    long long _launchPayerCount;
    NSString *_soliMemContentInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *soliMemContentInfo; // @synthesize soliMemContentInfo=_soliMemContentInfo;
@property(nonatomic) _Bool bIsSoliThemeCut; // @synthesize bIsSoliThemeCut=_bIsSoliThemeCut;
@property(nonatomic) long long launchPayerCount; // @synthesize launchPayerCount=_launchPayerCount;
@property(retain, nonatomic) NSString *launchBillNo; // @synthesize launchBillNo=_launchBillNo;
@property(nonatomic) _Bool bIsLaunchSucc; // @synthesize bIsLaunchSucc=_bIsLaunchSucc;
@property(retain, nonatomic) WCPayGPCustomizeLaunchCgi *customizeLaunchCgi; // @synthesize customizeLaunchCgi=_customizeLaunchCgi;
@property(retain, nonatomic) NSString *currentUploadCliMsgId; // @synthesize currentUploadCliMsgId=_currentUploadCliMsgId;
@property(nonatomic) __weak id <WCPayGPLaunchControlLogicDelegate> launchDelegate; // @synthesize launchDelegate=_launchDelegate;
@property(retain, nonatomic) WCPaySolitairePageSheet *solitairePageSheet; // @synthesize solitairePageSheet=_solitairePageSheet;
@property(retain, nonatomic) NSMutableArray *solitaireList; // @synthesize solitaireList=_solitaireList;
@property(nonatomic) unsigned long long launchTimeStamp; // @synthesize launchTimeStamp=_launchTimeStamp;
@property(nonatomic) _Bool bEnableReportSSID; // @synthesize bEnableReportSSID=_bEnableReportSSID;
@property(nonatomic) _Bool bEnableReportLocation; // @synthesize bEnableReportLocation=_bEnableReportLocation;
- (void)onSolitaireDisplayViewControllerDismiss;
- (void)onSolitairePageSheetClickImport:(id)arg1;
- (void)onSolitairePageSheetClickShowDetail:(id)arg1;
- (void)onSolitairePageSheetClickCancel;
- (void)showSolitairePageSheet;
- (void)onWCPayGPLaunchVCClickImportFromSolitaire;
- (_Bool)showImportFromSolitaireEntry;
- (void)notifyViewControllerAfterLaunchSucc;
- (void)openH5WithUrl:(id)arg1;
- (id)genWCRealnameInfoFromRealnameItem:(id)arg1;
- (void)dismissAndStopLogic;
- (void)saveGroupPaySvrConfig:(id)arg1;
- (void)addAAC2CMsgWithMsgContent:(id)arg1;
- (void)onGetCustomizeLaunchResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetActivityAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCommonAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetGroupPaySvrConfigResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)sendGroupPaySvrConfigRequest;
- (void)onWCPayGPMemberFillMoneyControllerBackWithSelectContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPMemberFillMoneyControllerCancel;
- (void)onWCPayGPSelectViewControllerFinish:(id)arg1;
- (void)onWCPayGPSelectViewControllerCancel;
- (void)OnCdnUpload:(id)arg1;
- (void)continueUploadCdnWithClientMsgId:(id)arg1 filePath:(id)arg2;
- (void)onWCPayGPLaunchVCNeedUploadImage:(id)arg1;
- (void)onWCPayGPLaunchVCClickOrderHistoryEntry;
- (void)launchCustomizeAARequestWithActivityTheme:(id)arg1;
- (void)launchActivityAARequestWithActivityTheme:(id)arg1 totalAmount:(unsigned long long)arg2 payerItems:(id)arg3;
- (void)launchCommonAARequestWithMemberCount:(unsigned int)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(id)arg3 payerUsernameArray:(id)arg4;
- (id)getGroupPayReportData:(unsigned long long)arg1 launchTheme:(id)arg2;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyMode;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(id)arg1 withIgnoreContact:(id)arg2 withSelectMemberSource:(unsigned long long)arg3;
- (void)onWCPayGPLaunchViewControllerCancel;
- (void)reportLocationAndWifi;
- (void)setupPfData;
- (void)loadConfigDataCache;
- (void)setupGroupPayOperationData;
- (void)startLogic;
- (void)stopLogic;
- (void)setLaunchLogicDelegate:(id)arg1;
- (id)initWithQueryPfInfoData:(id)arg1;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2 amount:(long long)arg3 title:(id)arg4;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

