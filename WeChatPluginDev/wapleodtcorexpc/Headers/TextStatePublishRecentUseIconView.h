//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUILabel, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer;
@protocol TextStatePublishRecentUseIconViewDelegate;

@interface TextStatePublishRecentUseIconView : UIView
{
    id <TextStatePublishRecentUseIconViewDelegate> _delegate;
    MMUILabel *_titleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    CAGradientLayer *_gradientMaskLayer;
    UILongPressGestureRecognizer *_itemLongPressGesture;
    NSMutableArray *_privateRecentUseIconList;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *privateRecentUseIconList; // @synthesize privateRecentUseIconList=_privateRecentUseIconList;
@property(retain, nonatomic) UILongPressGestureRecognizer *itemLongPressGesture; // @synthesize itemLongPressGesture=_itemLongPressGesture;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TextStatePublishRecentUseIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)setBounces:(_Bool)arg1;
- (id)recentUseIconList;
- (void)setRecentUseIconList:(id)arg1;
- (void)initGesture;
- (void)layoutSubviews;
- (void)initLayout;
- (void)updateGradientLayer;
- (void)initGradientLayer;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

