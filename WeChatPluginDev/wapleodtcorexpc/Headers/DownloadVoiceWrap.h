//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface DownloadVoiceWrap : NSObject
{
    _Bool _bReportCost60s;
    unsigned int _m_uiLocalID;
    unsigned int _m_uiCreateTime;
    unsigned int _m_uiVoiceLen;
    unsigned int _m_uiVoiceTime;
    unsigned int _m_uiEndFlag;
    unsigned int _m_uiRetryCount;
    unsigned int _m_uiOffset;
    unsigned int _m_uiLen;
    unsigned int _m_uiCancelFlag;
    unsigned int _startDownloadTime;
    NSString *_m_nsChatUsrName;
    long long _m_n64SvrID;
    unsigned long long _m_ui64BufId;
    NSString *_voiceUrl;
    NSString *_aesKey;
    NSString *_xml;
    NSData *_m_dtVoice;
}

+ (void)initialize;
+ (void)PBArrayAdd_xml;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_voiceUrl;
+ (void)PBArrayAdd_m_ui64BufId;
+ (void)PBArrayAdd_m_nsChatUsrName;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiVoiceLen;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiLocalID;
- (void).cxx_destruct;
@property(nonatomic) _Bool bReportCost60s; // @synthesize bReportCost60s=_bReportCost60s;
@property(nonatomic) unsigned int startDownloadTime; // @synthesize startDownloadTime=_startDownloadTime;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag=_m_uiCancelFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice=_m_dtVoice;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen=_m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset=_m_uiOffset;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(nonatomic) unsigned long long m_ui64BufId; // @synthesize m_ui64BufId=_m_ui64BufId;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount=_m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag=_m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime=_m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen=_m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID=_m_n64SvrID;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID=_m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatUsrName; // @synthesize m_nsChatUsrName=_m_nsChatUsrName;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

