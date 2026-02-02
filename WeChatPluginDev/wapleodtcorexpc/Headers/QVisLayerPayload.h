//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QVisLayerPayload : NSObject
{
    _Bool _hidden;
    _Bool _isAnimated;
    _Bool _enable3D;
    int _minZoomLevel;
    int _maxZoomLevel;
    int _zIndex;
    NSString *_layerID;
    NSString *_originalLayerId;
    double _opacity;
    long long _displayLevel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) int minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *originalLayerId; // @synthesize originalLayerId=_originalLayerId;
@property(copy, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

