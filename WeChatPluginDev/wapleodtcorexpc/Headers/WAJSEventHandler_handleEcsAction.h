//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_handleEcsAction
{
}

- (void)handleNotifyGiftPaySuc:(id)arg1;
- (void)handleGiveGiftResp:(id)arg1 ticket:(id)arg2;
- (void)handleGiveGiftCgi:(id)arg1;
- (_Bool)filterContact:(id)arg1;
- (_Bool)onShouldFilterContact:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)handleOpenGiveGiftPage:(id)arg1;
- (void)handlePrintLog:(id)arg1;
- (void)handleOpenEcs:(id)arg1;
- (void)handleSelectContact:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

