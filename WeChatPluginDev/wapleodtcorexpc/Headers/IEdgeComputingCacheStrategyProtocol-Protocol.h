//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EdgeComputingCacheDataModel, NSArray, NSString;

@protocol IEdgeComputingCacheStrategyProtocol <NSObject>
- (void)migrate;
- (unsigned long long)count;
- (NSArray *)query:(NSString *)arg1;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)clear;
- (void)remove:(NSString *)arg1;
- (void)save:(EdgeComputingCacheDataModel *)arg1;
- (void)close;
- (void)reset;
@end

