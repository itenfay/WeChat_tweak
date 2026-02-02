//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, TextStateHistoryInfo, UIImageView;

@interface TextStateHistoryCalendarIconView : UIView
{
    _Bool _plain;
    TextStateHistoryInfo *_info;
    UIImageView *_backgroundImageView;
    UIView *_maskView;
    MMWebImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool plain; // @synthesize plain=_plain;
@property(retain, nonatomic) TextStateHistoryInfo *info; // @synthesize info=_info;
- (void)updateIcon;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLayer;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

