//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CEmoticonWrap, MMEmoticonView, MMWebImageView, NSString, SightIconView, UILabel, WSEmoticonModel;

@interface RelatedEmoticonCollectionCell : UICollectionViewCell
{
    _Bool _needPurchase;
    _Bool _needPlayGif;
    _Bool _needShowDesc;
    CEmoticonWrap *_emoticonWrap;
    WSEmoticonModel *_similarEmoticon;
    double _padding;
    MMWebImageView *_thumbView;
    MMEmoticonView *_emoticonView;
    UILabel *_descLabel;
    UILabel *_purchaseLabel;
    SightIconView *_sightIconView;
    struct CGSize _emoticonSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) UILabel *purchaseLabel; // @synthesize purchaseLabel=_purchaseLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) MMWebImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) struct CGSize emoticonSize; // @synthesize emoticonSize=_emoticonSize;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool needShowDesc; // @synthesize needShowDesc=_needShowDesc;
@property(nonatomic) _Bool needPlayGif; // @synthesize needPlayGif=_needPlayGif;
@property(retain, nonatomic) WSEmoticonModel *similarEmoticon; // @synthesize similarEmoticon=_similarEmoticon;
@property(nonatomic) _Bool needPurchase; // @synthesize needPurchase=_needPurchase;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)updateEmoticonView;
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

