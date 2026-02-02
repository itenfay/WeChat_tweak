//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MMUIViewController, NSString;

@interface AppMessageBlockButton
{
    CMessageWrap *_messageWrap;
    MMUIViewController *_baseViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
- (void)onTemplateMsgConnectionChange:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBlockTemplateMsg;
- (void)onReport;
- (id)combineBaseUrl:(id)arg1 withParams:(id)arg2;
- (void)showActionSheet;
- (void)updateRecvMsgState:(_Bool)arg1;
- (void)showAlertView;
- (void)changeMessageState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

