//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMomentsMediaPredictedResult;

@interface WCMomentsPlayerSourceDetermination : NSObject
{
    _Bool _HDFileExists;
    _Bool _LDFileExists;
    _Bool _canSwitchSource;
    _Bool _canPlayHDRVideos;
    NSString *_tag;
    long long _mediaSource;
    long long _previousSourceStatus;
    long long _currentSourceStatus;
    long long _previewSourceMode;
    long long _previewRequestReason;
    WCMomentsMediaPredictedResult *_predictedResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsMediaPredictedResult *predictedResult; // @synthesize predictedResult=_predictedResult;
@property(nonatomic) _Bool canPlayHDRVideos; // @synthesize canPlayHDRVideos=_canPlayHDRVideos;
@property(nonatomic) long long previewRequestReason; // @synthesize previewRequestReason=_previewRequestReason;
@property(nonatomic) long long previewSourceMode; // @synthesize previewSourceMode=_previewSourceMode;
@property(nonatomic) _Bool canSwitchSource; // @synthesize canSwitchSource=_canSwitchSource;
@property(nonatomic) _Bool LDFileExists; // @synthesize LDFileExists=_LDFileExists;
@property(nonatomic) _Bool HDFileExists; // @synthesize HDFileExists=_HDFileExists;
@property(nonatomic) long long currentSourceStatus; // @synthesize currentSourceStatus=_currentSourceStatus;
@property(nonatomic) long long previousSourceStatus; // @synthesize previousSourceStatus=_previousSourceStatus;
@property(nonatomic) long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (id)description;

@end

