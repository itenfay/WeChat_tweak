//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QMarkerPayload : NSObject
{
    _Bool _forceLoad;
    _Bool _visibility;
    _Bool _interactive;
    _Bool _avoidAnnotation;
    _Bool _avoidOtherAnnotations;
    int _priority;
    int _minScaleLevel;
    int _maxScaleLevel;
    int _geotype;
    int _iconType;
    double _alpha;
    NSString *_iconName;
    double _angle;
    struct CGPoint _anchor;
    CDStruct_34734122 _coordinate;
}

- (void).cxx_destruct;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool avoidOtherAnnotations; // @synthesize avoidOtherAnnotations=_avoidOtherAnnotations;
@property(nonatomic) _Bool avoidAnnotation; // @synthesize avoidAnnotation=_avoidAnnotation;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(nonatomic) int geotype; // @synthesize geotype=_geotype;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool visibility; // @synthesize visibility=_visibility;
@property(nonatomic) _Bool forceLoad; // @synthesize forceLoad=_forceLoad;
@property(nonatomic) int maxScaleLevel; // @synthesize maxScaleLevel=_maxScaleLevel;
@property(nonatomic) int minScaleLevel; // @synthesize minScaleLevel=_minScaleLevel;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (id)init;

@end

