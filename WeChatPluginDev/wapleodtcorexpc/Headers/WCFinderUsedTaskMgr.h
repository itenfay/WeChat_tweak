//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedContentVM;

@interface WCFinderUsedTaskMgr
{
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)taskDataWithType:(unsigned long long)arg1;
- (void)updateSnapShot:(id)arg1;
- (void)addOrUpdateUsedTaskData:(double)arg1;
- (_Bool)videoPlayCompleted:(double)arg1;
- (id)shareListViewControllerWithDataItem:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)setUsedTaskData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

