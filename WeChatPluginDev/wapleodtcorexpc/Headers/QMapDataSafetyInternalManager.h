//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QMapView;

@interface QMapDataSafetyInternalManager : NSObject
{
    QMapView *_mapView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QMapView *mapView; // @synthesize mapView=_mapView;
- (id)getUserLocation;
- (id)initWithMapView:(id)arg1;

@end

