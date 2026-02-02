//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, NSMutableDictionary, NSString;
@protocol MMFinderLiveOnlineUserLogicDelegate;

@interface MMFinderLiveOnlineUserLogic
{
    id <MMFinderLiveOnlineUserLogicDelegate> logicDelegate;
    NSMutableDictionary *_userCommentDisableDict;
    NSString *_finderUserName;
    unsigned long long _filterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long filterScene; // @synthesize filterScene=_filterScene;
@property(readonly, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSMutableDictionary *userCommentDisableDict; // @synthesize userCommentDisableDict=_userCommentDisableDict;
@property(nonatomic) __weak id <MMFinderLiveOnlineUserLogicDelegate> logicDelegate; // @synthesize logicDelegate;
- (void)onFinderLiveKtvGetPlayMember:(id)arg1 taskId:(id)arg2 playMemberResult:(id)arg3;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 onlineMemberResult:(id)arg3;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
- (void)updateFilterScene:(unsigned long long)arg1;
- (void)fetchKtvPlayMemberList;
- (void)fetchGloryList;
- (_Bool)fetchOnlineUserList;
- (void)unRegisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

