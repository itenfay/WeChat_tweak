//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVideoDecodeError : NSObject
{
}

+ (id)errorWithCode:(long long)arg1;
+ (id)cacheReachMax;
+ (id)incompleteCustomDecoder;
+ (id)parameterSetIncomplete;
+ (id)needsIFrame;
+ (id)decodeFailed;
+ (id)swDecoderCreateFailed;
+ (id)hwDecoderCreateFailed;
+ (id)decoderCreateFailed;
+ (id)hevcUnsupported;
+ (id)errorWithOSStatus:(int)arg1;

@end

