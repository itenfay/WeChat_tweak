//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnProgressInfo, CdnUploadTaskInfo, NSString;

@interface GroupNoticeUploadTask : NSObject
{
    unsigned char _retryCount;
    _Bool _isThumb;
    NSString *_fileKey;
    NSString *_aesKey;
    NSString *_filePath;
    CdnProgressInfo *_progressInfo;
    CdnUploadTaskInfo *_resultInfo;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) CdnUploadTaskInfo *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) CdnProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) unsigned char retryCount; // @synthesize retryCount=_retryCount;
- (id)description;
- (id)init;

@end

