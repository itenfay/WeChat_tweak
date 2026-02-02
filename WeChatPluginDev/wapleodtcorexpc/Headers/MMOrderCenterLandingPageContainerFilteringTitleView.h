//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MMOrderCenterLandingPageContainerFilteringTitleView : UIView
{
    NSString *_title;
    UILabel *_titleLabel;
    UIImageView *_chevronView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

