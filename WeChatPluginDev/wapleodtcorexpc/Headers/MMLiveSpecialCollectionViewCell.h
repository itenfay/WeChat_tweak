//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUILabel, NSString, UIView, WCFinderDataItem, WCFinderFeedImageCDNView, WCFinderHeadImageView;

@interface MMLiveSpecialCollectionViewCell : UICollectionViewCell
{
    _Bool _isPlaying;
    _Bool _needUpdateLayerColor;
    WCFinderDataItem *_dataItem;
    WCFinderFeedImageCDNView *_coverView;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIView *_headImageBorderView;
    CAGradientLayer *_mainColorGradientLayer;
    CAGradientLayer *_shadowGradientLayer;
}

+ (id)ReuseIdentifier;
+ (struct CGSize)cellSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateLayerColor; // @synthesize needUpdateLayerColor=_needUpdateLayerColor;
@property(retain, nonatomic) CAGradientLayer *shadowGradientLayer; // @synthesize shadowGradientLayer=_shadowGradientLayer;
@property(retain, nonatomic) CAGradientLayer *mainColorGradientLayer; // @synthesize mainColorGradientLayer=_mainColorGradientLayer;
@property(retain, nonatomic) UIView *headImageBorderView; // @synthesize headImageBorderView=_headImageBorderView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderFeedImageLoadFinish;
- (void)prepareForReuse;
- (void)updateContent;
- (void)updateBorderStatus;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

