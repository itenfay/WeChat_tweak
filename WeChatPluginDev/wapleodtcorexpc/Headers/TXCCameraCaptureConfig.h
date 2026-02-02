//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSValue;

@interface TXCCameraCaptureConfig : NSObject
{
    NSNumber *_frameRate;
    NSValue *_resolution;
    NSNumber *_zoomScale;
    NSNumber *_enablesZoom;
    NSNumber *_isFront;
    NSNumber *_enablesFaceDetect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *enablesFaceDetect; // @synthesize enablesFaceDetect=_enablesFaceDetect;
@property(retain, nonatomic) NSNumber *isFront; // @synthesize isFront=_isFront;
@property(retain, nonatomic) NSNumber *enablesZoom; // @synthesize enablesZoom=_enablesZoom;
@property(retain, nonatomic) NSNumber *zoomScale; // @synthesize zoomScale=_zoomScale;
@property(retain, nonatomic) NSValue *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;

@end

