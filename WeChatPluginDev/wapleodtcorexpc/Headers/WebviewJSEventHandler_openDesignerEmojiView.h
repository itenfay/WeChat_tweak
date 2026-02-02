//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, UINavigationController;

@interface WebviewJSEventHandler_openDesignerEmojiView
{
    JSEvent *m_event;
    NSString *m_designerId;
    UINavigationController *m_navigationController;
}

+ (id)dictionForBannerSet:(id)arg1;
- (void).cxx_destruct;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)openDesignerEmojiViewControllerWithDesignerUin:(unsigned int)arg1;
- (void)openDesignerEmojiViewControllerWithDesignerId;
- (void)endWithFail;
- (void)endWithOk;
- (long long)checkPageTypeForParams:(id)arg1;
- (id)viewControllerWithParams:(id)arg1 PageType:(unsigned int)arg2;
- (id)viewControllerWithParams:(id)arg1;
- (_Bool)handleWithParams:(id)arg1 AndNavigationController:(id)arg2 isHandleImmediately:(_Bool)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (_Bool)handleWithParams:(id)arg1 AndViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

