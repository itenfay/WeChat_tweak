//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonFinderDesignerContentLogic, EmoticonFinderDesignerDataCenter, NSString;
@protocol WCFinderProfileStickerTabPageModelDelegate;

@interface WCFinderProfileStickerTabPageModel
{
    _Bool _loading;
    _Bool _didLoadFail;
    id <WCFinderProfileStickerTabPageModelDelegate> _delegate;
    EmoticonFinderDesignerContentLogic *_contentLogic;
    EmoticonFinderDesignerDataCenter *_dataCenter;
    EmoticonFinderDesignerContentLogic *_mainTabContentLogic;
    double _beginFetchData;
}

+ (int)tabId;
+ (id)overviewSectionTypes;
+ (_Bool)recordTabDisplayFlagToExtInfo;
+ (_Bool)allowLimitMode;
- (void).cxx_destruct;
@property(nonatomic) double beginFetchData; // @synthesize beginFetchData=_beginFetchData;
@property(retain, nonatomic) EmoticonFinderDesignerContentLogic *mainTabContentLogic; // @synthesize mainTabContentLogic=_mainTabContentLogic;
@property(nonatomic) _Bool didLoadFail; // @synthesize didLoadFail=_didLoadFail;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) EmoticonFinderDesignerDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(retain, nonatomic) EmoticonFinderDesignerContentLogic *contentLogic; // @synthesize contentLogic=_contentLogic;
@property(nonatomic) __weak id <WCFinderProfileStickerTabPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)report:(long long)arg1 commentScene:(int)arg2;
- (void)reportClickTab:(int)arg1;
- (void)reportExposeTab:(int)arg1;
- (id)enterTimeStr;
- (id)sdkPageName;
- (unsigned long long)sdkPageID;
- (id)sdkRequestID;
- (_Bool)needsModifyPageInfo;
- (_Bool)needsSDKReport;
- (_Bool)isSelf;
- (_Bool)isAuthor;
- (_Bool)isStoreStaticsNeeded;
- (_Bool)isStoreCellNeedBottomLineFor:(unsigned long long)arg1;
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (id)getViewController;
- (id)getNavController;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
- (void)onNeedReloadForDataChange;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(_Bool)arg2;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)arg1;
- (void)onFirstFetchFailed;
- (void)_updateOverviewSection;
- (void)onFirstFetchFinished;
@property(readonly, nonatomic) unsigned long long maxStoreItemDisplayCount;
- (id)viewPageClassName;
- (id)displayName;
- (_Bool)hasItemsToShow;
- (void)_loadData;
- (void)prepareLogic;
- (void)requestPageData;
- (void)doLoadCache;
- (_Bool)shouldDisplayTab;
@property(readonly, nonatomic) unsigned int designerUin;
@property(readonly, copy, nonatomic) NSString *finderUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

