//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMCameraZoomFactorInfo : NSObject
{
    _Bool _isWideSuppored;
    _Bool _isUltraWideSuppored;
    _Bool _isTelephotoSuppored;
    _Bool _isDualWideSupported;
    _Bool _isTripleSupported;
    double _minZoomFactor;
    double _maxZoomFactor;
    NSArray *_sortedAvailableZoomFactors;
    long long _mainCameraZoomFactorIndex;
    double _visualFactorScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTripleSupported; // @synthesize isTripleSupported=_isTripleSupported;
@property(nonatomic) _Bool isDualWideSupported; // @synthesize isDualWideSupported=_isDualWideSupported;
@property(nonatomic) double visualFactorScale; // @synthesize visualFactorScale=_visualFactorScale;
@property(nonatomic) long long mainCameraZoomFactorIndex; // @synthesize mainCameraZoomFactorIndex=_mainCameraZoomFactorIndex;
@property(retain, nonatomic) NSArray *sortedAvailableZoomFactors; // @synthesize sortedAvailableZoomFactors=_sortedAvailableZoomFactors;
@property(nonatomic) double maxZoomFactor; // @synthesize maxZoomFactor=_maxZoomFactor;
@property(nonatomic) double minZoomFactor; // @synthesize minZoomFactor=_minZoomFactor;
@property(nonatomic) _Bool isTelephotoSuppored; // @synthesize isTelephotoSuppored=_isTelephotoSuppored;
@property(nonatomic) _Bool isUltraWideSuppored; // @synthesize isUltraWideSuppored=_isUltraWideSuppored;
@property(nonatomic) _Bool isWideSuppored; // @synthesize isWideSuppored=_isWideSuppored;
- (id)description;

@end

