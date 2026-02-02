//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton;

@interface WASMPageSheetBellringView : UIView
{
    _Bool _selected;
    MMUIButton *_button;
    UIButton *_iconButton;
    CDUnknownBlockType _selectedAction;
    CDUnknownBlockType _showTipsView;
}

+ (struct CGSize)viewSize;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType showTipsView; // @synthesize showTipsView=_showTipsView;
@property(copy, nonatomic) CDUnknownBlockType selectedAction; // @synthesize selectedAction=_selectedAction;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)stopAnimation;
- (void)startAnimation;
- (void)onSelectedButtonClickWithShowToast:(_Bool)arg1 toastText:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

