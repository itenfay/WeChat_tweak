//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface WCSubscriptionNotifyActionHeaderView_ : UIView
{
    MMWebImageView *_headerView;
    UILabel *_titleLabel;
}

+ (id)createWithFrame:(struct CGRect)arg1 iconUrl:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
- (void)layoutSubviews;
- (void)setIconUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 iconUrl:(id)arg2 title:(id)arg3;

@end

