//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CEmoticonWrap, EmoticonRecommendWrap, MMEmoticonView, MMWebImageView, NSString, SightIconView, UILabel;

@interface SearchEmoticonCollectionCell : UICollectionViewCell
{
    _Bool _needPurchase;
    _Bool _needPlayGif;
    _Bool _isLocal;
    unsigned long long _index;
    CEmoticonWrap *_emoticonWrap;
    EmoticonRecommendWrap *_recommendWrap;
    MMWebImageView *_thumbView;
    MMEmoticonView *_emoticonView;
    UILabel *_descLabel;
    UILabel *_purchaseLabel;
    SightIconView *_sightIconView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) UILabel *purchaseLabel; // @synthesize purchaseLabel=_purchaseLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) MMWebImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) _Bool needPlayGif; // @synthesize needPlayGif=_needPlayGif;
@property(retain, nonatomic) EmoticonRecommendWrap *recommendWrap; // @synthesize recommendWrap=_recommendWrap;
@property(nonatomic) _Bool needPurchase; // @synthesize needPurchase=_needPurchase;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)updateEmoticonView;
- (void)updateEmojiDataView:(id)arg1 isLocal:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

