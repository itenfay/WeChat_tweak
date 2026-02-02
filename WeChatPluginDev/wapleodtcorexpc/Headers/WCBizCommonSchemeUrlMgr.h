//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCBizSchemeBlockViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, WCBizSchemeBlockViewController;

@interface WCBizCommonSchemeUrlMgr <WCBizSchemeBlockViewControllerDelegate>
{
    WCBizSchemeBlockViewController *_blockViewController;
    NSDictionary *_handlerDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *handlerDictionary; // @synthesize handlerDictionary=_handlerDictionary;
@property(retain, nonatomic) WCBizSchemeBlockViewController *blockViewController; // @synthesize blockViewController=_blockViewController;
- (_Bool)checkAntiSpamInfoValid:(id)arg1;
- (void)onBizHandlerLoadingEnd:(id)arg1;
- (void)continueHandleUrlWithContext:(id)arg1;
- (void)stopHandleUrlAndDismissBlockVC;
- (void)onBizSchemeUrlBlockAction:(unsigned long long)arg1;
- (id)genneralAntiSpamInfoWithErrMsg:(id)arg1;
- (_Bool)canHanldeActionCode:(unsigned int)arg1;
- (void)startCheckExteranlUrl:(id)arg1;
- (void)handleWCBizSchemeUrl:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

