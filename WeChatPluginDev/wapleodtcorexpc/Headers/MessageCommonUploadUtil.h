//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MessageCommonUploadUtil : NSObject
{
}

+ (void)convertImgToWxamIn:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)generateMidImageForMsg:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)generateMidImage:(id)arg1 midPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)isMidImageInvalidForMsg:(id)arg1;
+ (unsigned int)maxMiddleImageSize;

@end

