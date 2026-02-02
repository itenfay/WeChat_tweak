//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QCustomLayerConfigData, QDataLayerConfigData, QIndoorMapData, QL4Config, QMapPromoteConfig, QMapStyleData;

@interface QAuthenticationData : NSObject
{
    int _pointEventCloudControl;
    QMapStyleData *_mapStyleData;
    QIndoorMapData *_indoorMapData;
    QCustomLayerConfigData *_customLayerData;
    QDataLayerConfigData *_dataLayerData;
    QMapPromoteConfig *_promoteConfig;
    QL4Config *_l4Config;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) QL4Config *l4Config; // @synthesize l4Config=_l4Config;
@property(readonly, nonatomic) int pointEventCloudControl; // @synthesize pointEventCloudControl=_pointEventCloudControl;
@property(readonly, nonatomic) QMapPromoteConfig *promoteConfig; // @synthesize promoteConfig=_promoteConfig;
@property(readonly, nonatomic) QDataLayerConfigData *dataLayerData; // @synthesize dataLayerData=_dataLayerData;
@property(readonly, nonatomic) QCustomLayerConfigData *customLayerData; // @synthesize customLayerData=_customLayerData;
@property(readonly, nonatomic) QIndoorMapData *indoorMapData; // @synthesize indoorMapData=_indoorMapData;
@property(readonly, nonatomic) QMapStyleData *mapStyleData; // @synthesize mapStyleData=_mapStyleData;
- (id)initWithJSON:(id)arg1;

@end

