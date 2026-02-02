//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecommendFeedbackInfo, BTRecommendSectionData;

@interface BTBaseRecommendMsgCellViewModel
{
    unsigned int _itemIndex;
    BTRecommendSectionData *_sectionData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) __weak BTRecommendSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (double)separateLineWidth;
@property(readonly, nonatomic) _Bool bShowFeedback;
@property(readonly, nonatomic) BTRecommendFeedbackInfo *feedbackInfo;
- (void)clearCacheOnDataChanged;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 viewWidth:(double)arg4;

@end

