//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KidsWatchRegisterReportObject : NSObject
{
}

+ (void)reportCancel;
+ (void)reportFailureWithErrorCode:(int)arg1;
+ (void)reportSuccessWithKidsUserName:(id)arg1;
+ (void)reportAction:(unsigned long long)arg1 kidsUserName:(id)arg2 errorCode:(int)arg3;

@end

