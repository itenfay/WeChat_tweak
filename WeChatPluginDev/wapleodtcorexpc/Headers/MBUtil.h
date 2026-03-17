//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBUtil : NSObject
{
}

+ (unsigned long long)millisecondsWithAbsoluteTimeElapse:(unsigned long long)arg1;
+ (unsigned long long)currentAbsoluteTime;
+ (id)getMBErrorMsg:(id)arg1;
+ (int)getMBErrorCode:(id)arg1;
+ (id)getMBErrorInfo:(id)arg1;
+ (id)getBizName:(id)arg1;
+ (id)getWsAppid:(id)arg1;
+ (id)getMBDefaultDebugPath:(id)arg1;
+ (id)instanceNameToBizName:(id)arg1;
+ (id)md5:(id)arg1;
+ (id)getCurrentTimeStampString;
+ (id)getBundleData:(id)arg1;

@end

