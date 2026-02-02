//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WSViewStayTimeReporter, _TtC6WeChat23WSSearchProcessReporter;

@interface WSWebViewPlugin_CommonReporter
{
    WSViewStayTimeReporter *_stayTimeReporter;
    _TtC6WeChat23WSSearchProcessReporter *_processReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat23WSSearchProcessReporter *processReporter; // @synthesize processReporter=_processReporter;
@property(retain, nonatomic) WSViewStayTimeReporter *stayTimeReporter; // @synthesize stayTimeReporter=_stayTimeReporter;
- (void)onDidFinishLoad;
- (void)onStartLoadHtml:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end

