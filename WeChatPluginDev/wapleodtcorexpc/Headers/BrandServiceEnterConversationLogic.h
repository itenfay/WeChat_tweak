//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableDictionary, SessionStat;
@protocol BrandServiceEnterConversationLogicDelegate;

@interface BrandServiceEnterConversationLogic
{
    CContact *m_contact;
    SessionStat *_sessionInfo;
    id <BrandServiceEnterConversationLogicDelegate> _delegate;
    NSMutableDictionary *_extInfo;
    long long _subscene;
}

- (void).cxx_destruct;
@property(nonatomic) long long subscene; // @synthesize subscene=_subscene;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) __weak id <BrandServiceEnterConversationLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SessionStat *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)addWuRaoSystemMessageIfNeeded:(id)arg1 clickable:(id)arg2;
- (void)addLocalSystemMessage:(id)arg1;
- (void)reportExitConversationForContact;
- (id)getClickCommandMsgReportFromLastMsg:(id)arg1;
- (void)report30451WithMsgStr:(id)arg1;
- (void)handleClickCommandResponse:(id)arg1;
- (void)reportEnterConversationForContact:(id)arg1;
- (id)init;

@end

