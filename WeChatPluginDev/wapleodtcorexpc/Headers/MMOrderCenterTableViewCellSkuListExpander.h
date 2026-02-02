//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMOrderCenterTableViewCellSkuListExpander : UIView
{
    long long _remainingCount;
    UILabel *_labelView;
    UIImageView *_downChevronView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *downChevronView; // @synthesize downChevronView=_downChevronView;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) long long remainingCount; // @synthesize remainingCount=_remainingCount;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

