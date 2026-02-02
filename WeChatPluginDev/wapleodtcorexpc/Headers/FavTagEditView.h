//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, FavTagTextField, NSMutableArray, NSMutableSet, NSSet, NSString, UIButton, UILabel, UIScrollView, UIView;
@protocol FavTagEditViewDelegate;

@interface FavTagEditView
{
    NSMutableArray *m_arrTagButtons;
    NSMutableSet *m_tagSet;
    UIScrollView *m_scrollView;
    FavTagTextField *m_textField;
    UILabel *m_placeholderLabel;
    struct CGRect m_dashRect;
    CAShapeLayer *m_dashLayer;
    NSMutableArray *m_arrMenu;
    NSString *m_placeholderStr;
    _Bool m_hasBeginEdit;
    int m_maxHeight;
    NSSet *m_splitCharSet;
    id <FavTagEditViewDelegate> m_delegate;
    UIView *m_buttonToShow;
    UIView *m_buttonShowing;
    UIButton *m_highlightButton;
    double m_buttonHeight;
    double m_buttonCornerRadius;
    double _customWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double customWidth; // @synthesize customWidth=_customWidth;
@property(retain, nonatomic) NSString *m_placeholderStr; // @synthesize m_placeholderStr;
@property(nonatomic) int m_maxHeight; // @synthesize m_maxHeight;
@property(readonly, nonatomic) _Bool m_hasBeginEdit; // @synthesize m_hasBeginEdit;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerWillShow;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MenuControllerDidHide:(id)arg1;
- (void)showMenuForButton:(id)arg1;
- (void)removeHighlighBtn;
- (void)onTextFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)ontap;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)initView:(id)arg1;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)updateFrameForTextField:(double)arg1 scroll:(_Bool)arg2;
- (void)updateFrameForTextField:(double)arg1;
- (void)updateFrameForTextFieldScroll:(_Bool)arg1;
- (void)deleteTagButton:(int)arg1;
- (void)updateTagName:(id)arg1 To:(id)arg2;
- (unsigned int)getMaxTagLength;
- (id)getDefaultTitleFont;
- (double)getTextFieldMinWidth;
- (void)setNoBeginEdit;
- (void)updateOneButton:(id)arg1 cornerRadius:(double)arg2;
- (void)setButtonCornerRadius:(double)arg1;
- (void)setReturnType:(long long)arg1;
- (_Bool)textFieldBecomeFirstResponder;
- (_Bool)textFieldResignFirstResponder;
- (void)cleanTextField;
- (id)getTextFieldRealText;
- (id)getCurrentTagSet;
- (id)gatTagList;
- (void)deleteAllButtons;
- (void)deleteTagButtonWithName:(id)arg1;
- (void)addTagButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)initMenu;
- (void)updateTagList:(id)arg1;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)layoutSubviews;
- (double)caculateButtonHeight;
- (id)initWithTags:(id)arg1 placeHolder:(id)arg2 placeHolderEdu:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

