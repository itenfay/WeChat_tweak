//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, WAContactGetter;

@interface TemplateMsgExposeLogic
{
    MMUIViewController *_vc;
    WAContactGetter *_contactGetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
- (void)doOpenWebVcWithUrl:(id)arg1;
- (void)onExposeMsgWithMsgId:(id)arg1 username:(id)arg2 templateId:(id)arg3;
- (void)onExposeMsgWithMsgId:(id)arg1 appId:(id)arg2 templateId:(id)arg3 screenshotId:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onExpose:(id)arg1 withMsg:(id)arg2 fromWeapp:(_Bool)arg3 extraData:(id)arg4;
- (void)exposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)dealloc;
- (id)initWithVC:(id)arg1;

@end

