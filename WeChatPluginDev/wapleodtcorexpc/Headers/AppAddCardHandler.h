//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OpenApiParameter, WCCardAddHelper;

@interface AppAddCardHandler
{
    NSString *_cardID;
    OpenApiParameter *_parameter;
    WCCardAddHelper *_addHelper;
}

- (void).cxx_destruct;
- (void)onAddCancel;
- (void)onAddFail:(id)arg1;
- (void)onAddSuccess:(id)arg1;
- (id)getViewController;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)createWechatAppAddCard;
- (void)cancelCheckAndAddCard;
- (void)onPreEnterWechatDone;
- (void)startCheckAndAddCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

