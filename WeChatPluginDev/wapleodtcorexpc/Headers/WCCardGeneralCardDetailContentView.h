//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, WCCardChoosePeopleLabelView, WCShareCardGeneralHeaderView, WCShareCardGeneralReceiveHeaderView;
@protocol WCCardGeneralCardContentDelegate;

@interface WCCardGeneralCardDetailContentView
{
    _Bool _bIsShareCardMode;
    id <WCCardGeneralCardContentDelegate> _delegte;
    WCShareCardGeneralHeaderView *_generalCardHeaderView;
    WCShareCardGeneralReceiveHeaderView *_generalReceiverHeaderView;
    MMUIView *_separateStrokeView;
    WCCardChoosePeopleLabelView *_chooseView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCardChoosePeopleLabelView *chooseView; // @synthesize chooseView=_chooseView;
@property(retain, nonatomic) MMUIView *separateStrokeView; // @synthesize separateStrokeView=_separateStrokeView;
@property(retain, nonatomic) WCShareCardGeneralReceiveHeaderView *generalReceiverHeaderView; // @synthesize generalReceiverHeaderView=_generalReceiverHeaderView;
@property(retain, nonatomic) WCShareCardGeneralHeaderView *generalCardHeaderView; // @synthesize generalCardHeaderView=_generalCardHeaderView;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(nonatomic) __weak id <WCCardGeneralCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onWCCardSecondaryField:(id)arg1;
- (_Bool)isItemFromOutAppScene;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onGeneralCardViewOperateBtnClick;
- (void)onGeneralCardViewApplyBtnClick;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)realOpenUrl:(id)arg1;
- (void)clickWhoCanSeeBtn:(id)arg1;
- (struct CGRect)getHeaderViewApplyBtnFrame;
- (void)onNearbyShopPhoneNumClick;
- (void)reloadContentData;
- (void)onShareCardJumpToFinderBtnClick:(id)arg1;
- (void)onShareCardImgBtnClick:(id)arg1;
- (double)getTableViewCellSumHeight;
- (void)setMainText:(id)arg1 subText:(id)arg2;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(_Bool)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

