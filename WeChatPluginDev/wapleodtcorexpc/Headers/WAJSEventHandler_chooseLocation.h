//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_chooseLocation
{
    id <IWALocationService> _locationService;
    struct CLLocationCoordinate2D _startCoord;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D startCoord; // @synthesize startCoord=_startCoord;
@property(retain, nonatomic) id <IWALocationService> locationService; // @synthesize locationService=_locationService;
- (void)onChooseLocation:(id)arg1;
- (void)onCancelChooseLocation;
- (void)openLocation:(id)arg1;
- (void)doNavigate;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

