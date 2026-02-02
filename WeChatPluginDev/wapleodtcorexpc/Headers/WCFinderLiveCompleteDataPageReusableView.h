//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class AnchorCloseLivePageDataUnit, MMUIImageView, MMUILabel, UIImageView;

@interface WCFinderLiveCompleteDataPageReusableView : UICollectionReusableView
{
    AnchorCloseLivePageDataUnit *_pageDataUnit;
    MMUIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIImageView *_arrowView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) AnchorCloseLivePageDataUnit *pageDataUnit; // @synthesize pageDataUnit=_pageDataUnit;
- (void)updateViewAccessibilityInfo;
- (unsigned long long)accessibilityTraits;
- (void)configViewAccessibility;
- (void)updateWithPageData:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

