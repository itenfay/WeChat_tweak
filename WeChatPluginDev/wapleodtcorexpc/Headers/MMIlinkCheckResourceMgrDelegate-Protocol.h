//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMIlinkCheckResourceInfo, NSArray, NSData, NSDictionary, NSString;

@protocol MMIlinkCheckResourceMgrDelegate <NSObject>
- (void)onCheckResource:(NSString *)arg1 resources:(NSArray *)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 isBatch:(_Bool)arg6 timeStamp:(unsigned int)arg7;
- (void)configParameters:(void *)arg1;

@optional
- (void)onReceiveGetSpecifiedResource:(NSString *)arg1 name:(NSString *)arg2 version:(unsigned int)arg3 extInfo:(NSString *)arg4;
- (void)onReceiveCheckUpdateBackend:(NSString *)arg1 nameList:(NSArray *)arg2;
- (void)onReceiveBugFixCDN:(MMIlinkCheckResourceInfo *)arg1;
- (void)onReceiveCheckResource:(NSString *)arg1 resources:(NSArray *)arg2;
- (void)onSpecifiedCheckResource:(NSString *)arg1 resources:(NSArray *)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 extInfo:(NSString *)arg7;
- (void)onPeriodCheckResource:(NSArray *)arg1 resourcesDic:(NSDictionary *)arg2 noUpdateProjectIds:(NSArray *)arg3 errorProjectIds:(NSDictionary *)arg4 errorType:(unsigned long long)arg5 errorCode:(int)arg6 timeStamp:(unsigned int)arg7 nextUpdateInterval:(int)arg8 isFinish:(int)arg9 newOffset:(NSData *)arg10;
- (void)onBatchCheckResource:(NSArray *)arg1 resourcesDic:(NSDictionary *)arg2 blockTimeDic:(NSDictionary *)arg3 noUpdateProjectIds:(NSArray *)arg4 errorProjectIds:(NSDictionary *)arg5 errorType:(unsigned long long)arg6 errorCode:(int)arg7 timeStamp:(unsigned int)arg8;
@end

