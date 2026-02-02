//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReporterInitParams : NSObject
{
    _Bool _isUseProxy;
    _Bool _needReportToBeacon;
    long long _tpSetDataSourceStartSinceBootTimeMs;
    long long _getConvertedDataSourceSinceBootTimeMs;
    long long _tpPrepareStartSinceBootTimeMs;
    long long _tpPrepareStartOccurTimeSince1970Ms;
    NSString *_originalUrl;
    long long _urlProtocol;
    long long _playerType;
    NSString *_playFlowId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReportToBeacon; // @synthesize needReportToBeacon=_needReportToBeacon;
@property(copy, nonatomic) NSString *playFlowId; // @synthesize playFlowId=_playFlowId;
@property(nonatomic) _Bool isUseProxy; // @synthesize isUseProxy=_isUseProxy;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long urlProtocol; // @synthesize urlProtocol=_urlProtocol;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(nonatomic) long long tpPrepareStartOccurTimeSince1970Ms; // @synthesize tpPrepareStartOccurTimeSince1970Ms=_tpPrepareStartOccurTimeSince1970Ms;
@property(nonatomic) long long tpPrepareStartSinceBootTimeMs; // @synthesize tpPrepareStartSinceBootTimeMs=_tpPrepareStartSinceBootTimeMs;
@property(nonatomic) long long getConvertedDataSourceSinceBootTimeMs; // @synthesize getConvertedDataSourceSinceBootTimeMs=_getConvertedDataSourceSinceBootTimeMs;
@property(nonatomic) long long tpSetDataSourceStartSinceBootTimeMs; // @synthesize tpSetDataSourceStartSinceBootTimeMs=_tpSetDataSourceStartSinceBootTimeMs;
- (id)init;

@end

