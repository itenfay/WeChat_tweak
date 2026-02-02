//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, NSDate, NSString, WCFinderLiveProductShareItem, WCFinderProductShareViewBuilder;

@interface WCFinderProductShareCellViewModel
{
    WCFinderProductShareViewBuilder *_builder;
    NSString *_livingFinderUsername;
    NSString *_sessionId;
    AnyPromise *_getPreloadDataPromise;
    NSDate *_visibleDate;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *visibleDate; // @synthesize visibleDate=_visibleDate;
@property(retain, nonatomic) AnyPromise *getPreloadDataPromise; // @synthesize getPreloadDataPromise=_getPreloadDataPromise;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *livingFinderUsername; // @synthesize livingFinderUsername=_livingFinderUsername;
@property(retain, nonatomic) WCFinderProductShareViewBuilder *builder; // @synthesize builder=_builder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)reportEcsData:(id)arg1;
- (id)fetchProductInfoIfNever;
- (id)fetchProductInfoOnClicked;
- (id)createFetchProductPromiseForce:(_Bool)arg1;
- (_Bool)isShareWithAnchor;
@property(readonly, nonatomic) WCFinderLiveProductShareItem *item;
- (id)reportAppMessageItem:(unsigned int)arg1;
- (void)onReportClickWithUserInfo:(id)arg1;
- (void)onReportExposureWithInterval:(long long)arg1 userInfo:(id)arg2;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (void)onCardInfoChanged;
- (void)updateWithFetchData:(id)arg1;
- (id)genFinderDataItem;
- (id)additionalAccessibilityDescription;
- (double)estimateWidth;
- (struct CGSize)defaultContentViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

