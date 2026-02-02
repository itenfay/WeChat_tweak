//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveIconTextSignView : UIView
{
    UILabel *_signLabel;
    UIImageView *_iconView;
}

+ (struct CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(struct CGSize)arg3 iconWidth:(double)arg4;
+ (struct CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(struct CGSize)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
- (id)accessibilityLabel;
- (void)updateSelfLayout;
- (void)updateWithSignText:(id)arg1 textColor:(id)arg2 bgColor:(id)arg3 font:(id)arg4;
- (void)updateWithIconName:(id)arg1 iconSize:(struct CGSize)arg2 iconColor:(id)arg3;
- (id)init;

@end

