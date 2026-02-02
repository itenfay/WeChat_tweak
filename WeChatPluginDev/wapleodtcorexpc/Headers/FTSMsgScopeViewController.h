//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSMsgScopeView, NSString;
@protocol FTSMsgScopeViewControllerDelegate;

@interface FTSMsgScopeViewController
{
    FTSMsgScopeView *_msgScopeView;
    id <FTSMsgScopeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FTSMsgScopeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FTSMsgScopeView *msgScopeView; // @synthesize msgScopeView=_msgScopeView;
- (_Bool)searchBarHasTagInfo;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)resignSearchFirstResponder;
- (id)searchTextField;
- (id)searchBarText;
- (void)reloadList;
- (void)onNavigationCancelItemClick;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

