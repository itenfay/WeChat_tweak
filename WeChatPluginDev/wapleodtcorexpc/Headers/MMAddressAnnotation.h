//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MMAddressAnnotationDelegate;

@interface MMAddressAnnotation
{
    unsigned long long _geoTag;
    NSString *_title;
    NSString *_subtitle;
    id <MMAddressAnnotationDelegate> m_delegate;
    NSString *_buildingId;
    NSString *_floorName;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak id <MMAddressAnnotationDelegate> m_delegate; // @synthesize m_delegate;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)createNewRequest;
- (void)safeDeleteGeocoder;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 Location:(id)arg2 POIName:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

