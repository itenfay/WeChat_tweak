//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnUploadTaskInfo, NSString;

@interface MMFinderLiveUploadMediaItemBase : NSObject
{
    NSString *_uploadTaskId;
    NSString *_mediaId;
    CdnUploadTaskInfo *_uploadInfo;
    NSString *_requestHeader;
    unsigned long long _headerParamsType;
    unsigned long long _uploadCdnAppType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long uploadCdnAppType; // @synthesize uploadCdnAppType=_uploadCdnAppType;
@property(nonatomic) unsigned long long headerParamsType; // @synthesize headerParamsType=_headerParamsType;
@property(copy, nonatomic) NSString *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *uploadTaskId; // @synthesize uploadTaskId=_uploadTaskId;
@property(readonly, nonatomic) _Bool isMediaUploadSuccess;
- (void)setNewUploadInfo:(id)arg1;
- (struct C2CUploadRequest)getCdnUploadHeader;
- (_Bool)checkCdnUploadEnable;
- (_Bool)checkFileExist;
- (id)initWithUploadTaskId:(id)arg1 mediaId:(id)arg2;

@end

