//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSightLocalVideoImageSliderInitParam : NSObject
{
    _Bool _isSystemCrop;
    _Bool _cropAllowEnlarge;
    _Bool _isDurationMarkerEnabled;
    _Bool _isStartTimeMarkerEnabled;
    _Bool _isHighlightMaskEnabled;
    unsigned long long _scene;
    long long _sideFlagStyle;
    double _startTimeMarkerKeepTimeSec;
    double _maskRectRadius;
    struct CGPoint _sliderContentOffset;
}

@property(nonatomic) double maskRectRadius; // @synthesize maskRectRadius=_maskRectRadius;
@property(nonatomic) _Bool isHighlightMaskEnabled; // @synthesize isHighlightMaskEnabled=_isHighlightMaskEnabled;
@property(nonatomic) double startTimeMarkerKeepTimeSec; // @synthesize startTimeMarkerKeepTimeSec=_startTimeMarkerKeepTimeSec;
@property(nonatomic) _Bool isStartTimeMarkerEnabled; // @synthesize isStartTimeMarkerEnabled=_isStartTimeMarkerEnabled;
@property(nonatomic) _Bool isDurationMarkerEnabled; // @synthesize isDurationMarkerEnabled=_isDurationMarkerEnabled;
@property(nonatomic) long long sideFlagStyle; // @synthesize sideFlagStyle=_sideFlagStyle;
@property(nonatomic) struct CGPoint sliderContentOffset; // @synthesize sliderContentOffset=_sliderContentOffset;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool cropAllowEnlarge; // @synthesize cropAllowEnlarge=_cropAllowEnlarge;
@property(nonatomic) _Bool isSystemCrop; // @synthesize isSystemCrop=_isSystemCrop;

@end

