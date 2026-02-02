//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, WCAdFinderDialogBaseInfo, WCAdURLImageView;
@protocol WCAdFinderDialogBaseViewDelegate;

@interface WCAdFinderDialogBaseView
{
    WCAdFinderDialogBaseInfo *_dialogInfo;
    WCAdURLImageView *_iconView;
    MMUILabel *_titleView;
    UIButton *_confirmButton;
    id <WCAdFinderDialogBaseViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdFinderDialogBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo; // @synthesize dialogInfo=_dialogInfo;
- (void)doConfirmButtonClick;
- (void)onConfirmButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)generateViews;
- (id)initWithFrame:(struct CGRect)arg1 dialogInfo:(id)arg2;

@end

