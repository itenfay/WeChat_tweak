//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveTask, MMGroupLiveTaskId, NSString;
@protocol MMGroupLiveOnlineUserLogicDelegate;

@interface MMGroupLiveOnlineUserLogic
{
    id <MMGroupLiveOnlineUserLogicDelegate> logicDelegate;
    unsigned long long _onlineUserCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(nonatomic) __weak id <MMGroupLiveOnlineUserLogicDelegate> logicDelegate; // @synthesize logicDelegate;
- (void)onKickAudienceResult:(id)arg1 userName:(id)arg2 liveId:(unsigned long long)arg3 roomId:(id)arg4;
- (void)onGetLiveOnlineUserListWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andUserList:(id)arg3;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
@property(readonly, nonatomic) MMGroupLiveTask *liveTask;
@property(readonly, nonatomic) MMGroupLiveTaskId *groupTaskId;
- (_Bool)kickAudience:(id)arg1;
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

