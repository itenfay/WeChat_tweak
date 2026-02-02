//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;

@interface WCRoundSelectionButton : UIView
{
    UIButton *_button;
    SEL _clickAction;
    id _clickTarget;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id clickTarget; // @synthesize clickTarget=_clickTarget;
@property(nonatomic) SEL clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)didClick:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)addTarget:(id)arg1 clickAction:(SEL)arg2;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

