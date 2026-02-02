//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreReportInfo, MISSING_TYPE, NSString, PersonalDesigner;

@interface _TtC6WeChat41StoreEmotionDesignerProfileViewController
{
    MISSING_TYPE *reportInfo;
    MISSING_TYPE *closeBlock;
    MISSING_TYPE *addNewPackageBlock;
    MISSING_TYPE *viewDetailBlock;
    MISSING_TYPE *designer;
    MISSING_TYPE *needJmp2SingleEmoji;
    MISSING_TYPE *oldRedirectUrl;
    MISSING_TYPE *extranceScene;
    MISSING_TYPE *designerDesc;
    MISSING_TYPE *bannerUrl;
    MISSING_TYPE *setKey;
    MISSING_TYPE *ipContext;
    MISSING_TYPE *emoticonsList;
    MISSING_TYPE *ipPacks;
    MISSING_TYPE *emojiList;
    MISSING_TYPE *emoticonsListFinishLoad;
    MISSING_TYPE *emojiListFinishLoad;
    MISSING_TYPE *finderInfo;
    MISSING_TYPE *hasLoad;
    MISSING_TYPE *canShowDesignerEmojiEntrance;
    MISSING_TYPE *didPrefetchDesignerEmoji;
    MISSING_TYPE *topicProxy;
    MISSING_TYPE *curPayingRewardStoreItem;
    MISSING_TYPE *curPayingRewardInfo;
    MISSING_TYPE *$__lazy_storage_$_collectionView;
    MISSING_TYPE *collectionLayout;
    MISSING_TYPE *headerView;
    MISSING_TYPE *$__lazy_storage_$_getDesignerCgi;
    MISSING_TYPE *$__lazy_storage_$_getEmojiListCgi;
    MISSING_TYPE *$__lazy_storage_$_getDesignerIPListCgi;
    MISSING_TYPE *$__lazy_storage_$_shareLogic;
    MISSING_TYPE *$__lazy_storage_$_loadingView;
    MISSING_TYPE *$__lazy_storage_$_retryContainer;
    MISSING_TYPE *$__lazy_storage_$_retryTipLabel;
    MISSING_TYPE *$__lazy_storage_$_retryButton;
    MISSING_TYPE *contentCell;
    MISSING_TYPE *$__lazy_storage_$_sessionID;
    MISSING_TYPE *designerReportInfo;
    MISSING_TYPE *headerHeight;
    MISSING_TYPE *lastOffsetY;
    MISSING_TYPE *headerBottomMargin;
    MISSING_TYPE *cellIdentifier;
    MISSING_TYPE *headerIdentifier;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)fadeRightButton;
- (id)normalRightButton;
- (void)registerYReportSdk;
- (void)onDesigner:(id)arg1 changReddotStatus:(_Bool)arg2 newReddotPids:(id)arg3;
- (void)onDesigner:(id)arg1 singlePid:(id)arg2 reddotStatusChange:(_Bool)arg3;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onGetDesginerIPListFailed;
- (void)onGotDesginerIPList:(id)arg1 with:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBackBtnClickWithBtn:(id)arg1;
- (void)onShare;
- (void)onRetryButtonClick;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(_Bool)arg4;
- (void)onGetPersonalDesignerFailed;
- (void)onGotPersonalDesignerResponse:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)navigationBarBackgroundColor;
- (_Bool)showNavigationBarSepLine;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)setWithDesignerUin:(unsigned int)arg1 andOldRedirectUrl:(id)arg2 andDesignerName:(id)arg3;
- (void)setWithPreviewUrl:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (id)initWithExtrance:(long long)arg1 and:(id)arg2;
- (id)initWithExtrance:(long long)arg1;
@property(nonatomic, copy) NSString *oldRedirectUrl;
@property(nonatomic) _Bool needJmp2SingleEmoji; // @synthesize needJmp2SingleEmoji;
@property(nonatomic, retain) PersonalDesigner *designer; // @synthesize designer;
@property(nonatomic, copy) CDUnknownBlockType viewDetailBlock;
@property(nonatomic, copy) CDUnknownBlockType addNewPackageBlock;
@property(nonatomic, copy) CDUnknownBlockType closeBlock;
@property(nonatomic, retain) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo;

@end

