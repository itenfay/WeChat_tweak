//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FixTitleColorButton, MMPageSheetConfig;
@protocol MMPageSheetBottomViewDelegate;

@interface MMPageSheetBottomView : UIView
{
    id <MMPageSheetBottomViewDelegate> _delegate;
    FixTitleColorButton *_cancelButton;
    FixTitleColorButton *_confirmButton;
    UIView *_customSubview;
    long long _type;
    MMPageSheetConfig *_config;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *customSubview; // @synthesize customSubview=_customSubview;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) FixTitleColorButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MMPageSheetBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void)layoutSubviews;
- (id)buttonWithConfig:(id)arg1 isConfirm:(_Bool)arg2;
- (void)resetButtonsWithConfig:(id)arg1;
- (void)updateConfig:(id)arg1;
- (void)onPageSheetDidAppear;

@end

