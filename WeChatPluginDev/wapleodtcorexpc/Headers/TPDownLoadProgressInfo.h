//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPDownLoadProgressInfo : NSObject
{
    int _playableDurationMS;
    int _downloadSpeedKBps;
    long long _currentDownloadSize;
    long long _totalFileSize;
    NSString *_extraInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(readonly, nonatomic) long long currentDownloadSize; // @synthesize currentDownloadSize=_currentDownloadSize;
@property(readonly, nonatomic) int downloadSpeedKBps; // @synthesize downloadSpeedKBps=_downloadSpeedKBps;
@property(readonly, nonatomic) int playableDurationMS; // @synthesize playableDurationMS=_playableDurationMS;
- (id)initWithPlayableDuration:(int)arg1 downloadSpeed:(int)arg2 currentDownloadSize:(long long)arg3 totalFileSize:(long long)arg4 extraInfo:(id)arg5;

@end

