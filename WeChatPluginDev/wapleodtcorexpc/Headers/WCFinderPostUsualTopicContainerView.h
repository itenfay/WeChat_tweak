//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView, WCFinderUpdateTopicModel;
@protocol WCFinderPostUsualTopicContainerViewDelegate;

@interface WCFinderPostUsualTopicContainerView : UIView
{
    id <WCFinderPostUsualTopicContainerViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_dataSource;
    WCFinderUpdateTopicModel *_inputTextTopicModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUpdateTopicModel *inputTextTopicModel; // @synthesize inputTextTopicModel=_inputTextTopicModel;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderPostUsualTopicContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)clearRecommendTopic;
- (_Bool)updateWithRecommendTopicArray:(id)arg1 inputTextTopicModel:(id)arg2;
- (void)initCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

