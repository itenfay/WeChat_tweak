//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayHomeViewController, NSString, WCPayHoneyPayListCgi;
@protocol HoneyPayHomeControlLogicDelegate;

@interface HoneyPayHomeControlLogic
{
    _Bool _createCardSuccess;
    id <HoneyPayHomeControlLogicDelegate> _delegate;
    WCPayHoneyPayListCgi *_listCgi;
    HoneyPayHomeViewController *_homeVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool createCardSuccess; // @synthesize createCardSuccess=_createCardSuccess;
@property(retain, nonatomic) HoneyPayHomeViewController *homeVC; // @synthesize homeVC=_homeVC;
@property(retain, nonatomic) WCPayHoneyPayListCgi *listCgi; // @synthesize listCgi=_listCgi;
@property(nonatomic) __weak id <HoneyPayHomeControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)honeyPayListCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)honeyPayListCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)honeyPayVCDidClickAddCard:(id)arg1;
- (void)honeyPayVC:(id)arg1 didClickRecord:(id)arg2;
- (void)payerDetailControlLogicDidRemoveDetailVC:(id)arg1;
- (void)payerDetailControlLogicDidModifyMaximumAmount:(id)arg1;
- (void)payerDetailControlLogicDidUnbindCard:(id)arg1;
- (void)createControlLogicDidCreateSuccess:(id)arg1;
- (void)refreshList;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

