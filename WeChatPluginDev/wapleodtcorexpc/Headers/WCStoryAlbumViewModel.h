//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCMomentsPageContext;
@protocol OS_dispatch_queue;

@interface WCStoryAlbumViewModel : NSObject
{
    _Bool _noMoreData;
    NSMutableArray *_timeTable;
    NSMutableDictionary *_timelineMediaData;
    NSMutableArray *_photoMutipleImageArray;
    WCMomentsPageContext *_pageContext;
    NSString *_userName;
    long long _homepageType;
    NSMutableSet *_tidSet;
    NSMutableDictionary *_isSectionANewYearCache;
    CDUnknownBlockType _didSelectedItemBlock;
    CDUnknownBlockType _dataDidChangeBlock;
    CDUnknownBlockType _fetchMoreDataResultBlock;
    CDUnknownBlockType _configFooterViewBlock;
    CDUnknownBlockType _getViewSizeBlock;
    CDUnknownBlockType _scrollViewDidScrollBlock;
    CDUnknownBlockType _EntranceCellClickBlock;
    NSObject<OS_dispatch_queue> *_handleDataQueue;
}

+ (id)viewModelWithUserName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleDataQueue; // @synthesize handleDataQueue=_handleDataQueue;
@property(copy, nonatomic) CDUnknownBlockType EntranceCellClickBlock; // @synthesize EntranceCellClickBlock=_EntranceCellClickBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType getViewSizeBlock; // @synthesize getViewSizeBlock=_getViewSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType configFooterViewBlock; // @synthesize configFooterViewBlock=_configFooterViewBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchMoreDataResultBlock; // @synthesize fetchMoreDataResultBlock=_fetchMoreDataResultBlock;
@property(copy, nonatomic) CDUnknownBlockType dataDidChangeBlock; // @synthesize dataDidChangeBlock=_dataDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectedItemBlock; // @synthesize didSelectedItemBlock=_didSelectedItemBlock;
@property(retain, nonatomic) NSMutableDictionary *isSectionANewYearCache; // @synthesize isSectionANewYearCache=_isSectionANewYearCache;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
@property(nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic, getter=hasNoMoreData) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(retain, nonatomic) NSMutableArray *photoMutipleImageArray; // @synthesize photoMutipleImageArray=_photoMutipleImageArray;
@property(retain, nonatomic) NSMutableDictionary *timelineMediaData; // @synthesize timelineMediaData=_timelineMediaData;
@property(retain, nonatomic) NSMutableArray *timeTable; // @synthesize timeTable=_timeTable;
- (void)onEntranceCellClick;
- (void)onTogetherBadgesChanged;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isANewYearSection:(unsigned long long)arg1;
- (void)handleData:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

