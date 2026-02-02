//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMapStatus : NSObject
{
    _Bool _isNightStyle;
    int _zoomLevel;
    struct CLLocationCoordinate2D _centerCoordinate;
    CDStruct_02837cd9 _mapRect;
}

@property(nonatomic) _Bool isNightStyle; // @synthesize isNightStyle=_isNightStyle;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(nonatomic) int zoomLevel; // @synthesize zoomLevel=_zoomLevel;

@end

