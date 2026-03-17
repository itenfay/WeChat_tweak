//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ServiceAuthUtil : NSObject
{
}

+ (unsigned char)valueRepresentOpen:(unsigned long long)arg1;
+ (unsigned long long)statusBitForService:(unsigned long long)arg1;
+ (unsigned long long *)extStatusForService:(unsigned long long)arg1 extStatus1:(unsigned long long *)arg2 extStatus2:(unsigned long long *)arg3;

@end

