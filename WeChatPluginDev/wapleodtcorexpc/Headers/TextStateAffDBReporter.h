//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TextStateAffDBReporter : NSObject
{
}

+ (void)reportSquareEmpty;
+ (void)reportAction:(long long)arg1 taskType:(long long)arg2 taskRetryNum:(unsigned int)arg3 taskId:(id)arg4 TaskUseTimeMs:(unsigned long long)arg5 oldDBNum:(unsigned int)arg6 transferDBNum:(unsigned int)arg7;
+ (void)reportAction:(long long)arg1 taskType:(long long)arg2 taskId:(id)arg3;
+ (void)reportAction:(long long)arg1 taskType:(long long)arg2;
+ (void)reportAction:(long long)arg1;

@end

