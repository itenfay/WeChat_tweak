//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, POIItem;

@interface MMPOIAnnotation
{
    POIItem *_poiItem;
    _Bool _isUserLocation;
    NSString *_searchId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUserLocation; // @synthesize isUserLocation=_isUserLocation;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) POIItem *poiItem; // @synthesize poiItem=_poiItem;
- (_Bool)hasIndoorInfo;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithPOIItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

