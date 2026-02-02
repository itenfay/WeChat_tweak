//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureDevice, NSNumber, NSString, NSValue, UIImage;

@interface TXCVideoCaptureConfig : NSObject
{
    NSNumber *_frameRate;
    AVCaptureDevice *_selectedDevice;
    NSValue *_resolution;
    NSValue *_encodeExpectResolution;
    NSString *_appGroupId;
    UIImage *_stillImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *stillImage; // @synthesize stillImage=_stillImage;
@property(copy, nonatomic) NSString *appGroupId; // @synthesize appGroupId=_appGroupId;
@property(retain, nonatomic) NSValue *encodeExpectResolution; // @synthesize encodeExpectResolution=_encodeExpectResolution;
@property(retain, nonatomic) NSValue *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) AVCaptureDevice *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

