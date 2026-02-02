//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ForwardMessageLogicController, NSString;

@interface MMRTCTextMsgFloatMenuResponder
{
    CMessageWrap *_messageWrap;
    ForwardMessageLogicController *_forwardLogicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onSelectTextCopy:(id)arg1;
- (void)onSelectTextForward:(id)arg1;
- (void)onTranslateText;
- (id)getSelectMenuItem;
- (id)originMenuItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

