//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InviteFriendLogic, MMTableViewInfo, NSString;

@interface InviteFriendViewController
{
    MMTableViewInfo *_tableViewInfo;
    InviteFriendLogic *_inviteLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) InviteFriendLogic *inviteLogic; // @synthesize inviteLogic=_inviteLogic;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)makeInviteSourceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeHeaderView:(id)arg1;
- (void)initTableCells;
- (void)initTableView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupInviteLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

