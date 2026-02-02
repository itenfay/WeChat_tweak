//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, LocationRetriever, NSMutableArray, NSString, ShakeGetResponse, ShakeReportResponse;
@protocol ShakeLogicProxyDelegate;

@interface ShakePeopleLogicController
{
    unsigned int m_uiEventID;
    unsigned int m_uiTryCount;
    double m_dbLastReportTime;
    id <ShakeLogicProxyDelegate> m_delegate;
    LocationRetriever *m_locationRetrieve;
    _Bool m_isTriggeredShakeReport;
    NSMutableArray *m_eventIDsToListen;
    ShakeReportResponse *m_reportResponse;
    ShakeGetResponse *m_getResponse;
    _Bool m_isTaskStoped;
    CLLocation *m_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
@property(nonatomic) _Bool m_isTaskStoped; // @synthesize m_isTaskStoped;
@property(retain, nonatomic) ShakeGetResponse *m_getResponse; // @synthesize m_getResponse;
@property(retain, nonatomic) ShakeReportResponse *m_reportResponse; // @synthesize m_reportResponse;
@property(retain, nonatomic) NSMutableArray *m_eventIDsToListen; // @synthesize m_eventIDsToListen;
@property(nonatomic) _Bool m_isTriggeredShakeReport; // @synthesize m_isTriggeredShakeReport;
@property(retain, nonatomic) LocationRetriever *m_locationRetrieve; // @synthesize m_locationRetrieve;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SetShakeList:(id)arg1 andScene:(unsigned int)arg2;
- (void)updateShakeLocation;
- (id)getMsgForState:(unsigned int)arg1;
- (_Bool)isShowBannerView;
- (void)shakeTerminate;
- (void)shakeReset;
- (void)shakeStop;
- (void)shakeReport;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)processGetResponse;
- (void)processReportResponse;
- (void)doShakeGet;
- (void)createShakeGetEvent;
- (void)createShakeReportEvent;
- (_Bool)isInEventIDsToListen:(long long)arg1;
- (void)addToEventIDsToListen:(long long)arg1;
- (_Bool)isShakeStarted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

