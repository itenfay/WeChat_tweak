//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TXLivePlayConfig : NSObject
{
    _Bool _bAutoAdjustCacheTime;
    _Bool _enableAEC;
    _Bool _enableMessage;
    _Bool _enableMetaData;
    _Bool _enableNearestIP;
    float _cacheTime;
    float _maxAutoAdjustCacheTime;
    float _minAutoAdjustCacheTime;
    int _videoBlockThreshold;
    int _connectRetryCount;
    int _connectRetryInterval;
    unsigned int _playerPixelFormatType;
    int _rtmpChannelType;
    int _maxCacheItems;
    NSString *_flvSessionKey;
    NSString *_cacheFolderPath;
    NSDictionary *_headers;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
@property int maxCacheItems; // @synthesize maxCacheItems=_maxCacheItems;
@property(retain) NSString *cacheFolderPath; // @synthesize cacheFolderPath=_cacheFolderPath;
@property(nonatomic) int rtmpChannelType; // @synthesize rtmpChannelType=_rtmpChannelType;
@property(nonatomic) _Bool enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(nonatomic) unsigned int playerPixelFormatType; // @synthesize playerPixelFormatType=_playerPixelFormatType;
@property(copy, nonatomic) NSString *flvSessionKey; // @synthesize flvSessionKey=_flvSessionKey;
@property(nonatomic) _Bool enableMetaData; // @synthesize enableMetaData=_enableMetaData;
@property(nonatomic) _Bool enableMessage; // @synthesize enableMessage=_enableMessage;
@property(nonatomic) _Bool enableAEC; // @synthesize enableAEC=_enableAEC;
@property(nonatomic) int connectRetryInterval; // @synthesize connectRetryInterval=_connectRetryInterval;
@property(nonatomic) int connectRetryCount; // @synthesize connectRetryCount=_connectRetryCount;
@property(nonatomic) int videoBlockThreshold; // @synthesize videoBlockThreshold=_videoBlockThreshold;
@property(nonatomic) float minAutoAdjustCacheTime; // @synthesize minAutoAdjustCacheTime=_minAutoAdjustCacheTime;
@property(nonatomic) float maxAutoAdjustCacheTime; // @synthesize maxAutoAdjustCacheTime=_maxAutoAdjustCacheTime;
@property(nonatomic) _Bool bAutoAdjustCacheTime; // @synthesize bAutoAdjustCacheTime=_bAutoAdjustCacheTime;
@property(nonatomic) float cacheTime; // @synthesize cacheTime=_cacheTime;
- (id)description;
- (id)init;

@end

