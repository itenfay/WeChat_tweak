//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIImage, WCEditFilterHeaderView, XEffectEffectManager;
@protocol WCEditFilterToolAttrViewDelegate;

@interface WCEditFilterToolAttrView
{
    _Bool _didChangeFilter;
    UIImage *_originalImage;
    long long _filterIndex;
    long long _filterValue;
    id <WCEditFilterToolAttrViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCEditFilterHeaderView *_headerView;
    unsigned long long _filterCount;
    XEffectEffectManager *_effectManager;
    NSIndexPath *_selectedIndexPath;
    NSMutableArray *_filterValueArray;
    NSMutableArray *_filterCellImageArray;
    NSArray *_filterNameArray;
    NSMutableDictionary *_filterDisplayImageDic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didChangeFilter; // @synthesize didChangeFilter=_didChangeFilter;
@property(retain, nonatomic) NSMutableDictionary *filterDisplayImageDic; // @synthesize filterDisplayImageDic=_filterDisplayImageDic;
@property(retain, nonatomic) NSArray *filterNameArray; // @synthesize filterNameArray=_filterNameArray;
@property(retain, nonatomic) NSMutableArray *filterCellImageArray; // @synthesize filterCellImageArray=_filterCellImageArray;
@property(retain, nonatomic) NSMutableArray *filterValueArray; // @synthesize filterValueArray=_filterValueArray;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) XEffectEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) unsigned long long filterCount; // @synthesize filterCount=_filterCount;
@property(retain, nonatomic) WCEditFilterHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCEditFilterToolAttrViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long filterValue; // @synthesize filterValue=_filterValue;
@property(nonatomic) long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void)sliderValueDidChange:(int)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)imageWithImage:(id)arg1 scaledToFillSize:(struct CGSize)arg2;
- (void)reloadCollectionView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

