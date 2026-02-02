//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIFont;

@interface MMLiveDashedLabelView : UIView
{
    MMUILabel *_label;
    UIView *_leftDash;
    UIView *_rightDash;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightDash; // @synthesize rightDash=_rightDash;
@property(retain, nonatomic) UIView *leftDash; // @synthesize leftDash=_leftDash;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;

@end

