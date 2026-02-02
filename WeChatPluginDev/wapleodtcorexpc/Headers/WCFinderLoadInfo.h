//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLoadInfo : NSObject
{
    _Bool _isDiscoveryPreload;
    int _commentScene;
    unsigned long long _actionType;
    unsigned long long _downloadType;
    unsigned long long _downloadStrategy;
    unsigned long long _netType;
    NSString *_tid;
    unsigned long long _durationInS;
    unsigned long long _durationInMS;
    unsigned long long _fileSize;
    NSString *_videoFormat;
    NSString *_bypass;
    unsigned long long _downloadSize;
    unsigned long long _completeDownloadSize;
    unsigned long long _downloadStartTime;
    unsigned long long _downloadEndTime;
    unsigned long long _uniqPlayTime;
    unsigned long long _realPlayTime;
    unsigned long long _stayTime;
    unsigned long long _playCount;
    unsigned long long _playStartTime;
    unsigned long long _playEndTime;
    unsigned long long _playStartPos;
    unsigned long long _playEndPos;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playEndPos; // @synthesize playEndPos=_playEndPos;
@property(nonatomic) unsigned long long playStartPos; // @synthesize playStartPos=_playStartPos;
@property(nonatomic) unsigned long long playEndTime; // @synthesize playEndTime=_playEndTime;
@property(nonatomic) unsigned long long playStartTime; // @synthesize playStartTime=_playStartTime;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned long long realPlayTime; // @synthesize realPlayTime=_realPlayTime;
@property(nonatomic) unsigned long long uniqPlayTime; // @synthesize uniqPlayTime=_uniqPlayTime;
@property(nonatomic) _Bool isDiscoveryPreload; // @synthesize isDiscoveryPreload=_isDiscoveryPreload;
@property(nonatomic) unsigned long long downloadEndTime; // @synthesize downloadEndTime=_downloadEndTime;
@property(nonatomic) unsigned long long downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;
@property(nonatomic) unsigned long long completeDownloadSize; // @synthesize completeDownloadSize=_completeDownloadSize;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(copy, nonatomic) NSString *bypass; // @synthesize bypass=_bypass;
@property(copy, nonatomic) NSString *videoFormat; // @synthesize videoFormat=_videoFormat;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long durationInMS; // @synthesize durationInMS=_durationInMS;
@property(nonatomic) unsigned long long durationInS; // @synthesize durationInS=_durationInS;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long netType; // @synthesize netType=_netType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long downloadStrategy; // @synthesize downloadStrategy=_downloadStrategy;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void)fillWithMediaWrap:(id)arg1;
- (id)description;

@end

