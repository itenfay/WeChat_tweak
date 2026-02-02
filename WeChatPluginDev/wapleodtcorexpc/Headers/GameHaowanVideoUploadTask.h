//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameHaowanVideoUploadTask
{
    NSString *_videoMd5;
    long long _videoFileSize;
    float _lastPercent;
    NSString *_fileKey;
    NSString *_videoId;
    unsigned long long _startUploadTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) float lastPercent; // @synthesize lastPercent=_lastPercent;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void)trackEventStartUpload;
- (void)trackEventUploadFailed:(long long)arg1;
- (void)trackEventUploadSucceed;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)onStart;

@end

