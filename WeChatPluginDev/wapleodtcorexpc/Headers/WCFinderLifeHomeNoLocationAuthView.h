//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderLifeHomeNoLocationAuthView : UIView
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

