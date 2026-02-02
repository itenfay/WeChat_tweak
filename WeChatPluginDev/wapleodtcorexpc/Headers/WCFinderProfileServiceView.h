//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView, UIColor;
@protocol WCFinderProfileServiceViewDelegate;

@interface WCFinderProfileServiceView : UIView
{
    id <WCFinderProfileServiceViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UIColor *_privateThemeColor;
    NSArray *_jumpInfos;
    long long _columnCount;
    struct CGSize _lastTestSize;
    struct CGSize _lastSizeThatFitSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastSizeThatFitSize; // @synthesize lastSizeThatFitSize=_lastSizeThatFitSize;
@property(nonatomic) struct CGSize lastTestSize; // @synthesize lastTestSize=_lastTestSize;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) NSArray *jumpInfos; // @synthesize jumpInfos=_jumpInfos;
@property(retain, nonatomic) UIColor *privateThemeColor; // @synthesize privateThemeColor=_privateThemeColor;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderProfileServiceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) UIColor *themeColor;
- (void)updateWithJumpInfos:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

