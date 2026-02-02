//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView, UIPageControl;

@interface WNMultiImagesCollectionView : UIView
{
    double m_width;
    NSArray *_viewSource;
    UIPageControl *_pageCtrl;
    unsigned long long _currentPage;
    UICollectionView *_imageCollectionView;
}

+ (id)viewDataSource:(id)arg1 width:(double)arg2 currentSelectIndex:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *imageCollectionView; // @synthesize imageCollectionView=_imageCollectionView;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) NSArray *viewSource; // @synthesize viewSource=_viewSource;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)changeViewDataSource:(id)arg1 currentSelectIndex:(unsigned long long)arg2;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1 andViewDataSouce:(id)arg2 currentSelectIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

