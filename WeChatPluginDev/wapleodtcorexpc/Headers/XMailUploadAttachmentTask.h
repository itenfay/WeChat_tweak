//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface XMailUploadAttachmentTask : NSObject
{
    int _errorCode;
    NSString *_fileName;
    NSString *_filePath;
    NSString *_clientMediaID;
    NSString *_fileId;
    NSString *_errMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *clientMediaID; // @synthesize clientMediaID=_clientMediaID;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;

@end

