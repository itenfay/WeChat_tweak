//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, LocationRetriever, NSDate, NSMutableDictionary, NSString;

@interface BrandServiceContinueLocationReportLogic
{
    LocationRetriever *m_locationRetriever;
    CContact *m_contact;
    NSDate *m_lastReportTime;
    _Bool m_hadReported;
    unsigned int _preEventID;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int preEventID; // @synthesize preEventID=_preEventID;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSDate *m_lastReportTime; // @synthesize m_lastReportTime;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) LocationRetriever *m_locationRetriever; // @synthesize m_locationRetriever;
- (void)cancelRetrieveLocationIfOnlyReportOnce;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)reportLocationWithLocation:(id)arg1 ErrorCode:(long long)arg2;
- (void)stopReportLocation;
- (void)notAllowReportLocation;
- (void)allowReportLocation;
- (void)askIsAllowReportLocation;
- (void)locationRetrieveLocation;
- (void)startReportLocationForContact:(id)arg1 HasSetLocation:(_Bool)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

