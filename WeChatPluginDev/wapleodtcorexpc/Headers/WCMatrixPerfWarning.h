//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMatrixPerfWarning : NSObject
{
}

+ (double)parseHangTimeFromNotification:(id)arg1;
+ (unsigned long long)parseAvailableMemoryFromNotification:(id)arg1;
+ (unsigned long long)parseFootprintMemoryFromNotification:(id)arg1;
+ (_Bool)parseMemoryExceededFromNotification:(id)arg1;
+ (long long)parseThermalStateFromNotification:(id)arg1;
+ (unsigned long long)parseEventFromNotification:(id)arg1;
+ (void)postNotification:(unsigned long long)arg1 customInfo:(id)arg2;
+ (void)postNotification:(unsigned long long)arg1;

@end

