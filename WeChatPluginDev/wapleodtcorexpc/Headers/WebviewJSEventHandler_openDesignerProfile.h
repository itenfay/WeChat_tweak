//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreReportInfo, JSEvent, MMUIViewController, NSString;

@interface WebviewJSEventHandler_openDesignerProfile
{
    JSEvent *m_event;
    NSString *m_designerId;
    MMUIViewController *m_viewController;
    EmoticonStoreReportInfo *m_reportInfo;
}

- (void).cxx_destruct;
- (void)endWithFail;
- (void)endWithOk;
- (id)handleWithParams:(id)arg1 AndViewController:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

