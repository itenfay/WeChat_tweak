//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableSet, NSString, SimpleMsgInfo, UICollectionView;
@protocol MsgImgPickerSelectedCollectionViewDelegate;

@interface MsgImgPickerSelectedCollectionView
{
    id <MsgImgPickerSelectedCollectionViewDelegate> _delegate;
    NSMutableArray *_previewMsgInfos;
    UICollectionView *_collectionView;
    SimpleMsgInfo *_selectedMsgInfo;
    NSMutableSet *_disabledMsgInfo;
}

+ (double)getCollectionViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *disabledMsgInfo; // @synthesize disabledMsgInfo=_disabledMsgInfo;
@property(retain, nonatomic) SimpleMsgInfo *selectedMsgInfo; // @synthesize selectedMsgInfo=_selectedMsgInfo;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *previewMsgInfos; // @synthesize previewMsgInfos=_previewMsgInfos;
@property(nonatomic) __weak id <MsgImgPickerSelectedCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlelongGesture:(id)arg1;
- (void)toggleSelectMsgInfo:(id)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)insertItemAtIndex:(unsigned long long)arg1;
- (id)indexPathForMsgInfo:(id)arg1;
- (void)changeToMsgInfo:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadDataView;
- (void)layoutSubviews;
- (void)initCollectionView;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

