//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol WCStoryPreviewContactIndicatorViewDataSource, WCStoryPreviewContactIndicatorViewDelegate;

@interface WCStoryPreviewContactIndicatorView : UIView
{
    UICollectionViewFlowLayout *m_collectionLayout;
    UICollectionView *m_collectionView;
    CAGradientLayer *m_gradientLayer;
    id <WCStoryPreviewContactIndicatorViewDataSource> _dataSource;
    id <WCStoryPreviewContactIndicatorViewDelegate> _delegate;
    double _gradientMaskHeight;
}

+ (double)heightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) double gradientMaskHeight; // @synthesize gradientMaskHeight=_gradientMaskHeight;
@property(nonatomic) __weak id <WCStoryPreviewContactIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCStoryPreviewContactIndicatorViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateOffset:(double)arg1;
- (void)configCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

