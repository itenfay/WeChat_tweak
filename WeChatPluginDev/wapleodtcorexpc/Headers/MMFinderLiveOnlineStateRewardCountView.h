//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, UIView;

@interface MMFinderLiveOnlineStateRewardCountView : UICollectionReusableView
{
    MMUILabel *_label;
    UIView *_headerView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
- (void)updateHeaderView:(id)arg1;
- (void)updateRewardAmount:(long long)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

