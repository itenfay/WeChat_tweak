//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class JSApiScopeConfirmWindow, MMWebImageView, NSMutableArray, NSString, UIButton, UILabel, UITableView;

@interface JSAPIScopeConfirmContainterView : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    MMWebImageView *_appIconImageView;
    UILabel *_scopeDescriptionLabel;
    UIView *_tableSplitLine;
    UITableView *_scopeTableView;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSMutableArray *_arrSelect;
    JSApiScopeConfirmWindow *_weakConfirmWindow;
}

- (void).cxx_destruct;
@property(nonatomic) __weak JSApiScopeConfirmWindow *weakConfirmWindow; // @synthesize weakConfirmWindow=_weakConfirmWindow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onClickButtonCancel:(id)arg1;
- (void)onClickButtonConfirm:(id)arg1;
- (id)titleText;
- (double)designTableHeightToContentWidthRatio;
- (double)designNoTableContentHeightToContentWidthRatio;
- (unsigned long long)designContentWidth;
- (struct CGRect)contentViewFrame;
- (void)layoutSubviews;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (id)confirmWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

