//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString, UIButton, UITableView, WCFileBrowserToolBarViewModel;
@protocol WCFileBrowserToolBarDelegate;

@interface WCFileBrowserToolBar : UIView
{
    _Bool _isExpanded;
    WCFileBrowserToolBarViewModel *_viewModel;
    id <WCFileBrowserToolBarDelegate> _delegate;
    UIView *_containerView;
    MMUIButton *_expandButton;
    MMUIButton *_titleLabel;
    MMUILabel *_emptyLabel;
    UITableView *_contentTableView;
    UIButton *_sendButton;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) MMUIButton *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCFileBrowserToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFileBrowserToolBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onSendButtonClicked;
- (void)onExpandButtonClicked;
- (void)highlightFileInfo:(id)arg1;
- (void)shrinkToolBar;
- (void)expandToolBar;
- (void)onDataChanged;
- (void)layoutUI;
- (void)updateUI;
- (void)initViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)addToSuperview:(id)arg1;
- (void)showWithHighlightedFileInfos:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

