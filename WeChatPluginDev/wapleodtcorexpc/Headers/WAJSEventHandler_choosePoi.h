//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_choosePoi
{
    id <IWALocationService> _locationService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWALocationService> locationService; // @synthesize locationService=_locationService;
- (void)onChoosePoiCancel;
- (void)onChoosePoiFinished:(id)arg1;
- (void)openPoi:(id)arg1;
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

