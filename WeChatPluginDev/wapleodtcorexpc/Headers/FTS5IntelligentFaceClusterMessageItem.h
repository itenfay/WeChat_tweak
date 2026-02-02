//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5IntelligentFaceClusterMessageItem : NSObject
{
    unsigned int _userNameId;
    unsigned int _msgLocalId;
    float _zScore;
    long long _faceLabelId;
    NSString *_faceRectStr;
    NSString *_mediaFilePath;
    NSString *_userName;
}

+ (void)__wcdb_index_170:(void *)arg1;
+ (void)__wcdb_index_169:(void *)arg1;
+ (void)__wcdb_index_168:(void *)arg1;
+ (id)swift_mediaFilePath;
+ (const void *)__wcdb_synthesize_167:(void *)arg1;
+ (const void *)mediaFilePath;
+ (id)swift_faceRectStr;
+ (const void *)__wcdb_synthesize_166:(void *)arg1;
+ (const void *)faceRectStr;
+ (id)swift_zScore;
+ (const void *)__wcdb_synthesize_165:(void *)arg1;
+ (const void *)zScore;
+ (id)swift_faceLabelId;
+ (const void *)__wcdb_synthesize_164:(void *)arg1;
+ (const void *)faceLabelId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_163:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_162:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *mediaFilePath; // @synthesize mediaFilePath=_mediaFilePath;
@property(retain, nonatomic) NSString *faceRectStr; // @synthesize faceRectStr=_faceRectStr;
@property(nonatomic) float zScore; // @synthesize zScore=_zScore;
@property(nonatomic) long long faceLabelId; // @synthesize faceLabelId=_faceLabelId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId=_userNameId;

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

