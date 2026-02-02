//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface GameHaowanImageUploadTask
{
    float _lastPercent;
    NSString *_fileKey;
    NSMutableArray *_resIds;
    unsigned long long _startUploadTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(retain, nonatomic) NSMutableArray *resIds; // @synthesize resIds=_resIds;
@property(nonatomic) float lastPercent; // @synthesize lastPercent=_lastPercent;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void)trackEventStartUpload;
- (void)trackEventUploadFailed:(long long)arg1;
- (void)trackEventUploadSucceed;
@property(readonly, nonatomic) unsigned long long currentIndex;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)startNextImageUpload;
- (void)onStart;

@end

