//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TXCZipArchiveDelegate;

@interface TXCZipArchive : NSObject
{
    void *_zipFile;
    void *_unzFile;
    id <TXCZipArchiveDelegate> _delegate;
    NSString *_password;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) __weak id <TXCZipArchiveDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)overWrite:(id)arg1;
- (void)outputErrorMessage:(id)arg1;
- (_Bool)unzipCloseFile;
- (_Bool)unzipFileTo:(id)arg1 overWrite:(_Bool)arg2;
- (_Bool)unzipOpenFile:(id)arg1 password:(id)arg2;
- (_Bool)unzipOpenFile:(id)arg1;
- (_Bool)closeZipFile2;
- (_Bool)addFileToZip:(id)arg1 newname:(id)arg2;
- (_Bool)createZipFile2:(id)arg1 password:(id)arg2;
- (_Bool)createZipFile2:(id)arg1;
- (void)dealloc;

@end

