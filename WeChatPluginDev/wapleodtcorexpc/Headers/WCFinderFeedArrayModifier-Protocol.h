//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSOrderedCollectionDifference, NSString, WCFinderFeedContentVM;

@protocol WCFinderFeedArrayModifier <NSObject>
- (NSOrderedCollectionDifference *)makeDiff;
- (void)resize:(NSArray *)arg1 mapper:(WCFinderFeedContentVM * (^)(WCFinderDataItem *))arg2;
- (_Bool)replaceFeed:(WCFinderFeedContentVM *)arg1 withTid:(NSString *)arg2;
- (void)sortUsingComparator:(long long (^)(id, id))arg1;
- (void)removeWithTidList:(NSArray *)arg1;
- (void)removeFeedWithTid:(NSString *)arg1;
- (void)removeFeedAtIndex:(long long)arg1;
- (void)removeAllFeeds;
- (void)insertFeeds:(NSArray *)arg1 atIndex:(long long)arg2;
- (void)insertFeedsToHead:(NSArray *)arg1;
- (void)appendFeeds:(NSArray *)arg1;
- (void)insertFeed:(WCFinderFeedContentVM *)arg1 atIndex:(long long)arg2;
- (void)appendFeed:(WCFinderFeedContentVM *)arg1;
@end

