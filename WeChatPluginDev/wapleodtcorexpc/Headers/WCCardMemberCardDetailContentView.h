//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCardLargeCodeView, WCShareCardMemberHeaderCardImageView;
@protocol WCCardMemberCardContentDelegate;

@interface WCCardMemberCardDetailContentView
{
    _Bool _bIsShareCardMode;
    _Bool _bIsAcceptMemberCard;
    id <WCCardMemberCardContentDelegate> _delegte;
    WCShareCardMemberHeaderCardImageView *_memberCardImgView;
    WCCardLargeCodeView *_largeCodeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCardLargeCodeView *largeCodeView; // @synthesize largeCodeView=_largeCodeView;
@property(retain, nonatomic) WCShareCardMemberHeaderCardImageView *memberCardImgView; // @synthesize memberCardImgView=_memberCardImgView;
@property(nonatomic) _Bool bIsAcceptMemberCard; // @synthesize bIsAcceptMemberCard=_bIsAcceptMemberCard;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(nonatomic) __weak id <WCCardMemberCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (void)realClosed;
- (void)onPageCodeTapWithCardSource:(struct CGRect)arg1;
- (void)refreshCode;
- (void)onReasonButtonClick;
- (void)onCodeViewFieldClick;
- (void)makeGiftCardInfoCell:(id)arg1;
- (void)makeUsedStoresCell:(id)arg1;
- (void)makeOperateCell:(id)arg1;
- (void)makeAcceptCardCell:(id)arg1;
- (double)calcOperationFieldCellHeight;
- (double)calcPayOrderCellHeight;
- (void)makePayOrderCell:(id)arg1;
- (void)makeCodeCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onOperationBtnClick:(id)arg1;
- (void)onGuidanceBtnClick:(id)arg1;
- (void)onFollowBtnClick:(id)arg1;
- (_Bool)isItemFromOutAppScene;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onMemberCardSecondaryField:(id)arg1;
- (void)onMemberCardAnnounceClicked:(id)arg1;
- (void)onMemberCardViewApplyBtnClick;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)realOpenUrl:(id)arg1;
- (double)getTableViewCellSumHeight;
- (void)onNearbyShopPhoneNumClick;
- (void)reloadContentData;
- (id)makeMemberCardFooterBgViewWithCurFooterHeight:(double)arg1;
- (id)createTableViewFooterView;
- (id)bottomAdvertiseTipsColor;
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

