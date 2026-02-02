//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMImageDecoderUtil : NSObject
{
}

+ (id)imageOfFrame:(struct StWxAMFrame *)arg1 scale:(double)arg2;
+ (id)imageFromWXAMData:(id)arg1 error:(id *)arg2;
+ (void)transferHevcDataFrom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 subCode:(long long)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;

@end

