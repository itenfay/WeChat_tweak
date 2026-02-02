//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveBoxId, NSMutableArray, NSMutableDictionary, NSString, UICollectionView;
@protocol MMFinderLiveQuickReplyViewDelegate;

@interface MMFinderLiveQuickReplyView : UIView
{
    _Bool _isPerformingBatchUpdate;
    _Bool _reloadAfterBatchUpdate;
    id <MMFinderLiveQuickReplyViewDelegate> _delegate;
    FinderLiveBoxId *_currentBoxId;
    UICollectionView *_mainCollectionView;
    NSMutableArray *_modelArray;
    NSMutableDictionary *_sendMsgDictionary;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reloadAfterBatchUpdate; // @synthesize reloadAfterBatchUpdate=_reloadAfterBatchUpdate;
@property(nonatomic) _Bool isPerformingBatchUpdate; // @synthesize isPerformingBatchUpdate=_isPerformingBatchUpdate;
@property(retain, nonatomic) NSMutableDictionary *sendMsgDictionary; // @synthesize sendMsgDictionary=_sendMsgDictionary;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) FinderLiveBoxId *currentBoxId; // @synthesize currentBoxId=_currentBoxId;
@property(nonatomic) __weak id <MMFinderLiveQuickReplyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (double)getUserStaySecond:(id)arg1;
- (_Bool)judgeOverTime:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)isDisplayingPaidFloatMsg;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)reportQuickReplyWithModel:(id)arg1 indexPath:(id)arg2 actionType:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onVisibilityChanged:(_Bool)arg1;
- (void)updateQuickReplySendTime;
- (void)autoScrollToIndex:(id)arg1;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

