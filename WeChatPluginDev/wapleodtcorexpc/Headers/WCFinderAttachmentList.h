//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderAttachmentListAttachmentsMutableArray;

@interface WCFinderAttachmentList : NSObject
{
    NSString *_tid;
    unsigned long long _cacheTime;
    WCFinderAttachmentListAttachmentsMutableArray *_attachments;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_attachments;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)attachments;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_attachments;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAttachmentListAttachmentsMutableArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)removeFinderAttachmentWithBusinessType:(int)arg1;
- (id)fetchAttachementWithBusinesssType:(int)arg1;
- (_Bool)clearJumpInfoAttachment:(int)arg1;
- (id)getJumpInfoAttachment:(int)arg1;
- (_Bool)clearMiniAppShopAttachment;
- (id)getMiniAppShopAttachment;
- (_Bool)removeLongVideoAttachment;
- (id)getLongVideoAttachment;
- (void)updateLongVideoAttachmentWith:(id)arg1;
- (id)genAttachmentList;
@property(readonly, copy) NSString *description;
- (id)initWithDataItemTid:(id)arg1 attachments:(id)arg2;
- (id)initWithDataItemTid:(id)arg1 finderAttachmentList:(id)arg2;
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

