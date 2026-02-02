//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMFinderLiveTopCommentContentView, NSMutableArray, NSMutableSet, NSString;

@interface MMFinderLiveTopCommentLogic : NSObject
{
    _Bool _isAnimating;
    _Bool _isScrolling;
    unsigned int _displayDuration;
    MMFinderLiveTopCommentContentView *_containerView;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_notifyCommentItemArr;
    NSMutableSet *_commentMsgIdSet;
    NSMutableSet *_notifyProductIdSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) unsigned int displayDuration; // @synthesize displayDuration=_displayDuration;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSMutableSet *notifyProductIdSet; // @synthesize notifyProductIdSet=_notifyProductIdSet;
@property(retain, nonatomic) NSMutableSet *commentMsgIdSet; // @synthesize commentMsgIdSet=_commentMsgIdSet;
@property(retain, nonatomic) NSMutableArray *notifyCommentItemArr; // @synthesize notifyCommentItemArr=_notifyCommentItemArr;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveTopCommentContentView *containerView; // @synthesize containerView=_containerView;
- (id)getCommentArrayFilterType:(id)arg1 validType:(unsigned int)arg2;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (void)onFontSizeChange;
- (void)addTopComment:(id)arg1;
- (_Bool)innerAppendNewNotifyComments:(id)arg1 filterRepeat:(_Bool)arg2;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (_Bool)appendTopComment:(id)arg1;
- (void)tryShowNextTopCommentWithExpectedPubbleCell:(id)arg1;
- (_Bool)startDisplayAnimated;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onExitLive;
- (void)onEnterLive;
- (id)initWithContainerView:(id)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

