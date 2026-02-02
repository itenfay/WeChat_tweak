//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileFuwuInfo, NSMutableArray, UILabel, UIView;

@interface BrandProfileFuwuSubListView
{
    BrandProfileFuwuInfo *_fuwuInfo;
    UIView *_topDividingView;
    UILabel *_groupLabel;
    NSMutableArray *_showingFuwuButtonList;
    NSMutableArray *_allFuwuButtonList;
    double _cachedFuwuViewHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double cachedFuwuViewHeight; // @synthesize cachedFuwuViewHeight=_cachedFuwuViewHeight;
@property(retain, nonatomic) NSMutableArray *allFuwuButtonList; // @synthesize allFuwuButtonList=_allFuwuButtonList;
@property(retain, nonatomic) NSMutableArray *showingFuwuButtonList; // @synthesize showingFuwuButtonList=_showingFuwuButtonList;
@property(retain, nonatomic) UILabel *groupLabel; // @synthesize groupLabel=_groupLabel;
@property(retain, nonatomic) UIView *topDividingView; // @synthesize topDividingView=_topDividingView;
@property(retain, nonatomic) BrandProfileFuwuInfo *fuwuInfo; // @synthesize fuwuInfo=_fuwuInfo;
- (void)onFuwuButtonClicked:(id)arg1;
- (void)updateFuwuInfo:(id)arg1;
- (double)layoutFuwuViewSubviews;
- (double)calcuteFuwuViewHeight;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

@end

