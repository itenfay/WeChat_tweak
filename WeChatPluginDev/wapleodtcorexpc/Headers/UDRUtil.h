//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UDRUtil : NSObject
{
}

+ (void)callUDRFailCallBack:(id)arg1 name:(id)arg2 version:(int)arg3 errorType:(int)arg4 errorCode:(int)arg5 scene:(long long)arg6;
+ (void)callUDRSuccessCallback:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
+ (void)callUDRCheckSuccessCallback:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4;
+ (void)callUDRPeriodStartCallback:(id)arg1;

@end

