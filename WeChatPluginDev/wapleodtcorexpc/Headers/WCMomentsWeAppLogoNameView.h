//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIFont, UIImageView;

@interface WCMomentsWeAppLogoNameView : UIView
{
    MMUILabel *_nameLabel;
    UIImageView *_logoImageView;
    UIFont *_font;
}

+ (double)minWidthWithWeAppName:(id)arg1 font:(id)arg2;
+ (double)widthWithWeAppName:(id)arg1 font:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (double)minWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initNameLabelWithName:(id)arg1;
- (void)initLogoImageView;
- (void)updateWithWeAppName:(id)arg1;
- (id)initWithName:(id)arg1 font:(id)arg2;

@end

