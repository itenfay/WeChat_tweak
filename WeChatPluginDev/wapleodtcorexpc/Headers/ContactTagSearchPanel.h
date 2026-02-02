//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactTagSearchBottomBar, MMUIViewController, NSArray, NSMutableArray, NSMutableSet, NSString, WCDataSearcher;
@protocol ContactTagSearchPanelDelegate;

@interface ContactTagSearchPanel : NSObject
{
    _Bool _isMultiSelecting;
    id <ContactTagSearchPanelDelegate> _delegate;
    WCDataSearcher *_searcher;
    MMUIViewController *_contentViewController;
    NSMutableArray *_searchResult;
    ContactTagSearchBottomBar *_bottomBar;
    NSMutableSet *_selectedTags;
    NSArray *_forceSelectedTags;
    NSArray *_allTags;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMultiSelecting; // @synthesize isMultiSelecting=_isMultiSelecting;
@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(retain, nonatomic) NSArray *forceSelectedTags; // @synthesize forceSelectedTags=_forceSelectedTags;
@property(retain, nonatomic) NSMutableSet *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(retain, nonatomic) ContactTagSearchBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableArray *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak MMUIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) __weak id <ContactTagSearchPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onKeyboardNotification:(id)arg1;
- (void)onKeyboardNotificationWithoutAnimation:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (_Bool)isForceSelected:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)cancelMultiSelect;
- (void)finishMultiSelect;
- (void)startMultiSelect;
- (void)updateBottomBarSelectStatus:(_Bool)arg1 count:(long long)arg2;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)dealloc;
- (void)initBottomBar;
- (void)initSearcher;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

