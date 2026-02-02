//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MMFinderLiveLiveRoleSignView : UIView
{
    UILabel *_signLabel;
    long long _style;
}

+ (struct CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(struct CGSize)arg3 style:(long long)arg4;
+ (double)insetTopForStyle:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
- (id)accessibilityLabel;
- (void)updateSelfLayout;
- (void)updateWithSignText:(id)arg1 textColor:(id)arg2 bgColor:(id)arg3 font:(id)arg4 style:(long long)arg5;
- (id)init;

@end

