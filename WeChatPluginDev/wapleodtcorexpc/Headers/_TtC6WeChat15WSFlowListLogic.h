//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSString, WCFinderFeedContentVM;

@interface _TtC6WeChat15WSFlowListLogic : NSObject
{
    MISSING_TYPE *listData;
    MISSING_TYPE *lastBuffer;
    MISSING_TYPE *isFetching;
    MISSING_TYPE *topHasMore;
    MISSING_TYPE *bottomHasMore;
    MISSING_TYPE *enterExportId;
    MISSING_TYPE *enterFinderContentVM;
    MISSING_TYPE *identifierSet;
}

- (void).cxx_destruct;
- (id)init;
- (void)getMockDataList;
- (_Bool)shouldUseEnterFinderItem;
- (void)fetchEnterFinderItemIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestDataWithCurrentListData:(id)arg1 direction:(unsigned int)arg2 scene:(unsigned int)arg3 enterItemId:(id)arg4 extInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property(nonatomic, retain) WCFinderFeedContentVM *enterFinderContentVM; // @synthesize enterFinderContentVM;
@property(nonatomic, copy) NSString *enterExportId;
@property(nonatomic) _Bool bottomHasMore; // @synthesize bottomHasMore;
@property(nonatomic) _Bool topHasMore; // @synthesize topHasMore;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching;
@property(nonatomic, copy) NSData *lastBuffer;
@property(nonatomic, copy) NSArray *listData;

@end

