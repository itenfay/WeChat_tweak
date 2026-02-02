//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCollectionInfo, NSString, WCFinderFeedArray, WCFinderShareFeedDataProvider;

@interface WCFinderSearchSmartCollectionListProvider : NSObject
{
    _Bool _hasMoreCollectionTop;
    _Bool _hasMoreCollectionBottom;
    _Bool _filterCollectionId;
    NSString *_traceTag;
    WCFinderShareFeedDataProvider *_dataProvider;
    FinderCollectionInfo *_collectionInfo;
    WCFinderFeedArray *_feedArray;
    CDUnknownBlockType _feedMapper;
}

+ (id)newListProvider:(id)arg1 contentVM:(id)arg2 feedMapper:(CDUnknownBlockType)arg3;
+ (id)inlineProvider:(id)arg1 contentVM:(id)arg2 feedMapper:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool filterCollectionId; // @synthesize filterCollectionId=_filterCollectionId;
@property(copy, nonatomic) CDUnknownBlockType feedMapper; // @synthesize feedMapper=_feedMapper;
@property(nonatomic) _Bool hasMoreCollectionBottom; // @synthesize hasMoreCollectionBottom=_hasMoreCollectionBottom;
@property(nonatomic) _Bool hasMoreCollectionTop; // @synthesize hasMoreCollectionTop=_hasMoreCollectionTop;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) FinderCollectionInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(retain, nonatomic) WCFinderShareFeedDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSString *traceTag; // @synthesize traceTag=_traceTag;
- (unsigned long long)collectionTopicID;
@property(readonly, copy) NSString *description;
- (id)onFilterBottomDataItems:(id)arg1;
- (id)onFilterTopDataItems:(id)arg1;
- (void)onFeedChange:(id)arg1 context:(id)arg2;
- (void)pullFirstPage;
- (void)pullBottom;
- (void)pullTop;
- (_Bool)isPullingFirstPage;
- (_Bool)isPullingBottom;
- (_Bool)isPullingTop;
- (_Bool)hasMoreBottom;
- (_Bool)hasMoreTop;
- (id)initWithDataProvider:(id)arg1 collectionInfo:(id)arg2 feedMapper:(CDUnknownBlockType)arg3 firstPageDatas:(id)arg4 filterCollectionId:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

