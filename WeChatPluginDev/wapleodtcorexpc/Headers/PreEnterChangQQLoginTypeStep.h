//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface PreEnterChangQQLoginTypeStep
{
    _Bool _isForceShow;
    _Bool _needSyncEscape;
    int _timeout;
    NSString *_appid;
    NSString *_page;
    NSString *_scene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needSyncEscape; // @synthesize needSyncEscape=_needSyncEscape;
@property(nonatomic) _Bool isForceShow; // @synthesize isForceShow=_isForceShow;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)escapeGuidance;
- (void)startStep;
- (void)parseXmlString:(id)arg1;
- (id)initWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

