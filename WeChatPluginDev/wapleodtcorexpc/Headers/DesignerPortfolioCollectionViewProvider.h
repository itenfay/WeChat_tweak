//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLoadMoreCollectionView, NSMutableArray, NSString, UICollectionView, UICollectionViewLayout, UIView;
@protocol DesignerPortfolioCollectionViewProviderDelegate;

@interface DesignerPortfolioCollectionViewProvider : NSObject
{
    _Bool _isDisablingLoadMore;
    _Bool _didReport;
    unsigned int _designerUin;
    NSMutableArray *_emotionsList;
    id <DesignerPortfolioCollectionViewProviderDelegate> _delegate;
    UICollectionViewLayout *_layout;
    MMLoadMoreCollectionView *_collectionView;
    UIView *_footerView;
    NSString *_enterTimeStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *enterTimeStr; // @synthesize enterTimeStr=_enterTimeStr;
@property(nonatomic) _Bool didReport; // @synthesize didReport=_didReport;
@property(nonatomic) _Bool isDisablingLoadMore; // @synthesize isDisablingLoadMore=_isDisablingLoadMore;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(nonatomic) __weak id <DesignerPortfolioCollectionViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *emotionsList; // @synthesize emotionsList=_emotionsList;
- (void)OnOpenDetailViewForItem:(id)arg1;
- (void)OnOpenEmojiHalfScreen:(id)arg1;
- (void)OnRewardStoreItem:(id)arg1;
- (void)onLoadDone;
- (void)onLoadMore;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onFetchPackFailed;
- (void)onFetchPackFinished;
- (void)removeExpiredEmoticonPackIfNeeded;
- (void)performGetDesignerCGI;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didClickEmotionItem:(id)arg1 withDelegate:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)setCollectionLayout:(id)arg1;
- (void)initView;
@property(readonly, nonatomic) UICollectionView *displayView;
- (unsigned char)shouldUseRichStyle;
- (void)dealloc;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (id)initWithDesignerUin:(unsigned int)arg1 andLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

