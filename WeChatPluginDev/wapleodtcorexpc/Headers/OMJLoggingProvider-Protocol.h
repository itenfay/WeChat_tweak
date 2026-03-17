//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OMJLoggingProvider <NSObject>
- (void)logFatalWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logErrorWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logWarnWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logDebugWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logInfoWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
@end

