//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface PreEnterCommonLiteAppGuidanceStep
{
    _Bool _isValid;
    _Bool _needSyncEscape;
    int _timeout;
    int _escapeChoise;
    NSString *_appid;
    NSString *_page;
    NSString *_scene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needSyncEscape; // @synthesize needSyncEscape=_needSyncEscape;
@property(nonatomic) int escapeChoise; // @synthesize escapeChoise=_escapeChoise;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)escapeGuidance;
- (void)startStep;
- (void)parseXmlString:(id)arg1;
- (id)stepId;
- (id)initWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

