//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFootageReplayModel, MMFinderLiveReplayMessageCache, NSData, NSString;
@protocol MMFinderLiveReplayMessageSourceDelegate;

@interface MMFinderLiveReplayMessageSource : NSObject
{
    _Bool _fetching;
    _Bool _initialCommentItemsPrepended;
    unsigned int _lastRequestEndOffset;
    unsigned int _startOffset;
    unsigned int _maxTimeOffset;
    int _scenario;
    id <MMFinderLiveReplayMessageSourceDelegate> _delegate;
    MMFinderLiveReplayMessageCache *_messageCache;
    NSData *_lastBuffer;
    NSString *_liveDesc;
    MMFinderLiveFootageReplayModel *_footageReplayModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel; // @synthesize footageReplayModel=_footageReplayModel;
@property(nonatomic) int scenario; // @synthesize scenario=_scenario;
@property(copy, nonatomic) NSString *liveDesc; // @synthesize liveDesc=_liveDesc;
@property(nonatomic) _Bool initialCommentItemsPrepended; // @synthesize initialCommentItemsPrepended=_initialCommentItemsPrepended;
@property(nonatomic) unsigned int maxTimeOffset; // @synthesize maxTimeOffset=_maxTimeOffset;
@property(nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned int lastRequestEndOffset; // @synthesize lastRequestEndOffset=_lastRequestEndOffset;
@property(retain, nonatomic) MMFinderLiveReplayMessageCache *messageCache; // @synthesize messageCache=_messageCache;
@property(nonatomic) __weak id <MMFinderLiveReplayMessageSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPagePrefetchSuggestedForTimeOffsetAt:(unsigned int)arg1;
- (void)onPageStarvingForTimeOffsetAt:(unsigned int)arg1;
- (void)fetchMessagesAtTime:(unsigned int)arg1;
- (void)updateLiveDesc:(id)arg1;
- (id)frameItemForTime:(unsigned int)arg1 combinePreviousFramesInPage:(_Bool)arg2;
- (id)initWithFootageReplayModel:(id)arg1;
- (id)initWithScenario:(unsigned long long)arg1;
- (id)initWithScenario:(unsigned long long)arg1 startOffset:(unsigned int)arg2 endOffset:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

