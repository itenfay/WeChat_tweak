//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextView, WCDataItem, WCPasteTextLengthLogic;
@protocol WCCommentStrangerViewControllerDelegate;

@interface WCCommentStrangerViewController
{
    UIScrollView *m_scrollView;
    UITextView *m_textView;
    UILabel *m_labKF;
    UIButton *m_btnPhone;
    UIImageView *m_textBG;
    float m_fTextBGDefaultHeight;
    float m_fTextViewDefaultHeight;
    float m_fLabelKFDefaultY;
    float m_fBtnPhoneDefaultY;
    double m_fKeyboardHeight;
    WCDataItem *dataItem;
    unsigned int source;
    _Bool m_bSendTextOnly;
    id <WCCommentStrangerViewControllerDelegate> m_delegate;
    WCPasteTextLengthLogic *pastelogic;
    int m_commentWordLimit;
}

+ (void)removeOldText;
+ (void)writeOldText:(id)arg1;
+ (id)openOldText;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCommentStrangerViewControllerDelegate> delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) _Bool isSendTextOnly; // @synthesize isSendTextOnly=m_bSendTextOnly;
@property(nonatomic) unsigned int source; // @synthesize source;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
- (void)dealloc;
- (id)init;
- (void)resizeViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)keyboardWillShow:(id)arg1;
- (void)initTextView;
- (void)initRightBtn;
- (void)initLeftBtn;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onSendMessage:(id)arg1;
- (void)doSendMessage;
- (void)OnReturn;
- (void)OnCancel;
- (void)startLoading;
- (void)setTextViewContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

