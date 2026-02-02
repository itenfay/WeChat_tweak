//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKUtility : NSObject
{
}

+ (id)SHA256Hash:(id)arg1;
+ (void)stopGCDTimer:(id)arg1;
+ (id)startGCDTimerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)URLEncode:(id)arg1;
+ (id)URLDecode:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithQueryString:(id)arg1;

@end

