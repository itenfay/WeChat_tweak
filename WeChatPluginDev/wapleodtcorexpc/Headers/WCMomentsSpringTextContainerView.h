//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WCMomentsSpringTextContainerView : UIView
{
    double _minContentWidth;
    double _maxWidth;
    UIView *_contentView;
    double _contentMarginLeft;
    double _contentMarginRight;
    double _contentMarginTotalX;
    UIImageView *_tigerHeadImageView;
    UIImageView *_tigerBodyImageView;
    UIImageView *_tigerTailImageView;
    UIImageView *_bottomHeadFireworksImageView;
    UIImageView *_topTailFireworksImageView;
    UIImageView *_bottomTailFireworksImageView;
    struct CGPoint _adjustedContentOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bottomTailFireworksImageView; // @synthesize bottomTailFireworksImageView=_bottomTailFireworksImageView;
@property(retain, nonatomic) UIImageView *topTailFireworksImageView; // @synthesize topTailFireworksImageView=_topTailFireworksImageView;
@property(retain, nonatomic) UIImageView *bottomHeadFireworksImageView; // @synthesize bottomHeadFireworksImageView=_bottomHeadFireworksImageView;
@property(retain, nonatomic) UIImageView *tigerTailImageView; // @synthesize tigerTailImageView=_tigerTailImageView;
@property(retain, nonatomic) UIImageView *tigerBodyImageView; // @synthesize tigerBodyImageView=_tigerBodyImageView;
@property(retain, nonatomic) UIImageView *tigerHeadImageView; // @synthesize tigerHeadImageView=_tigerHeadImageView;
@property(nonatomic) struct CGPoint adjustedContentOffset; // @synthesize adjustedContentOffset=_adjustedContentOffset;
@property(nonatomic) double contentMarginTotalX; // @synthesize contentMarginTotalX=_contentMarginTotalX;
@property(nonatomic) double contentMarginRight; // @synthesize contentMarginRight=_contentMarginRight;
@property(nonatomic) double contentMarginLeft; // @synthesize contentMarginLeft=_contentMarginLeft;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minContentWidth; // @synthesize minContentWidth=_minContentWidth;
- (double)tigerImageView:(id)arg1 widthFromHeight:(double)arg2;
- (void)layoutSizeForTigerImageView:(id)arg1;
- (void)layoutSubviews;
- (void)adjustSizeWithContentWidth:(double)arg1;
- (void)adjustSizeWithContentView;
@property(readonly, nonatomic) double maxContentWidth;
@property(readonly, nonatomic) double minWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

