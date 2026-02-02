//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveLikeDataMgr
{
}

- (void)onGetHighlightCheerUserWithFinderContacts:(id)arg1;
- (void)onPostFinderLiveLike:(id)arg1 taskId:(id)arg2 postResult:(id)arg3;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (void)cancelPostingTask;
- (void)updatelikeCount:(unsigned long long)arg1 taskId:(id)arg2;
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

