//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CEmoticonWrap, MMEmoticonView, MMQuickSendEmoticonSearchCellView, MMWebImageView, NSString, SightIconView, UILabel, UIView;

@interface MMQuickSendEmoticonCell : UICollectionViewCell
{
    UIView *m_backgroundView;
    _Bool _needPlayGif;
    MMEmoticonView *_emoticonView;
    MMWebImageView *_thumbView;
    CEmoticonWrap *_emoticonWrap;
    SightIconView *_sightIconView;
    UILabel *_descLabel;
    MMQuickSendEmoticonSearchCellView *_searchView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMQuickSendEmoticonSearchCellView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) _Bool needPlayGif; // @synthesize needPlayGif=_needPlayGif;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) MMWebImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)layoutSubviews;
- (void)updateEmoticonView;
- (void)showRecommendIdentifyIfNeeded;
- (void)setupForSearch;
- (void)setEmoticonWrap:(id)arg1 PlayGif:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)showBackgroundView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

