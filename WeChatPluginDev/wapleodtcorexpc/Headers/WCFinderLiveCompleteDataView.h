//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAnchorCloseLivePageData, WCFinderLiveCompleteDataModel, WCFinderLiveCompleteDataPageView;

@interface WCFinderLiveCompleteDataView
{
    CDUnknownBlockType _itemSelectBlock;
    CDUnknownBlockType _dataViewBlock;
    CDUnknownBlockType _dataViewExposeBlock;
    FinderLiveAnchorCloseLivePageData *_pageData;
    WCFinderLiveCompleteDataModel *_dataModel;
    WCFinderLiveCompleteDataPageView *_basePageView;
    WCFinderLiveCompleteDataPageView *_incomePageView;
}

+ (_Bool)shouldPaymentEntryWithFinderLiveInfo:(id)arg1;
+ (id)getDataItemListWithType:(int)arg1 shouldPaymentEntry:(_Bool)arg2 enableLiveRoomReward:(_Bool)arg3 shoppingAvailable:(_Bool)arg4 isBizLive:(_Bool)arg5;
+ (id)localPageDataWithFinderLiveInfo:(id)arg1 finderLiveTask:(id)arg2 isBizLive:(_Bool)arg3 showType:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveCompleteDataPageView *incomePageView; // @synthesize incomePageView=_incomePageView;
@property(retain, nonatomic) WCFinderLiveCompleteDataPageView *basePageView; // @synthesize basePageView=_basePageView;
@property(retain, nonatomic) WCFinderLiveCompleteDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) FinderLiveAnchorCloseLivePageData *pageData; // @synthesize pageData=_pageData;
@property(copy, nonatomic) CDUnknownBlockType dataViewExposeBlock; // @synthesize dataViewExposeBlock=_dataViewExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType dataViewBlock; // @synthesize dataViewBlock=_dataViewBlock;
@property(copy, nonatomic) CDUnknownBlockType itemSelectBlock; // @synthesize itemSelectBlock=_itemSelectBlock;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)showInComeViewWithPageData:(id)arg1;
- (void)updateWithPageData:(id)arg1;
- (_Bool)showAudienceAvgSecondsSubTitle:(id)arg1;
- (id)getDataViewHeightWithPageData:(id)arg1;

@end

