//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VCODEC2ImageCom : NSObject
{
}

+ (id)constructImg:(void *)arg1 width:(int)arg2 height:(int)arg3;
+ (unsigned long long)decodeVCODEC2ImageFile:(id)arg1 toUIImage:(id *)arg2 toJPGQuality:(int *)arg3;
+ (id)decodeVCODEC2ImageFile:(id)arg1;
+ (unsigned long long)decodeVCODEC2ImageFile:(id)arg1 toUIImage:(id *)arg2;

@end

