//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WCC2CShadowLabel : UIView
{
    _Bool _highlighted;
    NSString *_text;
    UILabel *_textLabel;
    UILabel *_frontTextLabel;
    UIView *_shadowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UILabel *frontTextLabel; // @synthesize frontTextLabel=_frontTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)updateArritbuteText;
- (void)updateUI;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)init;

@end

