//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBizInfoGroup, WCPayCreditPayQuestionNode, WCPayQuestionSelectItem;
@protocol WCPayCreditPayAnswerQuestionViewControllerDelegate;

@interface WCPayCreditPayAnswerQuestionViewController
{
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCBaseTextFieldItem *m_firstQuestionItem;
    WCBaseTextFieldItem *m_firstAnswerTextFieldItem;
    WCPayQuestionSelectItem *m_firstSelectItem;
    WCBaseTextFieldItem *m_firstNextQuestionItem;
    WCBaseTextFieldItem *m_secondQuestionItem;
    WCBaseTextFieldItem *m_secondAnswerTextFieldItem;
    WCPayQuestionSelectItem *m_secondSelectItem;
    WCBaseTextFieldItem *m_secondNextQuestionItem;
    WCBizInfoGroup *m_group;
    id <WCPayCreditPayAnswerQuestionViewControllerDelegate> m_delegate;
    unsigned int m_uiQuestionIndex;
    WCPayCreditPayQuestionNode *m_firstQuestionNode;
    WCPayCreditPayQuestionNode *m_secondQuestionNode;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (_Bool)canDoNext;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)onConfirmToCommit;
- (void)onNext;
- (id)getCommitAnswerTips;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initMyView;
- (void)initMyData;
- (void)onConfirmToBack;
- (void)onBack;
- (void)initNavigationBar;
- (void)reloadTextFieldItem;
- (void)initFooterView;
- (void)makeAnswerCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeQuestionCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCPayCreditPaySelectQuestionViewControllerSelected:(id)arg1;
- (void)setAnswer:(id)arg1 answer:(id)arg2;
- (void)setSelected:(id)arg1 selected:(_Bool)arg2;
- (void)clickSelectItemCell:(id)arg1;
- (void)clickQuestionCell:(id)arg1;
- (void)reloadTableView;
- (double)getQuestionItemHeight:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

