//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface StreamVoiceInputUtil
{
    NSMutableDictionary *_dicInputType;
    NSMutableArray *_arrInputLanguage;
}

+ (unsigned int)getDynamicLanguageSupportType;
+ (float)getVoiceTransTimeoutInsec;
+ (id)genSessionId;
+ (id)genVoiceId:(id)arg1;
+ (_Bool)IsSupportVoiceMsgRecordTranslate;
+ (id)tempAudioFilePath:(unsigned int)arg1;
+ (id)tempAudioFileFolderPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrInputLanguage; // @synthesize arrInputLanguage=_arrInputLanguage;
@property(retain, nonatomic) NSMutableDictionary *dicInputType; // @synthesize dicInputType=_dicInputType;
- (void)syncLastVoiceTransLanguageType:(unsigned int)arg1;
- (unsigned int)getLastVoiceTransLanguageType;
- (void)syncVoiceInputLanguageType:(unsigned int)arg1 ChatName:(id)arg2;
- (unsigned int)getVoiceInputLanguageTypeWithChatName:(id)arg1;
- (id)getSupportInputLanguages;
- (void)addSupportInputLanguage:(unsigned int)arg1 Name:(id)arg2 TransIcon:(id)arg3 TransIconEn:(id)arg4;
- (void)addSupportInputLanguage:(unsigned int)arg1 Name:(id)arg2;
- (void)registerAllInputLanguages;
- (void)onLanguageChange;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

