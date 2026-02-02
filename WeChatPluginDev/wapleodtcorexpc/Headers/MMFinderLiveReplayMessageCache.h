//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveReplayMessagePage;
@protocol MMFinderLiveReplayMessageCacheDelegate;

@interface MMFinderLiveReplayMessageCache : NSObject
{
    _Bool _isNotPrependInfo;
    id <MMFinderLiveReplayMessageCacheDelegate> _delegate;
    unsigned long long _capacity;
    unsigned long long _count;
    MMFinderLiveReplayMessagePage *_mostRecentlyUsedPage;
    MMFinderLiveReplayMessagePage *_leastRecentlyUsedPage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNotPrependInfo; // @synthesize isNotPrependInfo=_isNotPrependInfo;
@property(retain, nonatomic) MMFinderLiveReplayMessagePage *leastRecentlyUsedPage; // @synthesize leastRecentlyUsedPage=_leastRecentlyUsedPage;
@property(retain, nonatomic) MMFinderLiveReplayMessagePage *mostRecentlyUsedPage; // @synthesize mostRecentlyUsedPage=_mostRecentlyUsedPage;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) __weak id <MMFinderLiveReplayMessageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)evaluateAndRaisePagePrefetchNotificationForTimeOffsetAt:(unsigned int)arg1;
- (id)pageContainingFrameAtTimeOffset:(unsigned int)arg1 updateAccessOrder:(_Bool)arg2;
- (void)removePage:(id)arg1;
- (_Bool)hasPageContainingFrameAtTimeOffset:(unsigned int)arg1;
- (id)frameAtTimeOffset:(unsigned int)arg1 combinePreviousFramesInPage:(_Bool)arg2 peek:(_Bool)arg3;
- (void)addPage:(id)arg1;
- (id)initWithPageCapacity:(unsigned long long)arg1;

@end

