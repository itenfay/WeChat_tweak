//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;

@protocol MegaVideoLongVideoFeedsPrefetchService <NSObject, UnitRCBaseProtocol>
- (void)getPrefetchResultAsync:(_Bool)arg1 onCompleted:(void (^)(NSData *))arg2;
- (_Bool)isPrefetching;
- (void)clearCurrentPrefetchResult;
- (NSData *)getPrefetchResult:(_Bool)arg1;
- (void)checkPrefetchFeedsWithCallback:(NSData *)arg1 onCompleted:(void (^)(_Bool))arg2;
- (void)checkPrefetchFeeds:(NSData *)arg1;
@end

