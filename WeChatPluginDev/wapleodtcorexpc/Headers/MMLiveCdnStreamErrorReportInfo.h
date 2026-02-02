//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MMLiveCdnStreamErrorReportInfo : NSObject
{
    _Bool _isMainStreamFailed;
    _Bool _isBackStreamFailed;
    _Bool _hasManuallySwitchedStream;
    unsigned int _failedQualityTag;
    int _sdkErrCode;
    int _playerEventId;
    unsigned int _currentQualityTag;
    NSData *_qualityTagCacheBuf;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currentQualityTag; // @synthesize currentQualityTag=_currentQualityTag;
@property(nonatomic) int playerEventId; // @synthesize playerEventId=_playerEventId;
@property(nonatomic) _Bool hasManuallySwitchedStream; // @synthesize hasManuallySwitchedStream=_hasManuallySwitchedStream;
@property(nonatomic) int sdkErrCode; // @synthesize sdkErrCode=_sdkErrCode;
@property(nonatomic) _Bool isBackStreamFailed; // @synthesize isBackStreamFailed=_isBackStreamFailed;
@property(nonatomic) _Bool isMainStreamFailed; // @synthesize isMainStreamFailed=_isMainStreamFailed;
@property(nonatomic) unsigned int failedQualityTag; // @synthesize failedQualityTag=_failedQualityTag;
@property(retain, nonatomic) NSData *qualityTagCacheBuf; // @synthesize qualityTagCacheBuf=_qualityTagCacheBuf;
- (id)generateFinderLiveCdnPlayInfo;
- (void)resetLastPlayEventData;
- (void)resetAllData;

@end

