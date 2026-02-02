//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary;

@interface WCAlbumPickViewModel : NSObject
{
    _Bool _noMoreData;
    NSMutableArray *_timeTable;
    NSMutableDictionary *_timelineMediaData;
    NSMutableArray *_photoMutipleImageArray;
    OrderedDictionary *_selectedMediaItems;
    unsigned long long _maxSelectedImagesCount;
    NSString *_userName;
    long long _homepageType;
    NSMutableDictionary *_isSectionANewYearCache;
    CDUnknownBlockType _selectionChangeBlock;
    CDUnknownBlockType _didSelectedItemBlock;
    CDUnknownBlockType _dataDidChangeBlock;
    CDUnknownBlockType _fetchMoreDataResultBlock;
    CDUnknownBlockType _configFooterViewBlock;
    CDUnknownBlockType _getViewSizeBlock;
    CDUnknownBlockType _scrollViewDidScrollBlock;
    CDUnknownBlockType _getIndexPathBlock;
    CDUnknownBlockType _finishDownloadBlock;
    NSMutableArray *_prepardDownloadMediaInfos;
}

+ (id)viewModelWithUserName:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *prepardDownloadMediaInfos; // @synthesize prepardDownloadMediaInfos=_prepardDownloadMediaInfos;
@property(copy, nonatomic) CDUnknownBlockType finishDownloadBlock; // @synthesize finishDownloadBlock=_finishDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType getIndexPathBlock; // @synthesize getIndexPathBlock=_getIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType getViewSizeBlock; // @synthesize getViewSizeBlock=_getViewSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType configFooterViewBlock; // @synthesize configFooterViewBlock=_configFooterViewBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchMoreDataResultBlock; // @synthesize fetchMoreDataResultBlock=_fetchMoreDataResultBlock;
@property(copy, nonatomic) CDUnknownBlockType dataDidChangeBlock; // @synthesize dataDidChangeBlock=_dataDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectedItemBlock; // @synthesize didSelectedItemBlock=_didSelectedItemBlock;
@property(copy, nonatomic) CDUnknownBlockType selectionChangeBlock; // @synthesize selectionChangeBlock=_selectionChangeBlock;
@property(retain, nonatomic) NSMutableDictionary *isSectionANewYearCache; // @synthesize isSectionANewYearCache=_isSectionANewYearCache;
@property(nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic, getter=hasNoMoreData) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic) unsigned long long maxSelectedImagesCount; // @synthesize maxSelectedImagesCount=_maxSelectedImagesCount;
@property(retain, nonatomic) OrderedDictionary *selectedMediaItems; // @synthesize selectedMediaItems=_selectedMediaItems;
@property(retain, nonatomic) NSMutableArray *photoMutipleImageArray; // @synthesize photoMutipleImageArray=_photoMutipleImageArray;
@property(retain, nonatomic) NSMutableDictionary *timelineMediaData; // @synthesize timelineMediaData=_timelineMediaData;
@property(retain, nonatomic) NSMutableArray *timeTable; // @synthesize timeTable=_timeTable;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (_Bool)hasSelectVideoAsset;
- (_Bool)hasSelectImageAsset;
- (_Bool)isPhotoMedia:(id)arg1;
- (id)findParentFeed:(id)arg1;
- (void)pickMedia:(id)arg1;
- (id)mediaOfIndexPath:(id)arg1;
- (void)handleItemPicked:(id)arg1;
- (void)onToggleSelection:(id)arg1;
- (_Bool)isMediaSelectable:(id)arg1;
- (void)onRemoveSelectedInfo:(id)arg1;
- (unsigned int)getSelectedCount;
- (long long)indexInSelectedMedia:(id)arg1;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isANewYearSection:(unsigned long long)arg1;
- (void)downloadMediaList:(id)arg1;
- (id)checkSelectedMediaDownload;
- (id)getSelectedMediaContent;
- (id)getSelectedMediaDownloadLocalPath;
- (long long)getSelectedMediaType;
- (void)handleData:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (void)registerExtension;
- (void)setDidSelectdItemBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUserName:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

