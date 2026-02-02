//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandOpenSpecificViewHandler, ClickCommandRequestInfo, CustomMenuToolView, CustomSubMenuFloatView, MMBizMenuInfo, NSMutableArray, NSString;

@interface BrandCustomStyleUILogicController
{
    CustomMenuToolView *m_menuToolView;
    CustomSubMenuFloatView *m_subMenuFloatView;
    MMBizMenuInfo *m_menuData;
    _Bool m_isInMenuMode;
    _Bool m_isMsgReceiving;
    BrandOpenSpecificViewHandler *_openSpecificViewHandler;
    _Bool m_hasInit;
    ClickCommandRequestInfo *m_reportInfo;
    _Bool m_hasSendCgiSuccess;
    NSMutableArray *m_pickImageMd5List;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_pickImageMd5List; // @synthesize m_pickImageMd5List;
@property(retain, nonatomic) ClickCommandRequestInfo *m_reportInfo; // @synthesize m_reportInfo;
@property(retain, nonatomic) MMBizMenuInfo *m_menuData; // @synthesize m_menuData;
@property(retain, nonatomic) CustomSubMenuFloatView *m_subMenuFloatView; // @synthesize m_subMenuFloatView;
@property(retain, nonatomic) CustomMenuToolView *m_menuToolView; // @synthesize m_menuToolView;
- (_Bool)isNoNeedShowNormalToolView;
- (id)getOpenWeAppMenuButton;
- (id)getChangeToMenuButton;
- (void)updateIfCreateToolView:(id)arg1 inputPresenter:(id)arg2;
- (void)removeCustomToolView;
- (void)updateIfViewDidAppear;
- (void)updateIfViewWillAppear;
- (void)addMsgForUsr:(id)arg1;
- (void)processLocationDidFinish;
- (void)saveAchievedImageMd5:(id)arg1;
- (_Bool)shouldSaveAchievedImageMd5;
- (void)processImageDidFinish;
- (void)processImageDidCancel;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
- (void)setLastMenuMode:(_Bool)arg1;
- (_Bool)getLastMenuMode;
- (_Bool)canReloadViewIfMemoryWarning;
- (void)onTopBarFrameChanged;
- (void)updateFloatContentView;
- (_Bool)hasDraft;
- (id)transferMenuEcsData2MpEcsJumpInfo:(id)arg1;
- (id)buttonListFromArr:(id)arg1 isSubMenu:(_Bool)arg2;
- (id)getSubMenuInfoByIndex:(long long)arg1;
- (id)getMenuInfo;
- (void)stopReceiveMsg;
- (void)startReceiveMsg;
- (_Bool)shouldDismissCurrentViewController;
- (void)cleanPickImageMd5List;
- (void)addItem2PickImageMd5List:(id)arg1;
- (id)getPickImageMd5List;
- (void)createCameraScanViewController;
- (void)SendClickNotify:(id)arg1 ClickCommandRequestInfo:(id)arg2;
- (void)startReceiveMsg:(id)arg1;
- (void)onReportActionEventAndContentXML:(id)arg1;
- (id)getCDATAWithJSON:(id)arg1;
- (void)onRecordActionEvent:(id)arg1 toBrand:(id)arg2;
- (void)onReportParentClickEvent:(id)arg1;
- (void)onReportClickEvent:(id)arg1 toBrand:(id)arg2;
- (void)finishedChangeToInputMode;
- (void)onChangeToInputMode;
- (void)finishedChangeToMenuMode;
- (void)swichToolViewToCustomView;
- (void)changeToMenuMode;
- (void)onClickOpenWeAppButton;
- (_Bool)shouldShowChangeModeBtn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)shouldDirectShowImagePicker;
- (void)obtainScanResultDidFinish:(id)arg1;
- (_Bool)shouldBackToSessionImmediately;
- (_Bool)shouldObtainScanResult;
- (id)getBrandContactUsername;
- (void)onJumpToBrandSearchView:(id)arg1;
- (void)onJumpToPOIView:(id)arg1;
- (void)onJumpToPicView:(id)arg1;
- (void)onJumpToScanView:(id)arg1;
- (void)handleOpenSpecificView:(id)arg1;
- (_Bool)isOpenNativeUrl:(id)arg1;
- (_Bool)isWeGoRecommed:(id)arg1;
- (_Bool)isOpenSpecificView:(id)arg1;
- (void)onDisconnectDevice;
- (void)onConnectDevice;
- (void)onJumpToEcs:(id)arg1;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2 btnName:(id)arg3 btnLevel:(unsigned long long)arg4;
- (_Bool)onJumpToNativeView:(id)arg1;
- (void)onJumpToWebView:(id)arg1;
- (void)onRecordActionEvent:(id)arg1;
- (void)onReportClickEvent:(id)arg1;
- (void)onChangeToMenuMode:(id)arg1;
- (void)onSubMenuDismiss;
- (void)onSubMenuPresentWithIndex:(long long)arg1 ArrowX:(double)arg2;
- (void)createMenuToolView;
- (void)loadMenuData;
- (id)initWithContact:(id)arg1 WithDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

