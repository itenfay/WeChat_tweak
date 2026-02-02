//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView, WCFinderLiveTagListCollectionViewConfig, WCFinderLiveTagListItem;
@protocol WCFinderLiveTagListCollectionViewDelegate;

@interface WCFinderLiveTagListCollectionView : UIView
{
    id <WCFinderLiveTagListCollectionViewDelegate> _delegate;
    NSArray *_items;
    WCFinderLiveTagListItem *_initialSelectItem;
    WCFinderLiveTagListCollectionViewConfig *_config;
    UICollectionView *_tagCollectionView;
    long long _lastSelectItemId;
}

+ (struct CGSize)cellHeightConfig:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long lastSelectItemId; // @synthesize lastSelectItemId=_lastSelectItemId;
@property(retain, nonatomic) UICollectionView *tagCollectionView; // @synthesize tagCollectionView=_tagCollectionView;
@property(retain, nonatomic) WCFinderLiveTagListCollectionViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCFinderLiveTagListItem *initialSelectItem; // @synthesize initialSelectItem=_initialSelectItem;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <WCFinderLiveTagListCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)initCollectionView;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

