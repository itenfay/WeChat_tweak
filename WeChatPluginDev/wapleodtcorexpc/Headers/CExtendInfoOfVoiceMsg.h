//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSData, NSString;

@interface CExtendInfoOfVoiceMsg : NSObject
{
    unsigned int m_uiVoiceTime;
    unsigned int m_uiVoiceFormat;
    unsigned int m_uiVoiceEndFlag;
    unsigned int m_uiVoiceCancelFlag;
    unsigned int m_uiVoiceForwardFlag;
    NSData *m_dtVoice;
    CMessageWrap *m_refMessageWrap;
    NSString *_voiceUrl;
    NSString *_aesKey;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @synthesize m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceCancelFlag; // @synthesize m_uiVoiceCancelFlag;
@property(nonatomic) unsigned int m_uiVoiceEndFlag; // @synthesize m_uiVoiceEndFlag;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
- (void)SetPlaySounded:(_Bool)arg1;
- (_Bool)IsPlaySounded;
- (_Bool)IsRecording;
- (void)SetPlayed;
- (_Bool)IsDownloadEnded;
- (_Bool)IsUnPlayed;
- (_Bool)SaveMesVoice:(id)arg1;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

