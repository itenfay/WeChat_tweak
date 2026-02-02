//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveProductsTableView, MMFinderLiveTaskId, MMUIButton, MMUITextField, NSDate, NSString, UIButton, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView;
@protocol MMFinderLiveProductsSearchViewDelegate;

@interface MMFinderLiveProductsSearchView : UIView
{
    _Bool _isSearching;
    MMFinderLiveProductsTableView *_tableView;
    MMFinderLiveTaskId *_taskID;
    id <MMFinderLiveProductsSearchViewDelegate> _delegate;
    MMUIButton *_backButton;
    UILabel *_hintWordingLabel;
    MMUITextField *_textField;
    UIButton *_searchButton;
    WCFinderAnimationLoadingView *_loadingView;
    NSString *_keyword;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSDate *_appearDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *appearDate; // @synthesize appearDate=_appearDate;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *hintWordingLabel; // @synthesize hintWordingLabel=_hintWordingLabel;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <MMFinderLiveProductsSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) MMFinderLiveProductsTableView *tableView; // @synthesize tableView=_tableView;
- (void)pageDidDisappear;
- (void)pageWillAppear;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTap;
- (void)focusOnTextField;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)reportSearchResultIfNeeded:(id)arg1 keyword:(id)arg2;
- (void)handleSearchResults:(id)arg1 keyword:(id)arg2;
- (void)searchIfNeeded;
- (void)onSearchButtonClicked;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)layoutSubviews;
- (void)onBackButtonClicked;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 taskID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

