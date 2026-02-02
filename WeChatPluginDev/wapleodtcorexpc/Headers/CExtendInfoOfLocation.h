//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CExtendInfoOfLocation : NSObject
{
    double m_latitude;
    double m_longitude;
    double m_mapScale;
    NSString *m_locationLabel;
    NSString *m_poiName;
    NSString *m_mapType;
    NSString *m_infoUrl;
    NSString *m_cityName;
    unsigned int m_adCode;
    NSString *m_poiId;
    NSString *m_buildingId;
    NSString *m_floorName;
    NSString *m_poiCategoryTips;
    NSString *m_poiBusinessHour;
    NSString *m_poiPhone;
    NSString *m_poiPriceTips;
    _Bool m_isFromPoiList;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isFromPoiList; // @synthesize m_isFromPoiList;
@property(retain, nonatomic) NSString *m_poiPriceTips; // @synthesize m_poiPriceTips;
@property(retain, nonatomic) NSString *m_poiPhone; // @synthesize m_poiPhone;
@property(retain, nonatomic) NSString *m_poiBusinessHour; // @synthesize m_poiBusinessHour;
@property(retain, nonatomic) NSString *m_poiCategoryTips; // @synthesize m_poiCategoryTips;
@property(retain, nonatomic) NSString *m_floorName; // @synthesize m_floorName;
@property(retain, nonatomic) NSString *m_buildingId; // @synthesize m_buildingId;
@property(retain, nonatomic) NSString *m_poiId; // @synthesize m_poiId;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_adCode; // @synthesize m_adCode;
@property(retain, nonatomic) NSString *m_cityName; // @synthesize m_cityName;
@property(retain, nonatomic) NSString *m_infoUrl; // @synthesize m_infoUrl;
@property(retain, nonatomic) NSString *m_mapType; // @synthesize m_mapType;
@property(nonatomic) double m_mapScale; // @synthesize m_mapScale;
@property(nonatomic) double m_longitude; // @synthesize m_longitude;
@property(retain, nonatomic) NSString *m_poiName; // @synthesize m_poiName;
@property(retain, nonatomic) NSString *m_locationLabel; // @synthesize m_locationLabel;
@property(nonatomic) double m_latitude; // @synthesize m_latitude;
- (id)genReferIconWithName:(id)arg1 useCustomBkg:(_Bool)arg2;
- (id)msgReferSummaryAndReplace:(_Bool)arg1;
- (id)messageFTSText;
- (id)GetDisplaySessionContent;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

