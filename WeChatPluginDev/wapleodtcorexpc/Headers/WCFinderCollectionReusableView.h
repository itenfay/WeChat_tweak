//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface WCFinderCollectionReusableView : UICollectionReusableView
{
    double _contentWidth;
    UIView *_wc_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *wc_contentView; // @synthesize wc_contentView=_wc_contentView;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (void)reLayoutContentView;
- (void)layoutSubviews;
- (void)addSubviewToReusableView:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

