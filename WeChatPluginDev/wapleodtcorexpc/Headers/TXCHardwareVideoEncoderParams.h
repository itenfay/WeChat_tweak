//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, TXCHardwareVideoEncoder;

@interface TXCHardwareVideoEncoderParams : NSObject
{
    TXCHardwareVideoEncoder *_encoder;
    CDUnknownBlockType _complete;
    NSDate *_encodeStartTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *encodeStartTime; // @synthesize encodeStartTime=_encodeStartTime;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property __weak TXCHardwareVideoEncoder *encoder; // @synthesize encoder=_encoder;

@end

