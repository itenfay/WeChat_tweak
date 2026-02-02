//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicInfo, NSData, NSString;

@interface MusicHistoryItem : NSObject
{
    NSString *_itemId;
    NSData *_musicInfoData;
    double _updateTimeStamp;
    MMMusicInfo *_musicInfo;
}

+ (id)generateItemIdFromMusicInfo:(id)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_updateTimeStamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)updateTimeStamp;
+ (id)swift_musicInfoData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)musicInfoData;
+ (id)swift_itemId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)itemId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) double updateTimeStamp; // @synthesize updateTimeStamp=_updateTimeStamp;
@property(retain, nonatomic) NSData *musicInfoData; // @synthesize musicInfoData=_musicInfoData;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (id)initWithMusicInfo:(id)arg1;

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

