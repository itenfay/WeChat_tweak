//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardCrossCollectionEmoticonHeaderModel, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UILongPressGestureRecognizer;
@protocol EmoticonBoardCrossCollectionIPSetPageDelegate;

@interface EmoticonBoardCrossCollectionIPSetPageCell
{
    _Bool _isReloadingSections;
    id <EmoticonBoardCrossCollectionIPSetPageDelegate> _delegate;
    NSMutableDictionary *_emoticonListDict;
    NSMutableDictionary *_packDownloadStatusDict;
    NSMutableDictionary *_emoticonListCountDict;
    NSMutableArray *_pidList;
    NSMutableArray *_needReloadPids;
    NSArray *_packedIPArray;
    NSIndexPath *_selectedIndexPath;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    EmoticonBoardCrossCollectionEmoticonHeaderModel *_headerViewModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReloadingSections; // @synthesize isReloadingSections=_isReloadingSections;
@property(retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *packedIPArray; // @synthesize packedIPArray=_packedIPArray;
@property(retain, nonatomic) NSMutableArray *needReloadPids; // @synthesize needReloadPids=_needReloadPids;
@property(retain, nonatomic) NSMutableArray *pidList; // @synthesize pidList=_pidList;
@property(retain, nonatomic) NSMutableDictionary *emoticonListCountDict; // @synthesize emoticonListCountDict=_emoticonListCountDict;
@property(retain, nonatomic) NSMutableDictionary *packDownloadStatusDict; // @synthesize packDownloadStatusDict=_packDownloadStatusDict;
@property(retain, nonatomic) NSMutableDictionary *emoticonListDict; // @synthesize emoticonListDict=_emoticonListDict;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionIPSetPageDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onDesignerPersonalInfoUpdated:(id)arg1;
- (void)onDesigner:(id)arg1 changReddotStatus:(_Bool)arg2 newReddotPids:(id)arg3;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 atIndex:(long long)arg2 withGridOffset:(struct CGPoint)arg3 description:(id)arg4 sender:(id)arg5;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 withPid:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onLongPressToPreview:(id)arg1;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (void)doReloadNextPid;
- (void)loopReloadSections;
- (void)tryReloadNextPid;
- (void)reloadSectionForPid:(id)arg1;
- (_Bool)sectionVisibleForPid:(id)arg1;
- (void)reloadHeader;
- (id)genHeadViewModel;
- (_Bool)isPackDownloadedForPid:(id)arg1;
- (_Bool)hasDescForPid:(id)arg1;
- (unsigned long long)emoticonCountForWrap:(id)arg1;
- (id)emoticonListForWrap:(id)arg1;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)setSectionInfo:(id)arg1;
- (void)refreshEmoticonForPid:(id)arg1;
- (void)configGestureRecognizer;
- (id)collectionViewLayout;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

