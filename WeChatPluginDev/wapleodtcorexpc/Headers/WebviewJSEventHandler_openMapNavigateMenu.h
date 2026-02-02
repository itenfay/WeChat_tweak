//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NavigateLogicController;

@interface WebviewJSEventHandler_openMapNavigateMenu
{
    NavigateLogicController *_navigateLogicController;
}

- (void).cxx_destruct;
- (void)delayNotifyCancel;
- (void)delayNotifyOK;
- (void)onMapItemClickOrCancel:(_Bool)arg1;
- (_Bool)isValidCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (_Bool)canShowShareLocationMsgToDevice;
- (void)showNavigateMenu:(id)arg1 topMapType:(unsigned long long)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

