//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCRedEnvTextStateDetailViewController, WCRedEnvTextStateInfo;
@protocol WCRedEnvTextStateDetailControlLogicDelegate;

@interface WCRedEnvTextStateDetailControlLogic
{
    WCRedEnvTextStateInfo *_detailInfo;
    id <WCRedEnvTextStateDetailControlLogicDelegate> _delegate;
    WCRedEnvTextStateDetailViewController *_detailVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedEnvTextStateDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(nonatomic) __weak id <WCRedEnvTextStateDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCRedEnvTextStateInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void)onTextStateDetailViewControllerBack;
- (void)startLogic;
- (id)initWithTextStateInfo:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

