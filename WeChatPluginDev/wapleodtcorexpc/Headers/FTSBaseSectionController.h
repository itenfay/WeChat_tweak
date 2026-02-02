//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSExternalRouter, FTSVoiceSearchBarController, NSString, _TtC6WeChat14FTSSectionData;
@protocol FTSResultPage;

@interface FTSBaseSectionController
{
    id <FTSResultPage> _resultPage;
    FTSVoiceSearchBarController *_ftsPresenter;
    unsigned long long _mode;
    FTSExternalRouter *_router;
    _TtC6WeChat14FTSSectionData *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat14FTSSectionData *model; // @synthesize model=_model;
@property(retain, nonatomic) FTSExternalRouter *router; // @synthesize router=_router;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) FTSVoiceSearchBarController *ftsPresenter; // @synthesize ftsPresenter=_ftsPresenter;
@property(nonatomic) id <FTSResultPage> resultPage; // @synthesize resultPage=_resultPage;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (void)reportDataUpdate;
@property(readonly, copy) NSString *description;
- (id)getFTSContext;
- (id)getViewController;
- (void)fillCommonClickReportStat:(id)arg1 matchTip:(id)arg2;
- (id)lastQueryText;
- (void)onLoadMore;
- (void)cancelSearch;
- (_Bool)hasSearchResult;
- (_Bool)hasSearchDone;
- (_Bool)hasMoreData;
- (_Bool)isSearching;
- (void)search:(id)arg1;
- (void)showBubbleTips:(id)arg1 view:(id)arg2 confirmBlock:(CDUnknownBlockType)arg3;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (id)objectForIndexPath:(id)arg1;
- (long long)topNotSearchItemCount;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
@property(readonly, nonatomic) unsigned long long sectionType;
- (_Bool)isGlobalSearch;
- (_Bool)isDetailSearch;
- (id)titleForMoreCell;
- (unsigned long long)maxDisplayItemsCount;
- (long long)numberOfSearchItems;
- (id)countLimitConifg;
- (id)ftsTaskKey;
- (id)curSearchText;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)viewForFooter;
- (double)heightForFooter;
- (double)heightForRowAtIndex:(long long)arg1;
- (long long)numberOfItemsExceptTopTitile;
- (_Bool)isFoldButtonCellForIndex:(long long)arg1;
- (_Bool)hasFoldButton;
- (long long)numberOfItems;
- (void)recordClickFlow:(long long)arg1;
- (id)extraReportParams;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (id)cellForFoldButtonAtIndex:(long long)arg1;
- (id)cellForMoreAtIndex:(long long)arg1;
- (id)cellForBlank;
- (id)cellForTitleInSection:(long long)arg1;
- (id)sectionTitle;
- (void)didUpdateWithModel:(id)arg1;
- (void)didUpdateToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

