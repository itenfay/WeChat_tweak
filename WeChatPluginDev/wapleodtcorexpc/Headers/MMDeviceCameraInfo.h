//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDeviceCameraInfo : NSObject
{
    _Bool _isMainCamera;
    long long _cameraType;
    double _baseOpticalZoomFactor;
    double _minDigitalZoomFactor;
    double _maxDigitalZoomFactor;
    double _maxDigitalZoomLimit;
}

+ (id)defaultInfo;
@property(nonatomic) double maxDigitalZoomLimit; // @synthesize maxDigitalZoomLimit=_maxDigitalZoomLimit;
@property(nonatomic) double maxDigitalZoomFactor; // @synthesize maxDigitalZoomFactor=_maxDigitalZoomFactor;
@property(nonatomic) double minDigitalZoomFactor; // @synthesize minDigitalZoomFactor=_minDigitalZoomFactor;
@property(nonatomic) double baseOpticalZoomFactor; // @synthesize baseOpticalZoomFactor=_baseOpticalZoomFactor;
@property(nonatomic) _Bool isMainCamera; // @synthesize isMainCamera=_isMainCamera;
@property(nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;

@end

