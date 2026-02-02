//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderMegaVideoBulletCommentMutableArray;

@interface WCFinderMegaVideoBulletComment : NSObject
{
    NSString *_videoId;
    unsigned long long _cacheTime;
    WCFinderMegaVideoBulletCommentMutableArray *_comments;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_comments;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)comments;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_videoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)videoId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_comments;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMegaVideoBulletCommentMutableArray *comments; // @synthesize comments=_comments;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, copy) NSString *description;
- (id)initWithVideoId:(id)arg1 commentList:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

