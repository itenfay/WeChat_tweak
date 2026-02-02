//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EdgeComputingCacheDataModel, NSArray, NSString;

@protocol IEdgeComputingDataCacheProtocol <NSObject>
- (void)migrate;
- (unsigned long long)count;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)clear:(NSString *)arg1;
- (NSArray *)read:(NSString *)arg1;
- (void)save:(EdgeComputingCacheDataModel *)arg1;
- (void)close;
- (void)reset;
@end

