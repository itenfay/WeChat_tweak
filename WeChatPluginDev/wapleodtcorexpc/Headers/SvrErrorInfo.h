//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SvrErrorInfo
{
    unsigned int _m_uiTime;
    unsigned int _m_uiStatus;
    unsigned int _m_uiExpiredTime;
    NSString *_m_nsContent;
    NSString *_m_nsNoticeID;
    NSString *_m_nsUrl;
    NSString *_m_nsTipsContent;
    NSString *_m_position;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_position;
+ (void)PBArrayAdd_m_uiExpiredTime;
+ (void)PBArrayAdd_m_nsTipsContent;
+ (void)PBArrayAdd_m_uiStatus;
+ (void)PBArrayAdd_m_uiTime;
+ (void)PBArrayAdd_m_nsUrl;
+ (void)PBArrayAdd_m_nsNoticeID;
+ (void)PBArrayAdd_m_nsContent;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_position; // @synthesize m_position=_m_position;
@property(nonatomic) unsigned int m_uiExpiredTime; // @synthesize m_uiExpiredTime=_m_uiExpiredTime;
@property(retain, nonatomic) NSString *m_nsTipsContent; // @synthesize m_nsTipsContent=_m_nsTipsContent;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus=_m_uiStatus;
@property(nonatomic) unsigned int m_uiTime; // @synthesize m_uiTime=_m_uiTime;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl=_m_nsUrl;
@property(retain, nonatomic) NSString *m_nsNoticeID; // @synthesize m_nsNoticeID=_m_nsNoticeID;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent=_m_nsContent;
- (void)ParseFromXml:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

