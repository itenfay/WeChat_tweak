//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GC23070Report, NSIndexPath, UICollectionViewCell;
@protocol GCBaseCellModelDelegate;

@interface GCBaseCellModel : NSObject
{
    _Bool _hasCallLayoutBefore;
    _Bool _reported;
    UICollectionViewCell *_gcBindCell;
    id <GCBaseCellModelDelegate> _cellModelDelegate;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _didSelectBlock;
    CDUnknownBlockType _willDisplayBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType willDisplayBlock; // @synthesize willDisplayBlock=_willDisplayBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(nonatomic) _Bool hasCallLayoutBefore; // @synthesize hasCallLayoutBefore=_hasCallLayoutBefore;
@property(nonatomic) __weak id <GCBaseCellModelDelegate> cellModelDelegate; // @synthesize cellModelDelegate=_cellModelDelegate;
@property(nonatomic) __weak UICollectionViewCell *gcBindCell; // @synthesize gcBindCell=_gcBindCell;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)clearCachedLayoutInfo;
- (void)reconfigCellWithoutInvalidateLayout;
- (void)reconfigCell;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (double)fitCollectionViewWidth:(id)arg1;
- (void)calculateLayoutIfNeed;
- (Class)bindCellClass;
- (id)cellReuseIdentifier;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)callCellConfigIfBaseCell;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onGetBindReport:(id)arg1;
- (void)configureReportModel:(id)arg1;
- (void)setDataReportWithKey:(id)arg1 uniqueId:(id)arg2 configBlock:(CDUnknownBlockType)arg3;
- (void)setExplosureDataReportWithKey:(id)arg1 uniqueId:(id)arg2 configBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) GC23070Report *bindExplosureReport;
@property(retain, nonatomic) GC23070Report *bindReport;

@end

