//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSearchPanGestureController, MMTableView, MMUISearchBar, MMUIViewController, NSArray, NSString, UIGestureRecognizer, UINavigationController, UIView, WCSearchController, WCTimeLineFooterView;
@protocol WCSearchDelegate;

@interface WCSearcher : NSObject
{
    WCTimeLineFooterView *_tableFooterView;
    _Bool _nonAnimatedStart;
    _Bool _bForbidAutoLayoutDuringSearchAnimation;
    _Bool _isUseGuideView;
    _Bool _isCustomDisplayView;
    _Bool _becomeFRWithoutSetActive;
    _Bool _bUsePanGesture;
    _Bool _bUseSearchBarNotInSearcher;
    _Bool _shouldRestoreNavBarWhenDismiss;
    _Bool _isSetInactiveByPopGesture;
    _Bool _shouldSearchWhenDoneBtnClick;
    _Bool _originDefinesPresentationContext;
    _Bool _noAnimatedPresentOrDismissing;
    WCSearchController *_searchController;
    id <WCSearchDelegate> _delegate;
    MMUIViewController *_viewController;
    UIView *_searchContainerView;
    MMTableView *_resultTableView;
    UIView *_guideContentView;
    long long _returnKeyType;
    Class _searchControllerClass;
    MMSearchPanGestureController *_panCancelGesture;
    CDUnknownBlockType _completeHandler;
    MMUISearchBar *_searchBarNotInSearcher;
    NSArray *_originalAccessibilityElements;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSArray *originalAccessibilityElements; // @synthesize originalAccessibilityElements=_originalAccessibilityElements;
@property(retain, nonatomic) MMUISearchBar *searchBarNotInSearcher; // @synthesize searchBarNotInSearcher=_searchBarNotInSearcher;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
@property(retain, nonatomic) MMSearchPanGestureController *panCancelGesture; // @synthesize panCancelGesture=_panCancelGesture;
@property(nonatomic) _Bool noAnimatedPresentOrDismissing; // @synthesize noAnimatedPresentOrDismissing=_noAnimatedPresentOrDismissing;
@property(nonatomic) _Bool originDefinesPresentationContext; // @synthesize originDefinesPresentationContext=_originDefinesPresentationContext;
@property(nonatomic) Class searchControllerClass; // @synthesize searchControllerClass=_searchControllerClass;
@property(nonatomic) _Bool shouldSearchWhenDoneBtnClick; // @synthesize shouldSearchWhenDoneBtnClick=_shouldSearchWhenDoneBtnClick;
@property(nonatomic) _Bool isSetInactiveByPopGesture; // @synthesize isSetInactiveByPopGesture=_isSetInactiveByPopGesture;
@property(nonatomic) _Bool shouldRestoreNavBarWhenDismiss; // @synthesize shouldRestoreNavBarWhenDismiss=_shouldRestoreNavBarWhenDismiss;
@property(nonatomic) _Bool bUseSearchBarNotInSearcher; // @synthesize bUseSearchBarNotInSearcher=_bUseSearchBarNotInSearcher;
@property(nonatomic) _Bool bUsePanGesture; // @synthesize bUsePanGesture=_bUsePanGesture;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) _Bool becomeFRWithoutSetActive; // @synthesize becomeFRWithoutSetActive=_becomeFRWithoutSetActive;
@property(retain, nonatomic) UIView *guideContentView; // @synthesize guideContentView=_guideContentView;
@property(retain, nonatomic) MMTableView *resultTableView; // @synthesize resultTableView=_resultTableView;
@property(nonatomic) __weak UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WCSearchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isCustomDisplayView; // @synthesize isCustomDisplayView=_isCustomDisplayView;
@property(nonatomic) _Bool isUseGuideView; // @synthesize isUseGuideView=_isUseGuideView;
@property(nonatomic) _Bool bForbidAutoLayoutDuringSearchAnimation; // @synthesize bForbidAutoLayoutDuringSearchAnimation=_bForbidAutoLayoutDuringSearchAnimation;
@property(nonatomic) _Bool nonAnimatedStart; // @synthesize nonAnimatedStart=_nonAnimatedStart;
@property(retain, nonatomic) WCSearchController *searchController; // @synthesize searchController=_searchController;
- (void)didCancelMove;
- (void)onTriggerToCancelMove;
- (void)onBeginDrag;
- (id)gesturingBottomView;
- (void)onTriggerToMoveRight;
- (void)resetPanGesture;
- (void)preparePanGesture;
- (void)wcsKeyboardWillHide:(id)arg1;
- (_Bool)isSeachActive;
- (void)implVCIsSearchActiveMethodIfNeeded;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)onWCSearchControllerAccessibilityPerformEscape;
- (void)onWCSearchControllerDidDisappear:(_Bool)arg1;
- (void)onWCSearchControllerWillDisappear:(_Bool)arg1;
- (void)onWCSearchControllerDidAppear:(_Bool)arg1;
- (void)onWCSearchControllerWillAppear:(_Bool)arg1;
- (void)onWCSearchControllerDidLoad;
- (void)presentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)onSearchBarMoveToContainerView:(id)arg1;
- (void)setEmptyFooterView;
- (void)setNoResultFooterView:(id)arg1;
- (void)setLoadingFooterView:(id)arg1;
- (void)hookFixTextFieldHeight;
- (void)setChangeText:(id)arg1;
- (void)prepareSearchBarInNavMode;
- (void)pushSearchControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)internalAddViews;
- (void)enableCancelButton;
- (void)internalAddGuideView;
- (void)internalAddResultTableView;
@property(readonly, nonatomic) UIGestureRecognizer *wcsPanGesture;
@property(readonly, nonatomic) MMUISearchBar *searchBar; // @dynamic searchBar;
- (void)commonInit;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1 searchControllerClass:(Class)arg2;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

