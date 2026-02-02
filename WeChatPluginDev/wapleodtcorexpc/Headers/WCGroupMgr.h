//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol WCGroupMgrExt;

@interface WCGroupMgr
{
    _Bool m_bMemCacheNeedReload;
    NSMutableDictionary *m_groups;
    NSObject<WCGroupMgrExt> *m_delegate;
    NSString *m_fromUsrName;
    NSString *m_initFromPath;
    unsigned int m_lastUpdateAllGroupsTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_lastUpdateAllGroupsTime; // @synthesize m_lastUpdateAllGroupsTime;
@property(retain, nonatomic) NSString *m_initFromPath; // @synthesize m_initFromPath;
@property(retain, nonatomic) NSString *m_fromUsrName; // @synthesize m_fromUsrName;
@property(nonatomic) __weak NSObject<WCGroupMgrExt> *m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGroupListReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGroupMemberOpReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGroupOpReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doGroupListOp:(unsigned int)arg1 withMD5:(id)arg2;
- (void)doGroupMemberOp:(unsigned int)arg1 onGroup:(id)arg2 withGroupName:(id)arg3 withMemberList:(id)arg4 withScene:(long long)arg5;
- (void)doGroupMemberOp:(unsigned int)arg1 onGroup:(id)arg2 withGroupName:(id)arg3 withMemberList:(id)arg4;
- (void)doGroupOp:(unsigned int)arg1 onGroup:(id)arg2 withGroupName:(id)arg3;
- (_Bool)tryFuzzDefaultGroup;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 withScene:(long long)arg3;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 withScene:(long long)arg3;
- (void)deleteGroup:(id)arg1;
- (void)localDeleteAllGroups;
- (_Bool)canUpdateAllGroups;
- (void)updateAllGroups;
- (id)getGroupByID:(id)arg1;
- (id)getAllGroups;
- (void)dealloc;
- (id)init;
- (void)clearMD5;
- (void)clearMemoryCache;
- (void)saveData;
- (void)tryLoadData;
- (id)pathForGroupData;

@end

