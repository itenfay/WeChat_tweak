//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSIndexPath, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor;
@protocol WCEditSelectedCollectionViewDelegate;

@interface WCEditSelectedCollectionView : UIView
{
    NSMutableArray *_assets;
    id <WCEditSelectedCollectionViewDelegate> _delegate;
    UIColor *_cellBorderLineColor;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    long long _currentSelectedIndex;
    NSIndexPath *_oldIndexPath;
    UIView *_snapedView;
}

+ (struct CGSize)editSelectCollectionViewDefaultSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *snapedView; // @synthesize snapedView=_snapedView;
@property(retain, nonatomic) NSIndexPath *oldIndexPath; // @synthesize oldIndexPath=_oldIndexPath;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIColor *cellBorderLineColor; // @synthesize cellBorderLineColor=_cellBorderLineColor;
@property(nonatomic) __weak id <WCEditSelectedCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handlelongGesture:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)customSetHeight:(double)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

