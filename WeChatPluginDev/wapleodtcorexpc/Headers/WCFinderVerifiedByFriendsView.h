//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderVerifiedByFriendsView : UIView
{
    UIImageView *_iconView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)sizeToFit;
- (void)renderWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

