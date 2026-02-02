//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContactPreviewData, WCFinderFeedInfoSubTidArray;

@interface WCFinderWechatContactExtDatas : NSObject
{
    _Bool _likedFeedListHasNoData;
    NSString *_name;
    WCFinderContactPreviewData *_previewData;
    WCFinderFeedInfoSubTidArray *_likedFeedTidList;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_likedFeedListHasNoData;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)likedFeedListHasNoData;
+ (id)swift_likedFeedTidList;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)likedFeedTidList;
+ (id)swift_previewData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)previewData;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)name;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool likedFeedListHasNoData; // @synthesize likedFeedListHasNoData=_likedFeedListHasNoData;
@property(retain, nonatomic) WCFinderFeedInfoSubTidArray *likedFeedTidList; // @synthesize likedFeedTidList=_likedFeedTidList;
@property(retain, nonatomic) WCFinderContactPreviewData *previewData; // @synthesize previewData=_previewData;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)ensurePreivewDataExistsThenUpdate:(CDUnknownBlockType)arg1;
- (void)updateLikedFeedTidList:(id)arg1;
- (id)getLikedFeedTidList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

