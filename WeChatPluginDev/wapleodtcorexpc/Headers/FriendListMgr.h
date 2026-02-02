//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface FriendListMgr
{
    NSMutableSet *m_downliadingPackageLists;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onFriendListSynced:(id)arg1;
- (_Bool)downloadFriendListForType:(unsigned long long)arg1 InScene:(unsigned long long)arg2;
- (void)clearFriendListForType:(unsigned long long)arg1;
- (id)getFriendListForType:(unsigned long long)arg1;
- (void)SaveFriendListArchive:(id)arg1 packageListArchive:(id)arg2;
- (id)LoadFriendListArchive:(id)arg1;
- (id)getFriendListPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

