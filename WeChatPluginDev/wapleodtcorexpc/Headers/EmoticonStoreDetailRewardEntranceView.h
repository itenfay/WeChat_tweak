//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, RichTextView, UIButton, UICollectionView, UILabel;
@protocol EmotionStoreDetailRewardEntranceDelegate;

@interface EmoticonStoreDetailRewardEntranceView
{
    UILabel *m_begWordLabel;
    UIButton *m_redRewardBtn;
    RichTextView *m_donorsCountLabel;
    UICollectionView *m_donorsView;
    NSArray *m_donors;
    id <EmotionStoreDetailRewardEntranceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmotionStoreDetailRewardEntranceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onRewardButtonClick;
- (double)updateViewWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

