//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSOrderedCollectionDifference, NSString, WCFinderFeedContentVM;
@protocol NSObject;

@protocol WCFinderFeedArray <NSObject>
- (_Bool)containTid:(NSString *)arg1;
- (_Bool)isAllChangeInsertTop;
- (NSOrderedCollectionDifference *)modifyChange;
- (NSArray *)mapTidArray;
- (NSArray *)tidArray;
- (_Bool)notEmpty;
- (_Bool)isEmpty;
- (long long)count;
- (void)unSink:(id <NSObject>)arg1;
- (void)sinkChange:(id <NSObject>)arg1 action:(SEL)arg2;
- (WCFinderFeedContentVM *)feedWithTid:(NSString *)arg1;
- (WCFinderFeedContentVM *)feedAtIndex:(long long)arg1;
- (long long)indexForTid:(NSString *)arg1;
- (NSArray *)feeds;
- (WCFinderFeedContentVM *)lastFeed;
- (WCFinderFeedContentVM *)firstFeed;
@end

