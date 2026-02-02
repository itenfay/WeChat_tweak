//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface QPathViewPayload : NSObject
{
    int _displayLevel;
    int _zIndex;
    float _lineWidth;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    NSArray *_holes;
    double _radius;
    unsigned long long _strokeType;
    NSArray *_lineDashPattern;
    NSArray *_segmentStyle;
    NSArray *_segmentColor;
    CDStruct_34734122 _originPoint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(copy, nonatomic) NSArray *segmentStyle; // @synthesize segmentStyle=_segmentStyle;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(nonatomic) unsigned long long strokeType; // @synthesize strokeType=_strokeType;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) NSArray *holes; // @synthesize holes=_holes;
@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *points; // @synthesize points=_points;
@property(nonatomic) CDStruct_c3b9c2ee originPoint; // @synthesize originPoint=_originPoint;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) int displayLevel; // @synthesize displayLevel=_displayLevel;
- (void)dealloc;
- (void)freeOldData;
- (void)setPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

