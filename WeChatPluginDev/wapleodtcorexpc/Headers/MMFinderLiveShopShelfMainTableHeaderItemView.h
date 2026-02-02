//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface MMFinderLiveShopShelfMainTableHeaderItemView : UIView
{
    MMWebImageView *_mainIcon;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *mainIcon; // @synthesize mainIcon=_mainIcon;
- (struct CGSize)mainIconSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

