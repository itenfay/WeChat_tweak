//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface DeviceRankUsersMgr
{
    NSMutableArray *m_deviceRankUserList;
    _Bool m_bLoaded;
}

- (void).cxx_destruct;
- (void)updateOrAddCoverUrl:(id)arg1 WithUsername:(id)arg2;
- (id)getCoverUrlByUserName:(id)arg1;
- (void)SaveDeviceRankUsers;
- (id)getRankUserProfileFilePath;
- (void)tryLoadDeviceRankUsers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

