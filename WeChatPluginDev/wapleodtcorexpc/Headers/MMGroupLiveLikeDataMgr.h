//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMGroupLiveLikeDataMgr
{
}

- (void)onLiveLikeResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (void)updateLikeMessage:(id)arg1 likeCount:(unsigned long long)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (_Bool)applyLikeWithPostTask:(id)arg1;
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

