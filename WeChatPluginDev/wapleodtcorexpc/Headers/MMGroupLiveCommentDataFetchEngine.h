//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMGroupLiveCommentDataFetchEngine
{
}

- (id)filterLikeMsg:(id)arg1;
- (id)tranferToLiveCommentDataItems:(id)arg1 roomId:(id)arg2;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (id)commentDataMgr;
- (_Bool)applyGetLiveMessageWithTaskId:(id)arg1;
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

