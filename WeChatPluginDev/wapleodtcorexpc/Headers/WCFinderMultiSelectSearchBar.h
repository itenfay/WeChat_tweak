//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UIImageView, UILabel, UITextField, UIView, WCFinderPopUpSelectMenuViewController;
@protocol WCFinderMultiSelectSearchBarDelegate;

@interface WCFinderMultiSelectSearchBar
{
    _Bool _isEditing;
    UITextField *_textField;
    id <WCFinderMultiSelectSearchBarDelegate> _delegate;
    UIView *_tagContainerView;
    UILabel *_tagLabel;
    UIImageView *_arrowImageView;
    UIView *_separateLine;
    UIImageView *_searchImageView;
    MMUIButton *_clearBtn;
    WCFinderPopUpSelectMenuViewController *_popUpMenu;
    NSMutableArray *_poiCategoryItemArray;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *poiCategoryItemArray; // @synthesize poiCategoryItemArray=_poiCategoryItemArray;
@property(nonatomic) __weak WCFinderPopUpSelectMenuViewController *popUpMenu; // @synthesize popUpMenu=_popUpMenu;
@property(retain, nonatomic) MMUIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIView *tagContainerView; // @synthesize tagContainerView=_tagContainerView;
@property(nonatomic) __weak id <WCFinderMultiSelectSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (id)generateMenuItems;
- (void)updateArrowWhenShowFilter:(_Bool)arg1;
- (void)showPOICategoryFilter;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFiledChanged;
- (void)onClickClearAction;
- (void)textFieldDidChange:(id)arg1;
- (void)endTyping:(id)arg1;
- (void)updateClearBtnHiddenState;
- (void)layoutAllSubviews;
- (void)setUpView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

