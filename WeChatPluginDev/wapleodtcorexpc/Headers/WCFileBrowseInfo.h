//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavDataItemWrap, NSData, NSString;

@interface WCFileBrowseInfo : NSObject
{
    _Bool _bUserOpen;
    unsigned int _msgLocalID;
    unsigned int _favID;
    unsigned int _favMsgLocalID;
    unsigned int _typeDownloaded;
    NSString *_desTitle;
    NSString *_fromUserName;
    NSString *_fromUserNickName;
    NSString *_fromChatName;
    NSString *_fromChatNickName;
    NSString *_timeString;
    unsigned long long _msgWrapSvrID;
    unsigned long long _fileTime;
    unsigned long long _fileSize;
    NSString *_fileExt;
    NSString *_fileMD5;
    unsigned long long _enumDataType;
    FavDataItemWrap *_favDataItemWrap;
    NSString *_fileName;
    NSString *_filePath;
    NSData *_fileData;
    NSData *_fileThumb;
}

+ (_Bool)browseInfoIsValid:(id)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (id)swift_bUserOpen;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)bUserOpen;
+ (id)swift_typeDownloaded;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)typeDownloaded;
+ (id)swift_fileMD5;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)fileMD5;
+ (id)swift_msgLocalID;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)msgLocalID;
+ (id)swift_fileExt;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)fileExt;
+ (id)swift_fileSize;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)fileSize;
+ (id)swift_fileTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)fileTime;
+ (id)swift_msgWrapSvrID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)msgWrapSvrID;
+ (id)swift_fromChatName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)fromChatName;
+ (id)swift_fromUserName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)fromUserName;
+ (id)swift_desTitle;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)desTitle;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_bUserOpen;
+ (void)PBArrayAdd_typeDownloaded;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_msgLocalID;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileTime;
+ (void)PBArrayAdd_msgWrapSvrID;
+ (void)PBArrayAdd_fromChatName;
+ (void)PBArrayAdd_fromUserName;
+ (void)PBArrayAdd_desTitle;
- (void).cxx_destruct;
@property(nonatomic) _Bool bUserOpen; // @synthesize bUserOpen=_bUserOpen;
@property(nonatomic) unsigned int typeDownloaded; // @synthesize typeDownloaded=_typeDownloaded;
@property(retain, nonatomic) NSData *fileThumb; // @synthesize fileThumb=_fileThumb;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) FavDataItemWrap *favDataItemWrap; // @synthesize favDataItemWrap=_favDataItemWrap;
@property(nonatomic) unsigned int favMsgLocalID; // @synthesize favMsgLocalID=_favMsgLocalID;
@property(nonatomic) unsigned int favID; // @synthesize favID=_favID;
@property(nonatomic) unsigned long long enumDataType; // @synthesize enumDataType=_enumDataType;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(copy, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long fileTime; // @synthesize fileTime=_fileTime;
@property(nonatomic) unsigned long long msgWrapSvrID; // @synthesize msgWrapSvrID=_msgWrapSvrID;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy, nonatomic) NSString *fromChatNickName; // @synthesize fromChatNickName=_fromChatNickName;
@property(copy, nonatomic) NSString *fromChatName; // @synthesize fromChatName=_fromChatName;
@property(copy, nonatomic) NSString *fromUserNickName; // @synthesize fromUserNickName=_fromUserNickName;
@property(copy, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(copy, nonatomic) NSString *desTitle; // @synthesize desTitle=_desTitle;
- (_Bool)isSameFavFileBrowseInfo:(id)arg1;
- (_Bool)isSameChatLogFileBrowseInfo:(id)arg1;
- (void)trySetFromChatNickName;
- (void)trySetFromUserNickName;
- (_Bool)isMatchedSearchText:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
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

