//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BaseCRC : NSObject
{
}

+ (unsigned short)getCRC16:(unsigned short)arg1 Bytes:(char *)arg2 Length:(unsigned int)arg3;
+ (unsigned short)getCRC16_Byte:(unsigned short)arg1 Byte:(unsigned char)arg2;

@end

