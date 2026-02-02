//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVideoCaptureError : NSObject
{
}

+ (id)errorWithCode:(long long)arg1;
+ (id)screenInterrupted;
+ (id)screenCaptureStartFailed;
+ (id)captureFrameFailed;
+ (id)unauthorized;
+ (id)noDevice;

@end

