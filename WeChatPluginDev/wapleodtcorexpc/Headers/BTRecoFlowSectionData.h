//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetRecommendFeedsResp_RecommendCardMsg, NSMutableDictionary, NSString;

@interface BTRecoFlowSectionData
{
    _Bool _isExposed;
    GetRecommendFeedsResp_RecommendCardMsg *_cardMsg;
    NSString *_titleTag;
    NSMutableDictionary *_cachedRowHeightMap;
}

+ (_Bool)canCreateSectionDataWithCardMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedRowHeightMap; // @synthesize cachedRowHeightMap=_cachedRowHeightMap;
@property(copy, nonatomic) NSString *titleTag; // @synthesize titleTag=_titleTag;
@property(nonatomic) _Bool isExposed; // @synthesize isExposed=_isExposed;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg *cardMsg; // @synthesize cardMsg=_cardMsg;
- (id)identifierWithRow:(unsigned long long)arg1;
- (double)heightForSectionFooter;
- (void)updateHeight:(double)arg1 forRow:(long long)arg2;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (unsigned long long)sectionType;
- (void)dealloc;
- (id)initWithSectionWidth:(double)arg1 cardMsg:(id)arg2;

@end

