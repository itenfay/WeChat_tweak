//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavTagEditView, FavTagHintView, FavTagTableView, MMTableView, NSArray, NSMutableArray, NSString, UILabel;

@interface TagViewController
{
    NSMutableArray *m_currentTags;
    NSMutableArray *m_allTags;
    NSString *m_allTagTitle;
    NSString *m_editPlaceholer;
    MMTableView *m_tableView;
    FavTagEditView *m_tagEditView;
    FavTagTableView *m_tagTableView;
    FavTagHintView *m_tagHintView;
    UILabel *m_warnLabel;
    NSString *m_editingTag;
    _Bool _m_bShowAllTags;
    NSString *m_eduPlaceholer;
}

+ (id)genImage:(unsigned long long)arg1 forButton:(id)arg2 cornerRadius:(double)arg3 isHighLight:(_Bool)arg4 isDarkMode:(_Bool)arg5;
+ (id)genImage:(unsigned long long)arg1 forButton:(id)arg2 cornerRadius:(double)arg3 isHighLight:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bShowAllTags; // @synthesize m_bShowAllTags=_m_bShowAllTags;
@property(retain, nonatomic) NSString *m_allTagTitle; // @synthesize m_allTagTitle;
@property(retain, nonatomic) NSArray *m_allTags; // @synthesize m_allTags;
@property(retain, nonatomic) NSArray *m_currentTags; // @synthesize m_currentTags;
@property(retain, nonatomic) NSString *m_eduPlaceholer; // @synthesize m_eduPlaceholer;
@property(retain, nonatomic) NSString *m_editPlaceholer; // @synthesize m_editPlaceholer;
- (void)onMenuControllerDidHide;
- (void)updateEditingTagTo:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)deleteTag:(id)arg1;
- (void)renameTag:(id)arg1;
- (void)clearLongPressBtnState;
- (void)showMenuOnBtn:(id)arg1;
- (void)onLongPressTagBtn:(id)arg1;
- (void)hideKeyboardOnScroll:(id)arg1;
- (void)cleanTextField:(id)arg1;
- (void)onTagUnHighLight:(id)arg1;
- (void)onTagHighLight:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldMoved:(id)arg1;
- (void)changeDisplayView:(_Bool)arg1;
- (void)cancelEditingAndExit;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resignKeyBoard;
- (void)tapKeyBoardNextButton;
- (void)onEditDone;
- (void)OnCancel;
- (void)manageTags;
- (void)editCancel;
- (void)editDone:(id)arg1;
- (void)updateCurrentTags:(id)arg1;
- (void)updateAllTags:(id)arg1;
- (void)initTagView;
- (id)genFavTagTableView;
- (id)genFavTagEditView;
- (void)initRightBtn;
- (void)initLeftBtn;
- (id)rightBarButtonTitle;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

