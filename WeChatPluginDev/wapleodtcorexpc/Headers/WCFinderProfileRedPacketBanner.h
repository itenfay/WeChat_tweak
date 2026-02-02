//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WCFinderProfileRedPacketBanner : UIView
{
    NSString *_linkUrl;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIImageView *_tailCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *tailCoverView; // @synthesize tailCoverView=_tailCoverView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

