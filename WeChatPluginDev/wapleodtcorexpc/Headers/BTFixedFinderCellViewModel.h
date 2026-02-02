//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTFixedFinderCellViewModel
{
    NSString *_curRecommendReason;
}

+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *curRecommendReason; // @synthesize curRecommendReason=_curRecommendReason;
- (id)buildFinderModelWithFinderData:(id)arg1;
- (id)finderDataWrapper;
- (double)viewHeight;
- (void)doCellViewDeleteAnimationWithItemIndex:(long long)arg1;
- (long long)finderItemViewModelArrVisibleCount;
- (_Bool)hasOnlyOneVisibleItem;
- (id)finderItemViewModelArr;
- (void)resetCacheData;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
- (id)itemViewClassName;

@end

