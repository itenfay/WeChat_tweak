//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WARealtimeDataOperationExt <NSObject>
- (void)appid:(NSString *)arg1 operationsIdList:(NSMutableArray *)arg2 resultWithErrCode:(int)arg3 errMsg:(NSString *)arg4 dataSize:(unsigned long long)arg5;
@end

