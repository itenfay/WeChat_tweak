//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveVerticalTextButtonViewConfig, UIButton, UILabel;

@interface MMLiveVerticalTextButtonView : UIView
{
    UIButton *_button;
    UILabel *_label;
    MMLiveVerticalTextButtonViewConfig *_config;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) MMLiveVerticalTextButtonViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)onTapInside:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)updateConfig:(id)arg1;
- (void)updateWithImage:(id)arg1 title:(id)arg2;
- (id)initWithConfig:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;

@end

