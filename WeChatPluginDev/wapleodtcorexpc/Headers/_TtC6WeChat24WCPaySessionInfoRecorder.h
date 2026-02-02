//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat24WCPaySessionInfoRecorder
{
    MISSING_TYPE *jsapiInfoMap;
}

+ (long long)commonSendTypeValue;
+ (long long)sendTypeValueFromSender:(id)arg1;
+ (long long)chatTypeValueFromTalker:(id)arg1;
+ (long long)chatTypeValueFromTimeline:(id)arg1;
+ (long long)chatTypeValueFromGetUrlInfoSession:(id)arg1 msgUserName:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)getJsApiPayInfoWithUsername:(id)arg1 appId:(id)arg2 mpShortLink:(id)arg3;
- (void)setJsApiPayInfoWithOpenParam:(id)arg1 finderReportData:(id)arg2;
- (void)setJsApiPayInfoWithOpenParam:(id)arg1 data:(id)arg2;
- (void)setJsApiPayInfoWithIdentifier:(id)arg1 data:(id)arg2;

@end

