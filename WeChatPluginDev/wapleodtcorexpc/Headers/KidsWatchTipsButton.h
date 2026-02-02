//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMUILabel, NSString, UIColor, UIImageView;

@interface KidsWatchTipsButton : UIControl
{
    double _cornerRadius;
    NSString *_svgIconName;
    UIColor *_iconColor;
    NSString *_title;
    NSString *_content;
    UIImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    UIImageView *_accessoryView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateAccessibility;
- (void)updateIcon;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

