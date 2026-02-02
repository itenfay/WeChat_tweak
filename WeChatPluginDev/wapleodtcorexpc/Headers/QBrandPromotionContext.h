//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue, QMapPromoteConfig, QMapView;

@interface QBrandPromotionContext : NSObject
{
    QMapPromoteConfig *_promoteConfig;
    QMapView *_mapView;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak QMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) QMapPromoteConfig *promoteConfig; // @synthesize promoteConfig=_promoteConfig;
- (void)writeConfigToLocalCache:(id)arg1;
- (id)loadConfigFromLocalCache;
- (id)configPath;
- (void)setup;
- (id)initWithMapView:(id)arg1;

@end

