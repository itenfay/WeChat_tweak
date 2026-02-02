//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FeedsPreviewLiveMultiStyleInfo_StyleOne, FinderWindowProductInfo, NSString;

@interface MMFinderLiveFeedStreamCarouselProductGuideItem
{
    _Bool _showRecommendTag;
    FinderWindowProductInfo *_productInfo;
    FeedsPreviewLiveMultiStyleInfo_StyleOne *_productGuideStyleConf;
    NSString *_recommendTag;
    unsigned long long _tagType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) NSString *recommendTag; // @synthesize recommendTag=_recommendTag;
@property(nonatomic) _Bool showRecommendTag; // @synthesize showRecommendTag=_showRecommendTag;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleOne *productGuideStyleConf; // @synthesize productGuideStyleConf=_productGuideStyleConf;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly, copy) NSString *description;
- (id)itemIdentifier;
@property(readonly, nonatomic) unsigned long long uiStyle;
@property(readonly, nonatomic) unsigned long long duration;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

