//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveGoodsSKUSelectViewTail : UIView
{
    unsigned long long _style;
    UILabel *_label;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)textForStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)iconSize;

@end

