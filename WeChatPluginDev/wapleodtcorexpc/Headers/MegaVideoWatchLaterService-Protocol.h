//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString;
@protocol MegaVideoWatchLaterListener;

@protocol MegaVideoWatchLaterService <NSObject, UnitRCBaseProtocol>
- (void)removeListener:(id <MegaVideoWatchLaterListener>)arg1;
- (void)addListener:(id <MegaVideoWatchLaterListener>)arg1;
- (void)clearAllLocalFeeds;
- (_Bool)isInLocalFeeds:(NSString *)arg1;
- (NSData *)localFeed:(NSString *)arg1;
- (void)localFeeds:(int)arg1 callback:(void (^)(NSArray *))arg2;
- (void)modifyFeedWatchLaterStatus:(NSData *)arg1 params:(NSData *)arg2 commentScene:(int)arg3 callback:(void (^)(_Bool))arg4;
- (void)fetchData:(_Bool)arg1 ignoreCache:(_Bool)arg2 cleanUpExisting:(_Bool)arg3 callback:(void (^)(NSArray *))arg4;
@end

