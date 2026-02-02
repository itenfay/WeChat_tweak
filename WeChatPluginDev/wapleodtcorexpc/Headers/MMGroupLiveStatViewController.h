//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveInfo, MMLiveOnlineUserListView, MMLiveStatCompositeLabel, MMUILabel, NSString, UIView;

@interface MMGroupLiveStatViewController
{
    UIView *_headerView;
    MMLiveOnlineUserListView *_listView;
    MMLiveStatCompositeLabel *_totalOnlineUsersLabel;
    MMLiveStatCompositeLabel *_totalUsersLabel;
    MMUILabel *_statusLabel;
    LiveInfo *_liveInfo;
    NSString *_roomId;
    unsigned long long _onlineUserCount;
    unsigned long long _totalUserCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalUserCount; // @synthesize totalUserCount=_totalUserCount;
@property(nonatomic) unsigned long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) MMUILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) MMLiveStatCompositeLabel *totalUsersLabel; // @synthesize totalUsersLabel=_totalUsersLabel;
@property(retain, nonatomic) MMLiveStatCompositeLabel *totalOnlineUsersLabel; // @synthesize totalOnlineUsersLabel=_totalOnlineUsersLabel;
@property(retain, nonatomic) MMLiveOnlineUserListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)onHeadImageClicked:(id)arg1;
- (void)onGetLiveOnlineUserStateListWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andUserStateList:(id)arg3;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)setupData;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutHeaderView;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLiveInfo:(id)arg1 roomId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

