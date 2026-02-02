//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BlockViewController, NSString, NSURL;

@interface SMSAddCardHandler
{
    NSURL *_infoUrl;
    BlockViewController *_blockView;
}

- (void).cxx_destruct;
- (void)onBlockViewControllerReturn;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSMSAddCard:(id)arg1;
- (void)createWechatSMSAddCard;
- (void)onPreEnterWechatDone;
- (void)cancelCheckAndAddCard;
- (void)startCheckAndAddCard:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

