//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UITextView, WCBaseTextFieldItem;

@interface MMExptHitToolsViewController
{
    unsigned int m_selectedExptId;
    WCBaseTextFieldItem *m_inputExptId;
    UITextView *stepOneTv;
    UITextView *stepTwoTv;
    UITextView *stepThreeTv;
    UITextView *exptInfoTv;
}

- (void).cxx_destruct;
- (void)showToast:(id)arg1;
- (id)getExptItem:(id)arg1;
- (void)checkExptHit:(unsigned int)arg1;
- (void)onClickTryHitBtn:(id)arg1;
- (void)onClickConfirm:(id)arg1;
- (void)onClickReqBtn:(id)arg1;
- (void)resetUI:(unsigned int)arg1;
- (id)genStepView;
- (id)genHeaderView;
- (void)initView;
- (void)dealloc;
- (void)viewDidLoad;

@end

