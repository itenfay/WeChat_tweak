//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact, WCFinderMegaVideoAttach, WCMegaVideo;

@interface WCFinderMegaVideo : NSObject
{
    WCMegaVideo *_video;
    WCFinderContact *_contact;
    NSString *_videoId;
    NSString *_username;
    NSString *_videoNonceId;
    unsigned long long _cacheTime;
    WCFinderMegaVideoAttach *_attach;
}

+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_videoNonceId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)videoNonceId;
+ (id)swift_video;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)video;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)username;
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
+ (void)PBArrayAdd_videoNonceId;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMegaVideoAttach *attach; // @synthesize attach=_attach;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCMegaVideo *video; // @synthesize video=_video;
@property(readonly, copy) NSString *description;
- (id)nickName;
- (id)headURLString;
- (_Bool)isMine;
- (id)shortNonceId;
- (id)shortVideoId;
- (id)userName;
- (id)initWithFinderMegaVideo:(id)arg1;
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

