//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, FTSFeatureItem, MMBrandHeadImageView, SearchMatchTip;

@interface FTSFeatureCell
{
    FTSFeatureItem *_featureItem;
    SearchMatchTip *_matchTip;
    MMBrandHeadImageView *_thumbImageView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
    _Bool _bAsTopHit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FTSFeatureItem *featureItem; // @synthesize featureItem=_featureItem;
- (id)getTopHitDescrpition;
- (void)layoutSubviews;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2 asTopHit:(_Bool)arg3;
- (void)updateFeatureItem:(id)arg1 matchTip:(id)arg2;
- (void)updateStatus:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

