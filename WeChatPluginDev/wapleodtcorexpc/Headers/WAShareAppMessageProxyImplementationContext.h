//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAShareAppMessageForwardLogicControllerComponent, WAWebViewPlugin_ReportPageEvent, WAWebViewPlugin_WeAppMsg;

@interface WAShareAppMessageProxyImplementationContext : NSObject
{
    WAWebViewPlugin_WeAppMsg *_shareAppMessagePlugin;
    WAWebViewPlugin_ReportPageEvent *_reportPageEventPlugin;
    WAShareAppMessageForwardLogicControllerComponent *_forwardLogicControllerComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAShareAppMessageForwardLogicControllerComponent *forwardLogicControllerComponent; // @synthesize forwardLogicControllerComponent=_forwardLogicControllerComponent;
@property(nonatomic) __weak WAWebViewPlugin_ReportPageEvent *reportPageEventPlugin; // @synthesize reportPageEventPlugin=_reportPageEventPlugin;
@property(nonatomic) __weak WAWebViewPlugin_WeAppMsg *shareAppMessagePlugin; // @synthesize shareAppMessagePlugin=_shareAppMessagePlugin;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (id)viewControllerForForwardLogicControllerToShow:(id)arg1;
- (id)initWithShareAppMessagePlugin:(id)arg1 reportPageEventPlugin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

