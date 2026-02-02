//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_uploadToCommonCDN
{
    NSString *_fileKey;
    long long _finishedLength;
}

- (void).cxx_destruct;
@property(nonatomic) long long finishedLength; // @synthesize finishedLength=_finishedLength;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)onWACDNUploadCancel:(id)arg1;
- (void)cancelUpload:(id)arg1;
- (void)startUpload:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end

