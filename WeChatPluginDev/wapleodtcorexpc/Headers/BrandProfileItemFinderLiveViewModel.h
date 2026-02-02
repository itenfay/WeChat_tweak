//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFinderLiveCardViewModel, BrandFinderLiveDataWrapper, NSMutableArray, NSString;

@interface BrandProfileItemFinderLiveViewModel
{
    BrandFinderLiveDataWrapper *_liveDataWrapperCache;
    NSMutableArray *_liveTitleLabelStyles;
    struct CGSize _liveTitleSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize liveTitleSize; // @synthesize liveTitleSize=_liveTitleSize;
@property(retain, nonatomic) NSMutableArray *liveTitleLabelStyles; // @synthesize liveTitleLabelStyles=_liveTitleLabelStyles;
@property(retain, nonatomic) BrandFinderLiveDataWrapper *liveDataWrapperCache; // @synthesize liveDataWrapperCache=_liveDataWrapperCache;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)fetchLiveDetailData;
- (void)fetchLiveStatus;
@property(readonly, nonatomic) struct CGSize brandLiveSize;
@property(readonly, copy, nonatomic) NSString *brandLiveStatusWording;
@property(readonly, nonatomic) _Bool isBrandLive;
@property(readonly, nonatomic) _Bool isBrandLiveContent;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (id)finderCoverImgUrl;
- (id)finderLiveTitle;
@property(readonly, nonatomic) unsigned long long style;
- (unsigned long long)finderLiveCardStyle;
- (_Bool)shouldUseNewFinderCardViewStyle;
@property(readonly, nonatomic) BrandFinderLiveCardViewModel *cardViewModel;
- (id)finderLiveDataWrapper;
- (id)profileFinderLiveInfo;
- (void)clearLayoutCache;
- (id)desc;
- (id)titleLabelStyles;
- (double)titleMaxWidth;
- (id)title;
- (id)coverImgURL;
- (double)normalCoverBottomMargin;
- (double)calCellHeight;
- (id)initWithItemMsg:(id)arg1;
- (id)tableViewCellClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

