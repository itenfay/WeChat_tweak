//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView;
@protocol WCFinderPreviewFeedHorizontallyViewDelegate;

@interface WCFinderPreviewFeedHorizontallyView : UIView
{
    _Bool _scrollEnabled;
    id <WCFinderPreviewFeedHorizontallyViewDelegate> _delegate;
    UICollectionView *_collectionView;
    long long _maxCardNumInScreen;
    NSArray *_dataSource;
}

+ (double)feedCardWidthWithScreenWid:(double)arg1 maxCardNumInScreen:(long long)arg2;
+ (double)feedCardHeightWithScreenWid:(double)arg1 maxCardNumInScreen:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long maxCardNumInScreen; // @synthesize maxCardNumInScreen=_maxCardNumInScreen;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderPreviewFeedHorizontallyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateWithDataSource:(id)arg1;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 maxCardNumInScreen:(long long)arg2 scrollEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

