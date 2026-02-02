//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, MMUIViewController, NSArray, NSString, StoreEmoticonTopicProxyLogic, StoreEmotionHomePageLogic, UICollectionView, UICollectionViewFlowLayout;

@interface StoreEmotionHomePageViewController
{
    _Bool _hitExpt;
    unsigned int _scene;
    unsigned long long _searchScene;
    MMUIViewController *_contentViewController;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    StoreEmotionHomePageLogic *_homePageLogic;
    NSArray *_recordList;
    EmojiInfoObj *_operatingEmojiInfoObj;
    long long _operatingEmojiScene;
    unsigned long long _sessionId;
    StoreEmoticonTopicProxyLogic *_topicVCPorxy;
    NSString *_reqId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(retain, nonatomic) StoreEmoticonTopicProxyLogic *topicVCPorxy; // @synthesize topicVCPorxy=_topicVCPorxy;
@property(nonatomic) _Bool hitExpt; // @synthesize hitExpt=_hitExpt;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long operatingEmojiScene; // @synthesize operatingEmojiScene=_operatingEmojiScene;
@property(retain, nonatomic) EmojiInfoObj *operatingEmojiInfoObj; // @synthesize operatingEmojiInfoObj=_operatingEmojiInfoObj;
@property(retain, nonatomic) NSArray *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) StoreEmotionHomePageLogic *homePageLogic; // @synthesize homePageLogic=_homePageLogic;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak MMUIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (void)onStoreEmotionAllCellTapButton:(id)arg1;
- (void)reportEmojiCollectionExposeWithRecommendInfo:(id)arg1 entrance:(long long)arg2;
- (void)reportStoreEmotionAndEmojiExpose;
- (void)jumpToBannerSet:(id)arg1 entrance:(long long)arg2;
- (double)contentWidth;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)clearSearchDisplayController;
- (void)initData;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEmotionScene:(unsigned int)arg1 AndParentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

