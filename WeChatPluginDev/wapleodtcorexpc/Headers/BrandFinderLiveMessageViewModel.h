//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFinderLiveCardViewModel, NSString;
@protocol BrandFinderLiveMessageCellViewDelegate;

@interface BrandFinderLiveMessageViewModel
{
    _Bool _isShouldLayout;
    id <BrandFinderLiveMessageCellViewDelegate> _finderLiveDelegate;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShouldLayout; // @synthesize isShouldLayout=_isShouldLayout;
@property(nonatomic) __weak id <BrandFinderLiveMessageCellViewDelegate> finderLiveDelegate; // @synthesize finderLiveDelegate=_finderLiveDelegate;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)arg1;
- (void)onRecommendReasonChangedWithExportId:(id)arg1;
- (void)onReplayStatusChangedWithExportId:(id)arg1;
- (void)onLiveStatusChangedWithExportId:(id)arg1;
- (void)fetchLiveStatus;
- (void)fetchDetailData;
- (void)doForward:(id)arg1;
- (_Bool)canForward;
- (void)doJumpToLiveRoom:(id)arg1;
- (id)liveDataWrapper;
@property(readonly, nonatomic) BrandFinderLiveCardViewModel *cardViewModel;
- (unsigned long long)finderLiveCardStyle;
- (_Bool)shouldUseNewFinderCardViewStyle;
- (struct CGSize)brandFinderLiveMessageViewSize;
- (id)accessibilityDescription;
- (_Bool)shouldLayoutIfNeeded;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

