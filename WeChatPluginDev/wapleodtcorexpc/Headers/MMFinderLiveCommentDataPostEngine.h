//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveCommentDataPostEngine
{
}

+ (int)convertAppMsgTypeFromPostTask:(unsigned long long)arg1;
- (void)onPostFinderLiveMessage:(id)arg1 taskId:(id)arg2 attendLottery:(_Bool)arg3 statusFlag:(unsigned int)arg4 userInfo:(id)arg5;
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

