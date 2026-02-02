//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPlayerHttpMediaWrap : NSObject
{
    unsigned int _taskId;
    int _bitrate;
    unsigned int _preloadPercent;
    unsigned int _taskTimeout;
    unsigned int _blockSize;
    int _apptype;
    int _filetype;
    NSString *_nsIdentifier;
    NSString *_nsResourceUrl;
    NSString *_codingFormat;
    unsigned long long _enQueueTime;
    unsigned long long _playerScene;
    double _startDownloadTime;
    double _getMoovTime;
    unsigned long long _downloadType;
}

- (void).cxx_destruct;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;
@property(nonatomic) int apptype; // @synthesize apptype=_apptype;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(nonatomic) double getMoovTime; // @synthesize getMoovTime=_getMoovTime;
@property(nonatomic) double startDownloadTime; // @synthesize startDownloadTime=_startDownloadTime;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(nonatomic) unsigned int taskTimeout; // @synthesize taskTimeout=_taskTimeout;
@property(nonatomic) unsigned long long enQueueTime; // @synthesize enQueueTime=_enQueueTime;
@property(nonatomic) unsigned int preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(retain, nonatomic) NSString *codingFormat; // @synthesize codingFormat=_codingFormat;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(retain, nonatomic) NSString *nsResourceUrl; // @synthesize nsResourceUrl=_nsResourceUrl;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (int)getFileTypeWithPlayerScene:(unsigned long long)arg1;
- (id)generateDownloadArgsWrapWithPlayerScene:(unsigned long long)arg1;
- (id)getCodingFormat;
- (int)getBitrate;
@property(readonly, copy) NSString *description;
- (_Bool)isLIFOPreloadTask;
- (id)getHTTPReferer;
- (unsigned int)getPreloadPercent;
- (id)getTempDirectory;
- (id)getThumbImagePath;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;
- (id)initWithResourceUrl:(id)arg1 bitrate:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

