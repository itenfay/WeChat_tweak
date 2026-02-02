//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandServiceContinueLocationReportLogic, BrandServiceEnterConversationLogic, CContact, NSMutableDictionary, NSString, SessionStat;
@protocol BrandActionReportLogicControllerDelegate;

@interface BrandActionReportLogicController
{
    CContact *m_contact;
    BrandServiceEnterConversationLogic *m_enterConversationLogic;
    BrandServiceContinueLocationReportLogic *m_continueLocationReporter;
    id <BrandActionReportLogicControllerDelegate> _delegate;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) __weak id <BrandActionReportLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BrandServiceEnterConversationLogic *m_enterConversationLogic; // @synthesize m_enterConversationLogic;
@property(retain, nonatomic) BrandServiceContinueLocationReportLogic *m_continueLocationReporter; // @synthesize m_continueLocationReporter;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (id)getViewController;
@property(retain, nonatomic) SessionStat *sessionInfo; // @dynamic sessionInfo;
- (void)showAlertView;
- (void)resetContinueReportLogic;
- (void)updateContact:(id)arg1;
- (void)creatContinueReportLogic;
- (void)reportExitConversation;
- (void)reportEnterConversation;
- (void)createEnterReportLogic;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

