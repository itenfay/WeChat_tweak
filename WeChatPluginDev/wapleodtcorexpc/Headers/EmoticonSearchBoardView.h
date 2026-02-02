//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmoticonSearchInMessagePanelReporter, EmoticonSearchViewModel, KeyboardDismissProxy, MMUISearchBar, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UIControl, UILongPressGestureRecognizer;
@protocol EmoticonSearchBoardViewDelegate;

@interface EmoticonSearchBoardView
{
    _Bool _disableWebSearch;
    id <EmoticonSearchBoardViewDelegate> _delegate;
    MMUISearchBar *_searchBar;
    UICollectionView *_collectionView;
    EmoticonSearchViewModel *_vm;
    EmoticonSearchInMessagePanelReporter *_reporter;
    UICollectionViewFlowLayout *_collectionLayout;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_selectedIndexPath;
    NSString *_text;
    CEmoticonWrap *_currentEmoticonWrap;
    UIControl *_emoticonStoreView;
    long long _configDelayHideKeyboardTime;
    KeyboardDismissProxy *_dismissKeyboardProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KeyboardDismissProxy *dismissKeyboardProxy; // @synthesize dismissKeyboardProxy=_dismissKeyboardProxy;
@property(nonatomic) long long configDelayHideKeyboardTime; // @synthesize configDelayHideKeyboardTime=_configDelayHideKeyboardTime;
@property(retain, nonatomic) UIControl *emoticonStoreView; // @synthesize emoticonStoreView=_emoticonStoreView;
@property(retain, nonatomic) CEmoticonWrap *currentEmoticonWrap; // @synthesize currentEmoticonWrap=_currentEmoticonWrap;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) EmoticonSearchInMessagePanelReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool disableWebSearch; // @synthesize disableWebSearch=_disableWebSearch;
@property(retain, nonatomic) EmoticonSearchViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <EmoticonSearchBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportEmoticonExposure;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(nonatomic) int vmState;
- (void)onTapEmoticonStore;
- (void)showEmoticonStoreView;
- (void)hideEmoticonStoreView;
- (void)delayCheckKeyboard;
- (void)textFieldDidChangeSelection:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onTapWebSearch;
- (void)onLongPressToPreview:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)checkAndHideKeyboard;
- (void)delaySearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)reloadData;
- (void)configCollectionView;
- (void)updateSearchBarAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configSearchBar;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

