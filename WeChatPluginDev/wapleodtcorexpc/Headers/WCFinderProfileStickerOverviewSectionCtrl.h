//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderProfileStickerOverviewSectionCtrl
{
    double _emojiCellWidth;
    unsigned long long _emojiCellLineCount;
    double _emojiCellMargin;
    unsigned long long _enterTime;
}

+ (void)setupRegister:(id)arg1;
+ (id)sectionDefines;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) double emojiCellMargin; // @synthesize emojiCellMargin=_emojiCellMargin;
@property(nonatomic) unsigned long long emojiCellLineCount; // @synthesize emojiCellLineCount=_emojiCellLineCount;
@property(nonatomic) double emojiCellWidth; // @synthesize emojiCellWidth=_emojiCellWidth;
- (id)enterTimeStr;
- (_Bool)needsModifyPageInfo;
- (id)sdkPageName;
- (unsigned long long)sdkPageID;
- (_Bool)needsSDKReport;
- (_Bool)isStoreCellNeedHideBtn;
- (_Bool)isStoreCellNeedBottomLineFor:(unsigned long long)arg1;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(_Bool)arg2;
- (void)onFirstFetchFinished;
- (void)onNeedReloadForDataChange;
- (_Bool)isSelf;
- (_Bool)isAuthor;
- (_Bool)isStoreStaticsNeeded;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
- (unsigned long long)IPSetCellExtrance;
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (id)getViewController;
- (id)getNavController;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)genEmojiCellWidth;
- (unsigned long long)emojiRowMaxCount;
- (unsigned long long)emoticonRowMaxCount;
- (_Bool)signleEmojiNeedShowMore;
- (_Bool)storeItemNeedShowMore;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (_Bool)showBottomJumpTabButton;
- (_Bool)showHeaderJumpTabButton;
- (_Bool)displayingEmoji;
- (_Bool)displayingEmoticon;
- (long long)moreBtnType;
- (id)sectionTitle;
- (void)onPageSizeChanged;
- (id)contentLogic;
- (void)onSectionDataChanged:(id)arg1;
- (void)dealloc;
- (void)pageWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

