//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIImage, UIImageView;

@interface VoicePrintHeaderView : UIView
{
    UIImage *_iconImage;
    NSString *_title;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateTitleSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

