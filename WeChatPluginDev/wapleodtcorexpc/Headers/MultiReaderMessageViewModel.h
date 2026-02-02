//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MultiReaderMessageCellViewDelegate;

@interface MultiReaderMessageViewModel
{
    NSMutableArray *m_titleSizeArr;
    NSMutableDictionary *m_titleStyleDic;
    NSMutableArray *m_digestSizeArr;
    NSMutableDictionary *m_digestStyleDic;
    NSMutableDictionary *m_isPaidStateDic;
    NSMutableDictionary *m_pageIdentifier2IndexDic;
    _Bool m_isPaySubcribeOpen;
    id <MultiReaderMessageCellViewDelegate> _multiReaderMessageCellViewDelegate;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MultiReaderMessageCellViewDelegate> multiReaderMessageCellViewDelegate; // @synthesize multiReaderMessageCellViewDelegate=_multiReaderMessageCellViewDelegate;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)fetchDetailDataForIndex:(unsigned int)arg1;
- (void)fetchLiveStatusForIndex:(unsigned int)arg1;
- (void)fetchLiveStatusIfNeed;
- (void)fetchLiveDetailDataIfNeed;
- (void)doForwardBrandLiveContent:(id)arg1 forIndex:(unsigned int)arg2;
- (_Bool)canForwardBrandLiveForIndex:(unsigned int)arg1;
- (void)doJumpToLiveRoom:(id)arg1 forIndex:(unsigned int)arg2;
- (struct CGSize)brandLiveSizeForIndex:(unsigned int)arg1;
- (id)brandLiveStatusWordingForIndex:(unsigned int)arg1;
- (_Bool)isBrandLiveForIndex:(unsigned int)arg1;
- (_Bool)isBrandLiveContentForIndex:(unsigned int)arg1;
- (_Bool)isBrandLiveContentShouldUseNewFinderCardViewStyleForIndex:(unsigned int)arg1;
- (double)finderLiveCardViewHeight;
- (unsigned long long)firstBrandFinderLiveCardStyle;
- (id)firstFinderLiveCardViewModel;
- (void)updateTitleAtIndex:(long long)arg1;
- (void)updatePayStatus:(_Bool)arg1 pageIdentifier:(id)arg2 index:(long long)arg3;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (id)paySubcribeTagImageForIndex:(unsigned int)arg1;
- (struct CGSize)payTagSizeForIndex:(unsigned int)arg1;
- (_Bool)isPaidForIndex:(unsigned int)arg1;
- (_Bool)canShowImageIconForIndex:(unsigned int)arg1;
- (_Bool)isPayContentForIndex:(unsigned int)arg1;
- (void)initPayStateIfNeed;
- (_Bool)isItemNoCover:(id)arg1;
- (struct CGSize)calculateDigestLabelSize:(unsigned int)arg1;
- (id)digestStylesForIndex:(unsigned int)arg1;
- (unsigned long long)limitLineNumberOfIndex:(unsigned int)arg1;
- (double)labelMaxWidthOfIndex:(unsigned int)arg1;
- (struct CGSize)digestSizeOfIndex:(unsigned int)arg1;
- (struct CGSize)calculateTitleLabelSize:(unsigned int)arg1;
- (id)titleStylesForIndex:(unsigned int)arg1;
- (id)titleOfIndex:(unsigned int)arg1;
- (struct CGSize)titleSizeOfIndex:(unsigned int)arg1;
- (void)resetTextSize;
- (id)itemLabelWithFont:(id)arg1 width:(double)arg2;
- (id)getRichTextView:(double)arg1 font:(id)arg2;
- (unsigned int)imageCountForIndex:(unsigned int)arg1;
- (unsigned int)playLengthForIndex:(unsigned int)arg1;
- (unsigned long long)musicSouceForIndex:(unsigned int)arg1;
- (id)genTingItemForIndex:(unsigned int)arg1;
- (double)heightForTopItemView;
- (double)textNormalItemViewHeight:(id)arg1 index:(unsigned int)arg2;
- (double)textTopItemViewHeight:(id)arg1;
- (double)articleTopItemViewHeight:(id)arg1;
- (double)appendNodeViewHeightIfIndex:(long long)arg1;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

