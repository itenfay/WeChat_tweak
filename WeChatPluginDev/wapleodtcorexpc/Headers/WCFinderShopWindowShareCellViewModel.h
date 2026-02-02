//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, NSString, WCFinderLiveAudienceComodityLogReporter, WCFinderLiveDisplayWindowShareViewBuilder, WCFinderLiveShopWindowShareItem;

@interface WCFinderShopWindowShareCellViewModel
{
    WCFinderLiveDisplayWindowShareViewBuilder *_builder;
    WCFinderLiveShopWindowShareItem *_loadedItem;
    WCFinderLiveAudienceComodityLogReporter *_reporter;
    AnyPromise *_loadDataIfNeverPromise;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AnyPromise *loadDataIfNeverPromise; // @synthesize loadDataIfNeverPromise=_loadDataIfNeverPromise;
@property(retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderLiveShopWindowShareItem *loadedItem; // @synthesize loadedItem=_loadedItem;
@property(retain, nonatomic) WCFinderLiveDisplayWindowShareViewBuilder *builder; // @synthesize builder=_builder;
- (void)onClickReport;
- (void)reportEcsData:(id)arg1;
- (void)onExposeReport;
- (id)comodityLogReporter;
- (double)estimateWidth;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
@property(readonly, nonatomic) NSString *finderUsername;
- (id)loadDataIfNever;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

