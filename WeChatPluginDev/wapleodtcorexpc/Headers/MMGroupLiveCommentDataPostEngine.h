//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMGroupLiveCommentDataPostEngine
{
}

- (void)onPostLiveMessageResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (id)tryExtractPostingTaskWithPostTaskID:(unsigned long long)arg1 boxType:(unsigned int)arg2;
- (_Bool)applyPostLiveMessageWithPostTask:(id)arg1;
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

