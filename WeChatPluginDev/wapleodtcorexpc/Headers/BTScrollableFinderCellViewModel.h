//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, WCFinderMPInterestData;
@protocol BTScrollableFinderCellViewModelDelegate;

@interface BTScrollableFinderCellViewModel
{
    NSMutableArray *_finderItemViewModelArr;
    NSMutableArray *_finderItemViewModelArrForDisplay;
    _Bool _hasUpdateDatas;
    _Bool _hasRequestFinderInterestData;
    id <BTScrollableFinderCellViewModelDelegate> _delegate;
    WCFinderMPInterestData *_finderInterestData;
    NSArray *_indexesOfExposedItemNeedToReport;
}

+ (double)cellHeight;
+ (double)cellWidth;
+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRequestFinderInterestData; // @synthesize hasRequestFinderInterestData=_hasRequestFinderInterestData;
@property(nonatomic) _Bool hasUpdateDatas; // @synthesize hasUpdateDatas=_hasUpdateDatas;
@property(retain, nonatomic) NSArray *indexesOfExposedItemNeedToReport; // @synthesize indexesOfExposedItemNeedToReport=_indexesOfExposedItemNeedToReport;
@property(retain, nonatomic) WCFinderMPInterestData *finderInterestData; // @synthesize finderInterestData=_finderInterestData;
@property(nonatomic) __weak id <BTScrollableFinderCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderMPInterestDataDidDelete:(id)arg1;
- (void)onDisappear;
- (void)stopAllAutoPlayCell;
- (id)finderDataWrapper;
- (double)viewHeight;
- (void)doCellViewDeleteAnimationWithItemIndexArr:(id)arg1;
- (void)clearFinderItemViewModelArrCache;
- (long long)getDisplayIndexFromDataIndex:(long long)arg1;
- (long long)getDataIndexFromDisplayIndex:(long long)arg1;
- (id)title;
- (id)finderItemViewModelArrForDisplay;
- (id)finderItemViewModelArr;
- (unsigned long long)itemCount;
- (_Bool)isFinderInterestDataWithIndex:(long long)arg1;
- (void)requestFinderInterestCardIfNeeded;
- (_Bool)hasFinderInteresetData;
- (_Bool)enableFinderInterestCard;
- (void)resetData;
- (_Bool)isDataChanged;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
- (id)itemViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

