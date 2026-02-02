//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSMutableDictionary, NSString, UISwitch, UIView;

@interface WeixinOpenServiceViewController
{
    struct map<unsigned long, OpenServiceRowType, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, OpenServiceRowType>>> m_mapRowToRowType;
    NSMutableDictionary *m_dictToLink;
    UISwitch *m_searchSwitch;
    MMTableViewInfo *_tableViewInfo;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIView *_confirmView;
    unsigned long long _userType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(retain, nonatomic) UIView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (unsigned long long)convertFromOpenServiceType:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)sendCloseAllRequest;
- (void)onFinishBtnClick;
- (void)onCloseBtnClick;
- (void)onSwitchChanged:(id)arg1 rowType:(long long)arg2;
- (void)onSwitchChanged_5:(id)arg1;
- (void)onSwitchChanged_4:(id)arg1;
- (void)onSwitchChanged_3:(id)arg1;
- (void)onSwitchChanged_2:(id)arg1;
- (void)onSwitchChanged_1:(id)arg1;
- (_Bool)getSwitchStatus:(unsigned long long)arg1;
- (id)makeSwitchCellWithRow:(unsigned long long)arg1;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)initConfirmView;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)initRowType;
- (void)initDict;
- (id)initWithUserType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

