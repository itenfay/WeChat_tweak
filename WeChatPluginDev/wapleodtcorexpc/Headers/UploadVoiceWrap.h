//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface UploadVoiceWrap : NSObject
{
    unsigned int _m_uiLocalID;
    unsigned int _m_uiOffset;
    unsigned int _m_uiLen;
    unsigned int _m_uiCreateTime;
    unsigned int _m_uiVoiceTime;
    unsigned int _m_uiVoiceFormat;
    unsigned int _m_uiEndFlag;
    unsigned int _m_uiRetryCount;
    unsigned int _m_uiInsertQueueTime;
    unsigned int _m_uiCancelFlag;
    unsigned int _m_uiVoiceLen;
    unsigned int _m_uiVoiceForwardFlag;
    unsigned int _m_uiCgi;
    NSString *_m_nsToUsrName;
    long long _m_n64SvrID;
    NSString *_m_nsExtend;
    NSString *_m_nsFromUsrName;
    NSData *_m_dtVoice;
    NSString *_m_nsMsgSource;
    NSString *_voiceUrl;
    NSString *_aesKey;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsExtend;
+ (void)PBArrayAdd_m_nsToUsrName;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_uiInsertQueueTime;
+ (void)PBArrayAdd_m_uiVoiceFormat;
+ (void)PBArrayAdd_m_uiCancelFlag;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiLen;
+ (void)PBArrayAdd_m_uiOffset;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiLocalID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource=_m_nsMsgSource;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi=_m_uiCgi;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @synthesize m_uiVoiceForwardFlag=_m_uiVoiceForwardFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice=_m_dtVoice;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen=_m_uiVoiceLen;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName=_m_nsFromUsrName;
@property(retain, nonatomic) NSString *m_nsExtend; // @synthesize m_nsExtend=_m_nsExtend;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag=_m_uiCancelFlag;
@property(nonatomic) unsigned int m_uiInsertQueueTime; // @synthesize m_uiInsertQueueTime=_m_uiInsertQueueTime;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount=_m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag=_m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat=_m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime=_m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen=_m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset=_m_uiOffset;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID=_m_uiLocalID;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID=_m_n64SvrID;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName=_m_nsToUsrName;
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

