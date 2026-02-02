//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UnitReadFile : NSObject
{
}

+ (id)stringFromByte:(unsigned char)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)encodeResult:(id)arg1 data:(id)arg2 encoding:(id)arg3;
+ (id)readFile:(id)arg1 param:(id)arg2 error:(id *)arg3;

@end

