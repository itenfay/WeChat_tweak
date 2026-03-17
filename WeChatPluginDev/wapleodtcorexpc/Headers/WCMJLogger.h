//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMJLogger : NSObject
{
}

- (void)logFatalWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logErrorWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logWarnWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logDebugWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logInfoWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

