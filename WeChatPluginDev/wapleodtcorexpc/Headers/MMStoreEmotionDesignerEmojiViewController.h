//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfo, EmojiTag, EmoticonStoreReportInfo, EmotionBannerSet, EmotionCollectionFooterView, NSArray, NSString, StoreEmotionGetDesignerEmojiListCgi, StoreEmotionPageShareLogic, UICollectionView;

@interface MMStoreEmotionDesignerEmojiViewController
{
    UICollectionView *m_collectionView;
    EmotionCollectionFooterView *m_collectionFooterView;
    StoreEmotionGetDesignerEmojiListCgi *m_getAllDesignerEmojisCgi;
    StoreEmotionGetDesignerEmojiListCgi *m_curGetDesignerEmojisCgi;
    NSArray *m_tagsList;
    EmojiTag *m_lastSelectedTag;
    unsigned int m_designerUin;
    NSString *m_keyword;
    unsigned long long m_searchId;
    EmotionBannerSet *m_bannerSet;
    unsigned long long m_designerEmojiMode;
    EmojiInfo *m_operatingEmoji;
    StoreEmotionPageShareLogic *m_shareLogic;
    EmoticonStoreReportInfo *_reportInfo;
    long long _entranceScene;
    NSString *_sessionId;
}

+ (_Bool)canShowDesignerEmoji;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long entranceScene; // @synthesize entranceScene=_entranceScene;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isSetNormalToBlackStyle;
- (void)switchToGetDesignerEmojiListCgi:(id)arg1;
- (void)onSelectTag:(id)arg1;
- (void)onSelectShowAllTag;
- (void)onCancelTagSelect;
- (void)onGetDesignerEmojiListFailedWithBannerSetId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithTagId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithKeyword:(id)arg1;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailed;
- (void)onGetDesignerEmojiListSuccessedWithBannerSetId:(unsigned int)arg1 DesignerEmojiList:(id)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListSuccessedWithTagId:(unsigned int)arg1 DesignerEmojiList:(id)arg2 hasMore:(_Bool)arg3;
- (void)onGetDesignerEmojiListSuccessedWithKeyword:(id)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(_Bool)arg4;
- (void)onGetDesignerEmojiListSuccessedWithTags:(id)arg1 DesignerEmojiList:(id)arg2 hasMore:(_Bool)arg3;
- (void)onClickTagIcon;
- (void)onOperate:(id)arg1;
- (void)onClose;
- (_Bool)hasHeadImgToShow;
- (double)bannerSetDescHeight;
- (double)bannerSetTitleHeight;
- (double)bannerSetHeaderHeight;
- (double)bannerSetTitleOffsetY;
- (double)HeadImgHeight;
- (void)reportExpose;
- (_Bool)isInSearchMode;
- (_Bool)isInTagMode;
- (void)configShareEntrance;
- (void)configTagsEntrance;
- (void)updateCollectionLayout:(id)arg1;
- (void)configCollectionView;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithBannerSet:(id)arg1;
- (id)initWithEmojiTag:(id)arg1;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (id)initWithKeyword:(id)arg1 searchId:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

