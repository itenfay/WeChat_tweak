//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFICUtilities : NSObject
{
}

+ (id)dispatchQueue;
+ (id)DirectoryPath;
+ (int)PageSize;
+ (CDStruct_bd2f613f)FICUUIDBytesFromMD5HashOfString:(id)arg1;
+ (CDStruct_bd2f613f)FICUUIDBytesWithString:(id)arg1;
+ (id)FICStringWithUUIDBytes:(CDStruct_bd2f613f)arg1;
+ (unsigned long long)FICByteAlignForCoreAnimation:(unsigned long long)arg1;
+ (unsigned long long)FICByteAlign:(unsigned long long)arg1 alignment:(unsigned long long)arg2;

@end

