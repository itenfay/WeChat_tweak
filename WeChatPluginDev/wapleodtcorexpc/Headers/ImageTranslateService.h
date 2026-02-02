//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageTranslateRequest, NSString;

@interface ImageTranslateService
{
    struct ConfigMode _configMode;
    ImageTranslateRequest *_currentRequest;
}

+ (void)reportIDKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) ImageTranslateRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void)clearCurrentRequest;
- (void)translateImage:(id)arg1 statInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDetectWordDebugInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned int)indexOfWordDetectLang:(unsigned int)arg1;
- (id)detectImage:(id)arg1;
- (void)asyncDetectWord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)isPicTranslationSupportUserLanguage;
- (_Bool)isPicTranslationAvaliable:(unsigned int)arg1;
- (_Bool)checkWordDetectSwitchInOCR:(unsigned int)arg1;
- (_Bool)checkWordDetectSwitch:(unsigned int)arg1;
- (_Bool)isForbidOCREntry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

