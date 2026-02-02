//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MBErrorInfo, NSArray, NSString;

@protocol IMBStorage <NSObject>
- (MBErrorInfo *)removeLocalData:(NSString *)arg1 otherBizName:(NSString *)arg2 key:(NSString *)arg3;
- (NSArray *)getLocalDataAllKeys:(NSString *)arg1 otherBizName:(NSString *)arg2;
- (MBErrorInfo *)clearLocalData:(NSString *)arg1 otherBizName:(NSString *)arg2;
- (NSArray *)getLocalDataSize:(NSString *)arg1;
- (MBErrorInfo *)setLocalData:(NSString *)arg1 otherBizName:(NSString *)arg2 key:(NSString *)arg3 data:(NSString *)arg4 dataType:(NSString *)arg5;
- (NSArray *)getLocalData:(NSString *)arg1 otherBizName:(NSString *)arg2 key:(NSString *)arg3;
@end

