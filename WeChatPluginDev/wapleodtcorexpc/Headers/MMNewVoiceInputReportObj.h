//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AudioRecorderUserData, NSMutableArray, NSString, ReportVoiceResultMgr;

@interface MMNewVoiceInputReportObj : NSObject
{
    _Bool _clickToEdited;
    _Bool _bEdited;
    _Bool _bTransEnd;
    _Bool _bTransTimeout;
    _Bool _isShowingFormatResult;
    _Bool _transTextEqualToFormatText;
    _Bool _bHadReported;
    unsigned int _networkType;
    unsigned int _voiceDuration;
    unsigned int _defaultLanguageType;
    unsigned int _sendWithLanguageType;
    unsigned int _clickFormatTextCount;
    unsigned int _clickOriginTextCount;
    unsigned int _formatTextWordCount;
    unsigned long long _exitType;
    unsigned long long _transEndTime;
    unsigned long long _clickLanguageSwitchTime;
    unsigned long long _formatEndTime;
    unsigned long long _sendTextCount;
    unsigned long long _serverTransCout;
    NSString *_nsSendText;
    NSMutableArray *_voiceIdArray;
    unsigned long long _pressToRecordTime;
    double _pressToRecordOriginX;
    double _pressToRecordOriginY;
    unsigned long long _endRecordTime;
    double _endRecordOriginX;
    double _endRecordOriginY;
    unsigned long long _recordAreaStayTime;
    unsigned long long _transAreaStayTime;
    unsigned long long _cancelAreaStayTime;
    unsigned long long _recordState;
    unsigned long long _recordStateTime;
    AudioRecorderUserData *_userData;
    ReportVoiceResultMgr *_resultReportMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReportVoiceResultMgr *resultReportMgr; // @synthesize resultReportMgr=_resultReportMgr;
@property(retain, nonatomic) AudioRecorderUserData *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool bHadReported; // @synthesize bHadReported=_bHadReported;
@property(nonatomic) unsigned long long recordStateTime; // @synthesize recordStateTime=_recordStateTime;
@property(nonatomic) unsigned long long recordState; // @synthesize recordState=_recordState;
@property(nonatomic) unsigned long long cancelAreaStayTime; // @synthesize cancelAreaStayTime=_cancelAreaStayTime;
@property(nonatomic) unsigned long long transAreaStayTime; // @synthesize transAreaStayTime=_transAreaStayTime;
@property(nonatomic) unsigned long long recordAreaStayTime; // @synthesize recordAreaStayTime=_recordAreaStayTime;
@property(nonatomic) double endRecordOriginY; // @synthesize endRecordOriginY=_endRecordOriginY;
@property(nonatomic) double endRecordOriginX; // @synthesize endRecordOriginX=_endRecordOriginX;
@property(nonatomic) unsigned long long endRecordTime; // @synthesize endRecordTime=_endRecordTime;
@property(nonatomic) double pressToRecordOriginY; // @synthesize pressToRecordOriginY=_pressToRecordOriginY;
@property(nonatomic) double pressToRecordOriginX; // @synthesize pressToRecordOriginX=_pressToRecordOriginX;
@property(nonatomic) unsigned long long pressToRecordTime; // @synthesize pressToRecordTime=_pressToRecordTime;
@property(retain, nonatomic) NSMutableArray *voiceIdArray; // @synthesize voiceIdArray=_voiceIdArray;
@property(retain, nonatomic) NSString *nsSendText; // @synthesize nsSendText=_nsSendText;
@property(nonatomic) _Bool transTextEqualToFormatText; // @synthesize transTextEqualToFormatText=_transTextEqualToFormatText;
@property(nonatomic) unsigned int formatTextWordCount; // @synthesize formatTextWordCount=_formatTextWordCount;
@property(nonatomic) unsigned int clickOriginTextCount; // @synthesize clickOriginTextCount=_clickOriginTextCount;
@property(nonatomic) unsigned int clickFormatTextCount; // @synthesize clickFormatTextCount=_clickFormatTextCount;
@property(nonatomic) _Bool isShowingFormatResult; // @synthesize isShowingFormatResult=_isShowingFormatResult;
@property(nonatomic) _Bool bTransTimeout; // @synthesize bTransTimeout=_bTransTimeout;
@property(nonatomic) _Bool bTransEnd; // @synthesize bTransEnd=_bTransEnd;
@property(nonatomic) _Bool bEdited; // @synthesize bEdited=_bEdited;
@property(nonatomic) _Bool clickToEdited; // @synthesize clickToEdited=_clickToEdited;
@property(nonatomic) unsigned int sendWithLanguageType; // @synthesize sendWithLanguageType=_sendWithLanguageType;
@property(nonatomic) unsigned int defaultLanguageType; // @synthesize defaultLanguageType=_defaultLanguageType;
@property(nonatomic) unsigned long long serverTransCout; // @synthesize serverTransCout=_serverTransCout;
@property(nonatomic) unsigned int voiceDuration; // @synthesize voiceDuration=_voiceDuration;
@property(nonatomic) unsigned long long sendTextCount; // @synthesize sendTextCount=_sendTextCount;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) unsigned long long formatEndTime; // @synthesize formatEndTime=_formatEndTime;
@property(nonatomic) unsigned long long clickLanguageSwitchTime; // @synthesize clickLanguageSwitchTime=_clickLanguageSwitchTime;
@property(nonatomic) unsigned long long transEndTime; // @synthesize transEndTime=_transEndTime;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (void)reportTransSendResult;
- (void)reportWithExitType:(unsigned long long)arg1;
- (void)endPressWithPointInScreen:(struct CGPoint)arg1;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)startRecordWithPointInScreen:(struct CGPoint)arg1;
- (id)init;

@end

