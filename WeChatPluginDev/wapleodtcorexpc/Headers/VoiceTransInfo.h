//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSData, NSString, VoiceTimeSlice;

@interface VoiceTransInfo
{
    _Bool _bAutoScrollUp;
    _Bool _bAutoTranslate;
    _Bool _bShowAnimation;
    _Bool _showTransResult;
    _Bool _hadLocalTranslateRet;
    unsigned int _mesLocalId;
    long long _msgServerId;
    unsigned long long _msgCreateTime;
    NSString *_voiceId;
    NSString *_displayText;
    NSString *_translatedText;
    NSData *_sliceData;
    VoiceTimeSlice *_timeSlice;
    long long _status;
    unsigned long long _translatedTime;
    unsigned long long _transStartTime;
    unsigned long long _fristTransTime;
    CMessageWrap *_messageWrap;
}

+ (void)initialize;
+ (void)PBArrayAdd_sliceData;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_mesLocalId;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) _Bool hadLocalTranslateRet; // @synthesize hadLocalTranslateRet=_hadLocalTranslateRet;
@property(nonatomic) unsigned long long fristTransTime; // @synthesize fristTransTime=_fristTransTime;
@property(nonatomic) unsigned long long transStartTime; // @synthesize transStartTime=_transStartTime;
@property(nonatomic) unsigned long long translatedTime; // @synthesize translatedTime=_translatedTime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) VoiceTimeSlice *timeSlice; // @synthesize timeSlice=_timeSlice;
@property(retain, nonatomic) NSData *sliceData; // @synthesize sliceData=_sliceData;
@property(nonatomic) _Bool showTransResult; // @synthesize showTransResult=_showTransResult;
@property(nonatomic) _Bool bShowAnimation; // @synthesize bShowAnimation=_bShowAnimation;
@property(nonatomic) _Bool bAutoTranslate; // @synthesize bAutoTranslate=_bAutoTranslate;
@property(nonatomic) _Bool bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
@property(nonatomic) unsigned long long msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId=_mesLocalId;
- (void)setIdentifierParamsWithMsg:(id)arg1;
- (id)getIdentifier;
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

