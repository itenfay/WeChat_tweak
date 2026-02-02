//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecommendMsgData, NSArray, NSMutableDictionary;

@interface BTRecommendSectionData
{
    BTRecommendMsgData *_recommendData;
    NSMutableDictionary *_cachedRowHeightMap;
}

+ (_Bool)canCreateSectionDataWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedRowHeightMap; // @synthesize cachedRowHeightMap=_cachedRowHeightMap;
@property(readonly, nonatomic) BTRecommendMsgData *recommendData; // @synthesize recommendData=_recommendData;
- (void)updateDataWithObjectIdArr:(id)arg1;
- (void)onFinderRecommendCardDidDeleteFinderCardDataWithObjectIdArr:(id)arg1 msgWrapBrandTimelineMsgId:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool isMsgTopRightUseRecReason;
- (unsigned long long)sectionType;
- (void)updateHeight:(double)arg1 forRow:(long long)arg2;
- (double)heightForSectionFooter;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
@property(readonly, nonatomic) NSArray *arrAccountData;
- (void)initOrUpdateItemViewModelArr;
- (void)updateMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;

@end

