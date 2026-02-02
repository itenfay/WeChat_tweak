//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC9WeAppCore22WACameraZoomFactorInfo : NSObject
{
    MISSING_TYPE *isWideSuppored;
    MISSING_TYPE *isUltraWideSuppored;
    MISSING_TYPE *isTelephotoSuppored;
    MISSING_TYPE *isDualWideSupported;
    MISSING_TYPE *isTripleSupported;
    MISSING_TYPE *minZoomFactor;
    MISSING_TYPE *maxZoomFactor;
    MISSING_TYPE *sortedAvailableZoomFactors;
    MISSING_TYPE *mainCameraZoomFactorIndex;
    MISSING_TYPE *visualFactorScale;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) double visualFactorScale; // @synthesize visualFactorScale;
@property(nonatomic) long long mainCameraZoomFactorIndex; // @synthesize mainCameraZoomFactorIndex;
@property(nonatomic, copy) NSArray *sortedAvailableZoomFactors;
@property(nonatomic) double maxZoomFactor; // @synthesize maxZoomFactor;
@property(nonatomic) double minZoomFactor; // @synthesize minZoomFactor;
@property(nonatomic) _Bool isTripleSupported; // @synthesize isTripleSupported;
@property(nonatomic) _Bool isDualWideSupported; // @synthesize isDualWideSupported;
@property(nonatomic) _Bool isTelephotoSuppored; // @synthesize isTelephotoSuppored;
@property(nonatomic) _Bool isUltraWideSuppored; // @synthesize isUltraWideSuppored;
@property(nonatomic) _Bool isWideSuppored; // @synthesize isWideSuppored;

@end

