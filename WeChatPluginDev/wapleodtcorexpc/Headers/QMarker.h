//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QMarkerManager, UIImage;

@interface QMarker
{
    _Bool _isHidden;
    _Bool _enabled;
    _Bool _forceLoad;
    _Bool _avoidAnnotation;
    _Bool _avoidOtherAnnotations;
    int _zIndex;
    int _markerID;
    int _minScaleLevel;
    int _maxScaleLevel;
    int _geotype;
    NSString *_title;
    long long _displayLevel;
    double _alpha;
    UIImage *_image;
    QMarkerManager *_manager;
    NSString *_iconPath;
    NSString *_imgInstruction;
    struct CGPoint _centerOffset;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imgInstruction; // @synthesize imgInstruction=_imgInstruction;
@property(nonatomic) _Bool avoidOtherAnnotations; // @synthesize avoidOtherAnnotations=_avoidOtherAnnotations;
@property(nonatomic) _Bool avoidAnnotation; // @synthesize avoidAnnotation=_avoidAnnotation;
@property(retain, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(nonatomic) int geotype; // @synthesize geotype=_geotype;
@property(nonatomic) _Bool forceLoad; // @synthesize forceLoad=_forceLoad;
@property(nonatomic) int maxScaleLevel; // @synthesize maxScaleLevel=_maxScaleLevel;
@property(nonatomic) int minScaleLevel; // @synthesize minScaleLevel=_minScaleLevel;
@property(nonatomic) int markerID; // @synthesize markerID=_markerID;
@property(nonatomic) __weak QMarkerManager *manager; // @synthesize manager=_manager;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

