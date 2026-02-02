//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, MMFinderLiveContentVM, NSDate, NotifyMsgItem, WCFinderLiveShareCardExposeReportAdapter;

@interface NotifyMessageViewModel
{
    NotifyMsgItem *_notifyMsgItem;
    WCFinderLiveShareCardExposeReportAdapter *_exposeReportAdapter;
    NSDate *_startAutoPlay;
    AnyPromise *_loadLiveInfoPromise;
    MMFinderLiveContentVM *_contentVM;
}

+ (_Bool)itemsDisplayContentAtTopicRight;
+ (double)itemsFontSize;
+ (id)reasonFont;
+ (id)itemsFont;
+ (id)titleFont;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) AnyPromise *loadLiveInfoPromise; // @synthesize loadLiveInfoPromise=_loadLiveInfoPromise;
@property(retain, nonatomic) NSDate *startAutoPlay; // @synthesize startAutoPlay=_startAutoPlay;
@property(retain, nonatomic) WCFinderLiveShareCardExposeReportAdapter *exposeReportAdapter; // @synthesize exposeReportAdapter=_exposeReportAdapter;
@property(retain, nonatomic) NotifyMsgItem *notifyMsgItem; // @synthesize notifyMsgItem=_notifyMsgItem;
- (void)report21158Expose;
- (_Bool)isLiveCellLargeStyle;
- (_Bool)isLiveCell;
- (double)verticalContentMargin;
- (struct CGSize)imageSize;
- (double)calculateHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)arg1;

@end

