//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel;

@interface PickerToolBar
{
    _Bool _autoExpandWithText;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoExpandWithText; // @synthesize autoExpandWithText=_autoExpandWithText;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)createViews;
- (id)init;

@end

