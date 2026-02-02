//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AudioRecorderUserData, MMNewVoiceInputReportObj, MMTimer, NSMutableArray, NSString;
@protocol RecordInfoManagerDelegate;

@interface RecordInfoManager : NSObject
{
    _Bool _bTransStartSucc;
    _Bool _bCanStartTextViewAnimation;
    _Bool _bRealTimeTranslate;
    unsigned int _inputLanguageType;
    unsigned int _translatingWordingIndex;
    unsigned int _localId;
    id <RecordInfoManagerDelegate> _delegate;
    NSString *_translatedText;
    unsigned long long _recordState;
    unsigned long long _transState;
    NSString *_translatingWording;
    MMNewVoiceInputReportObj *_reportObj;
    AudioRecorderUserData *_recordInfo;
    NSString *_chatName;
    NSMutableArray *_arrVoiceIds;
    MMTimer *_translatingTimer;
}

+ (void)showRecordStartFailTips:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool bRealTimeTranslate; // @synthesize bRealTimeTranslate=_bRealTimeTranslate;
@property(nonatomic) _Bool bCanStartTextViewAnimation; // @synthesize bCanStartTextViewAnimation=_bCanStartTextViewAnimation;
@property(nonatomic) _Bool bTransStartSucc; // @synthesize bTransStartSucc=_bTransStartSucc;
@property(retain, nonatomic) MMTimer *translatingTimer; // @synthesize translatingTimer=_translatingTimer;
@property(retain, nonatomic) NSMutableArray *arrVoiceIds; // @synthesize arrVoiceIds=_arrVoiceIds;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) AudioRecorderUserData *recordInfo; // @synthesize recordInfo=_recordInfo;
@property(retain, nonatomic) MMNewVoiceInputReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(retain, nonatomic) NSString *translatingWording; // @synthesize translatingWording=_translatingWording;
@property(nonatomic) unsigned int translatingWordingIndex; // @synthesize translatingWordingIndex=_translatingWordingIndex;
@property(nonatomic) unsigned int inputLanguageType; // @synthesize inputLanguageType=_inputLanguageType;
@property(nonatomic) unsigned long long transState; // @synthesize transState=_transState;
@property(nonatomic) unsigned long long recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(nonatomic) __weak id <RecordInfoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(unsigned int)arg2 andTranslatingWording:(id)arg3;
- (void)onStartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (void)makeTranslateStopWithError:(id)arg1;
- (void)invalidateTranslateTimer;
- (unsigned int)getUncertainLength;
- (void)setErrorMessage:(id)arg1;
- (void)setAttributedText:(id)arg1 animated:(_Bool)arg2;
- (void)displayTranslateResultText:(_Bool)arg1;
- (void)displayTranslateResultText;
- (void)updateTranslatingWording:(_Bool)arg1;
- (void)checkChangeTranslatingWording;
- (void)realStartTranslate;
- (void)startTranslateTimer;
- (void)startTranslate;
- (void)stopTranslate;
- (void)startRealTimeTranslate;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (id)init;

@end

