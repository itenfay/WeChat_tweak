//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderEditComposeReportInfo : NSObject
{
    _Bool _skipVideoCompose;
    _Bool _useVideoCompositionLib;
    _Bool _keepsProcessInBackground;
    long long _mediaType;
    unsigned long long _audioTrackType;
    unsigned long long _retryType;
    unsigned long long _applicationResignActiveTimes;
    unsigned long long _applicationSuspendTimes;
    unsigned long long _autoRetryExportTimes;
    NSMutableArray *_audioSessionStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *audioSessionStatus; // @synthesize audioSessionStatus=_audioSessionStatus;
@property(nonatomic) unsigned long long autoRetryExportTimes; // @synthesize autoRetryExportTimes=_autoRetryExportTimes;
@property(nonatomic) _Bool keepsProcessInBackground; // @synthesize keepsProcessInBackground=_keepsProcessInBackground;
@property(nonatomic) unsigned long long applicationSuspendTimes; // @synthesize applicationSuspendTimes=_applicationSuspendTimes;
@property(nonatomic) unsigned long long applicationResignActiveTimes; // @synthesize applicationResignActiveTimes=_applicationResignActiveTimes;
@property(nonatomic) unsigned long long retryType; // @synthesize retryType=_retryType;
@property(nonatomic) _Bool useVideoCompositionLib; // @synthesize useVideoCompositionLib=_useVideoCompositionLib;
@property(nonatomic) unsigned long long audioTrackType; // @synthesize audioTrackType=_audioTrackType;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic, getter=isSkipVideoCompose) _Bool skipVideoCompose; // @synthesize skipVideoCompose=_skipVideoCompose;
- (void)setupWithVideoCompositionAttr:(id)arg1 videoEncodeTask:(id)arg2;

@end

