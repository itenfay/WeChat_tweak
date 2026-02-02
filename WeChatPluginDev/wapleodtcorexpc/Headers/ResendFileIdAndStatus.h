//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ResendFileIdAndStatus : NSObject
{
    unsigned int _fileStatus;
    unsigned int _isThumb;
    int _dataType;
    NSString *_fileId;
    NSString *_localDataId;
    NSString *_md5;
    NSString *_dataFmt;
    NSString *_clientMsgId;
    NSString *_fileUrl;
    NSString *_fileAesKey;
    NSString *_streamId;
    NSString *_filePath;
}

+ (void)initialize;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_streamId;
+ (void)PBArrayAdd_fileAesKey;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_clientMsgId;
+ (void)PBArrayAdd_dataFmt;
+ (void)PBArrayAdd_dataType;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isThumb;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_fileStatus;
+ (void)PBArrayAdd_fileId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *fileAesKey; // @synthesize fileAesKey=_fileAesKey;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *localDataId; // @synthesize localDataId=_localDataId;
@property(nonatomic) unsigned int fileStatus; // @synthesize fileStatus=_fileStatus;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

