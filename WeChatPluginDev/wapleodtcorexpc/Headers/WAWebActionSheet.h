//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIButton, UILabel, UIScrollView, UIView, WAWebViewController;
@protocol WAWebActionSheetDelegate;

@interface WAWebActionSheet
{
    UIScrollView *_containerView;
    NSMutableArray *_buttonArray;
    UIButton *_cancelButton;
    long long _actionSheedId;
    id <WAWebActionSheetDelegate> _delegate;
    double _maxHeight;
    UIView *_backgroundView;
    WAWebViewController *_vc;
    UIView *_view;
    NSMutableArray *_buttonArr;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *buttonArr; // @synthesize buttonArr=_buttonArr;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak WAWebViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) __weak id <WAWebActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long actionSheedId; // @synthesize actionSheedId=_actionSheedId;
- (id)makeAlertTextViewWithText:(id)arg1 backgroundWidth:(double)arg2;
- (void)setItemColor:(id)arg1 atIndex:(long long)arg2;
- (void)onSelected:(long long)arg1;
- (void)onCancel;
- (void)afterShow;
- (void)beforeShow;
- (void)dismiss;
- (void)dismissAndCancel;
- (void)onClickBtn:(id)arg1;
- (void)tapOut:(id)arg1;
- (void)setItemColor:(id)arg1 cancelColor:(id)arg2;
- (void)updateAlertText:(id)arg1;
- (void)updateCancelText:(id)arg1;
- (void)updateItems:(id)arg1;
- (void)setItems:(id)arg1 cancelText:(id)arg2 alertText:(id)arg3;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

