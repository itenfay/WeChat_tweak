//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIButton, UIColor, WCCardDetailContentViewLogicController;

@interface WCCardBaseCardDetailContentView
{
    _Bool _bIsSelectFollowContact;
    WCCardDetailContentViewLogicController *_logicController;
    MMTableView *_tableView;
    UIButton *_deeplinkBtn;
    UIColor *_cellColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *cellColor; // @synthesize cellColor=_cellColor;
@property(retain, nonatomic) UIButton *deeplinkBtn; // @synthesize deeplinkBtn=_deeplinkBtn;
@property(nonatomic) _Bool bIsSelectFollowContact; // @synthesize bIsSelectFollowContact=_bIsSelectFollowContact;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCCardDetailContentViewLogicController *logicController; // @synthesize logicController=_logicController;
- (void)serviceFollowBtnPress:(id)arg1;
- (void)onPhoneBtnPress:(id)arg1;
- (void)makeCellBottomLineWithRowType:(id)arg1 withIndexPath:(id)arg2 withCell:(id)arg3 withCellContentHeight:(double)arg4;
- (void)makeIconGeneralCell:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 hasHandle:(_Bool)arg5 ShowFlag:(unsigned int)arg6;
- (void)makeGeneralCell:(id)arg1 title:(id)arg2 subTitle:(id)arg3 hasHandle:(_Bool)arg4 ShowFlag:(unsigned int)arg5;
- (void)makeGiftToFriendCell:(id)arg1;
- (void)makeCellList0Cell:(id)arg1 withIndexPath:(id)arg2;
- (void)makeViewBrandCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
- (void)makeOneShopCell:(id)arg1;
- (void)makeDetailViewCell:(id)arg1;
- (void)makeUseConditionCell:(id)arg1;
- (void)makeOperateCell:(id)arg1;
- (double)calcNearbyShopCellHeight;
- (double)calcUsedConditionCellHeight;
- (double)calcDetailViewCellHeight;
- (double)calcOperationFieldCellHeight;
- (_Bool)shouldUseDynamicColor;
- (void)setMainText:(id)arg1 subText:(id)arg2;
- (struct CGRect)getHeaderViewApplyBtnFrame;
- (struct CGRect)getShareCardEnterListBtnRect;
- (void)updateCardContentWithCardDataSource:(id)arg1 isShareCardMode:(_Bool)arg2 withOneUsedStoreInfo:(id)arg3 withServiceContact:(id)arg4 withCardStatus:(int)arg5;
- (void)JumoToDeepLink;
- (id)getFooterViewDeepLinksLabelColor;
- (double)createFooterViewDeeplinksAndHeight:(id)arg1 viewControllerContentHeight:(double)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3 extraInfo:(id)arg4;
- (double)createFooterViewWithGuidanceData:(id)arg1 curCardTPInfo:(id)arg2 viewControllerContentHeight:(double)arg3;
- (double)createFooterViewAcceptViewAndHeight:(id)arg1 curCardTPInfo:(id)arg2 viewControllerContentHeight:(double)arg3;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)realOpenUrl:(id)arg1;
- (id)bottomAdvertiseTipsColor;
- (id)getCommonCellBkgColor;
- (double)getTableViewCellSumHeight;
- (void)onNearbyShopPhoneNumClick;
- (double)getOneShopCellHeight;
- (double)getCommonCellHeight;
- (void)reloadContentData;
- (id)initConentViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

