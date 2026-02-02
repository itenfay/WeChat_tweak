//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSMutableDictionary, NSString;

@interface WWKFReportLocationMgr
{
    _Bool _retrieveringLocation;
    LocationRetriever *_locationRetriever;
    NSMutableDictionary *_reportUsers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportUsers; // @synthesize reportUsers=_reportUsers;
@property(nonatomic) _Bool retrieveringLocation; // @synthesize retrieveringLocation=_retrieveringLocation;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onReportLocationResp:(id)arg1;
- (void)onSetAllowReportLocationResp:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onFailedToGetLocation;
- (void)doReportLocationForUserName:(id)arg1 usingLocation:(id)arg2 locationType:(id)arg3 scene:(int)arg4;
- (void)reportLocation:(id)arg1;
- (void)cancelGetLocation;
- (void)setAllowReportLocation:(_Bool)arg1 userName:(id)arg2;
- (void)reportLocationIfNeededForUserName:(id)arg1 scene:(int)arg2;
- (_Bool)isAllowReportLocationForUserName:(id)arg1;
- (_Bool)shouldReportLocationForUserName:(id)arg1;
- (_Bool)shouldShowReportLocationSwitchForUserName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

