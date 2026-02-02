//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase;

@interface WCHardlinkFileInfoDB : NSObject
{
    WCTDatabase *_fileInfoDB;
    NSString *_fileDBPath;
}

+ (id)getFileInfoDBPath;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fileDBPath; // @synthesize fileDBPath=_fileDBPath;
@property(retain, nonatomic) WCTDatabase *fileInfoDB; // @synthesize fileInfoDB=_fileInfoDB;
- (id)p_getFileInfoTable;
- (id)getAllHardLinkInfoWithMD5:(id)arg1;
- (void)deleteHardLinkInfoWithMD5:(id)arg1;
- (_Bool)deleteAllSingleMD5;
- (_Bool)isFileInfoEmpty;
- (id)getAllFileMD5;
- (id)getAllFileInfo;
- (id)getFileInfoOfInode:(unsigned long long)arg1;
- (void)deleteFileInfoWithInode:(unsigned long long)arg1;
- (_Bool)insertFileInfo:(id)arg1;
- (void)checkpoint;
- (void)removeDB;
- (void)closeDB;
- (id)init;

@end

