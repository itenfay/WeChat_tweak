//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface WCFinderProfileWarnningView : UIView
{
    _Bool _imageLoading;
    long long _type;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIImageView *_tailIconView;
    UIColor *_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool imageLoading; // @synthesize imageLoading=_imageLoading;
@property(retain, nonatomic) UIImageView *tailIconView; // @synthesize tailIconView=_tailIconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool clickable;
@property(retain, nonatomic) NSString *text;
- (id)displayIcon;
- (id)displayTextColor;
- (id)displayBackgroundColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

