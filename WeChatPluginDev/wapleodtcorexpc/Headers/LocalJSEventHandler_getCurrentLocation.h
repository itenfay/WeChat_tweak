//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSString;

@interface LocalJSEventHandler_getCurrentLocation
{
    LocationRetriever *_locationRetriever;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)startRetrievingLocation;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

