//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMHeadImageView, MMUILabel, NSString, UIColor, UIImageView;

@interface KidsWatchTipsCardView : UIView
{
    double _cornerRadius;
    NSString *_svgIconName;
    UIColor *_iconColor;
    NSString *_title;
    NSString *_content;
    NSString *_headImageURL;
    NSString *_nickName;
    UIImageView *_iconView;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    MMHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateIcon;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

