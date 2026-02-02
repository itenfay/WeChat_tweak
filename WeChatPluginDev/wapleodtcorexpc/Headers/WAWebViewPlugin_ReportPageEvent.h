//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAReportBaseItem;

@interface WAWebViewPlugin_ReportPageEvent
{
    unsigned long long m_clickTimeStamp;
    WAReportBaseItem *_baseItem;
    NSString *_referpagepath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *referpagepath; // @synthesize referpagepath=_referpagepath;
- (void)reportHomeButtonEvent:(unsigned long long)arg1;
- (void)reportGameCBFPSItem:(id)arg1;
- (void)reportWeAppGameRenderEvent:(unsigned int)arg1 eventType:(unsigned int)arg2 eventValue:(unsigned int)arg3 gameDuration:(long long)arg4;
- (_Bool)reportPublicJSInsideKVInfo:(unsigned int)arg1 andValue:(id)arg2 version:(unsigned int)arg3;
- (_Bool)reportPageEventFrom3rdProvideInfoWithKey:(id)arg1 andValue:(id)arg2;
- (id)presentingPagePathForReport;
- (unsigned long long)appstate;
- (unsigned long long)useState;
- (unsigned int)getAppType;
- (unsigned long long)appVersion;
- (id)getCurrentUrl;
- (id)userName;
- (id)getAppID;
- (void)reportWAWebViewPageNotFound;
- (void)reportWeAppForwardMessage:(id)arg1;
- (void)reportRequstPaymentApiPreOKCallResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)reportWAJSApiResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)reportWAJSApiResult:(id)arg1 result:(id)arg2;
- (void)reportWebviewMenuAction:(unsigned long long)arg1 actionResult:(unsigned long long)arg2 actionNote:(id)arg3 errCode:(int)arg4;
- (id)getReportBaseItemFromWebview:(unsigned long long)arg1;

@end

