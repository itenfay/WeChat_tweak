//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UIImageView, UILabel, UIScrollView, UITextField;
@protocol FavSearchBarDelegate;

@interface FavSearchBar
{
    NSString *m_searchText;
    NSString *m_searchType;
    NSMutableArray *m_searchTags;
    UIScrollView *m_scrollView;
    UITextField *m_textField;
    UILabel *m_placeholderLabel;
    UIImageView *m_searchIcon;
    double m_maxHeight;
    double m_maxContentWidth;
    double m_rightMargin;
    NSMutableArray *m_arrButtons;
    MMUIButton *m_highlightButton;
    NSString *m_updateSearchingName;
    _Bool _shouldEdit;
    id <FavSearchBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEdit; // @synthesize shouldEdit=_shouldEdit;
@property(nonatomic) __weak id <FavSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getTextFieldRealText;
- (void)deleteButtonAtIndex:(int)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)ontap;
- (id)searchType;
- (id)searchTags;
- (id)searchText;
- (void)addButton:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)showHighlightAnimationTo:(id)arg1;
- (void)updateButtons;
- (void)clearSearchText;
- (void)cancelSearch;
- (void)updateTag:(id)arg1 toNewTag:(id)arg2;
- (void)setTag:(id)arg1 isSelected:(_Bool)arg2;
- (void)setHilightAnimationToButtonWith:(id)arg1;
- (void)setType:(id)arg1;
- (void)updatePlaceHolder;
- (void)updateFrameForTextFieldScroll:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)updateFrameForTextField:(double)arg1 scroll:(_Bool)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (void)updateFrameForTextField:(double)arg1;
- (void)updateWithWidth:(double)arg1;
- (void)initView;
- (id)initWithWidth:(double)arg1 andRightMargin:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

