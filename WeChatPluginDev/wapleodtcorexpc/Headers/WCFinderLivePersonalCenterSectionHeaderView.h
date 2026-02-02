//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface WCFinderLivePersonalCenterSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
}

+ (double)headerViewHeight;
+ (id)headerFont;
+ (id)reuseID;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;

@end

