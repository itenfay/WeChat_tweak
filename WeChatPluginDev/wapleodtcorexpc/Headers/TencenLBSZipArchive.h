//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSFileManager, NSString;
@protocol ZipArchiveDelegate;

@interface TencenLBSZipArchive : NSObject
{
    void *_zipFile;
    void *_unzFile;
    unsigned long long _numFiles;
    NSString *_password;
    id _delegate;
    CDUnknownBlockType _progressBlock;
    NSArray *_unzippedFiles;
    NSFileManager *_fileManager;
    unsigned long long _stringEncoding;
    long long _compression;
}

@property(nonatomic) long long compression; // @synthesize compression=_compression;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSArray *unzippedFiles; // @synthesize unzippedFiles=_unzippedFiles;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) unsigned long long numFiles; // @synthesize numFiles=_numFiles;
@property(retain, nonatomic) id <ZipArchiveDelegate> delegate; // @synthesize delegate=_delegate;
- (id)Date1980;
- (_Bool)OverWrite:(id)arg1;
- (void)OutputErrorMessage:(id)arg1;
- (id)getZipFileContents;
- (_Bool)UnzipCloseFile;
- (id)UnzipFileToMemory;
- (_Bool)UnzipFileTo:(id)arg1 overWrite:(_Bool)arg2;
- (_Bool)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (_Bool)UnzipOpenFile:(id)arg1;
- (_Bool)CloseZipFile2;
- (_Bool)addDataToZip:(id)arg1 fileAttributes:(id)arg2 newname:(id)arg3;
- (_Bool)addFileToZip:(id)arg1 newname:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1 Password:(id)arg2 append:(_Bool)arg3;
- (_Bool)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1 append:(_Bool)arg2;
- (_Bool)CreateZipFile2:(id)arg1;
- (void)dealloc;
- (id)initWithFileManager:(id)arg1;
- (id)init;

@end

