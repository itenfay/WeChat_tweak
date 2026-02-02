//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface VoipRecentStatusFoldButton : UIView
{
    UILabel *_titleLabel;
    UIImageView *_arrowIconImageView;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *arrowIconImageView; // @synthesize arrowIconImageView=_arrowIconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

