//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveSdkChannelParamsDesc, MMLiveCDNPlayerItem, MMLiveCdnStreamInfo, NSData, NSMutableArray, NSMutableDictionary;

@interface MMLiveMultiAngleChannelInfo : NSObject
{
    unsigned int _retryCount;
    unsigned long long _itemIndex;
    MMLiveCDNPlayerItem *_cdnPlayerItem;
    LiveSdkChannelParamsDesc *_channelParamsDesc;
    MMLiveCdnStreamInfo *_audioModeCdnStreamInfo;
    NSMutableDictionary *_cdnStreamInfoDict;
    NSData *_qualityTagCacheBuf;
    NSMutableArray *_displayedCdnStreamQualityTagList;
    NSMutableArray *_allCdnStreamQualityTagList;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allCdnStreamQualityTagList; // @synthesize allCdnStreamQualityTagList=_allCdnStreamQualityTagList;
@property(retain, nonatomic) NSMutableArray *displayedCdnStreamQualityTagList; // @synthesize displayedCdnStreamQualityTagList=_displayedCdnStreamQualityTagList;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSData *qualityTagCacheBuf; // @synthesize qualityTagCacheBuf=_qualityTagCacheBuf;
@property(retain, nonatomic) NSMutableDictionary *cdnStreamInfoDict; // @synthesize cdnStreamInfoDict=_cdnStreamInfoDict;
@property(retain, nonatomic) MMLiveCdnStreamInfo *audioModeCdnStreamInfo; // @synthesize audioModeCdnStreamInfo=_audioModeCdnStreamInfo;
@property(retain, nonatomic) LiveSdkChannelParamsDesc *channelParamsDesc; // @synthesize channelParamsDesc=_channelParamsDesc;
@property(retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem; // @synthesize cdnPlayerItem=_cdnPlayerItem;
@property(nonatomic) unsigned long long itemIndex; // @synthesize itemIndex=_itemIndex;
- (void)updateVideoSizeFromChannelParamsDesc;
- (void)updateVideoSizeFromPlayerEvent:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool supportScreenRotate;
@property(readonly, nonatomic) unsigned long long displayedCdnStreamCount;
- (id)getCurrentDisplayedCdnStreamList;
- (id)getCdnStreamInfoWithQualityTag:(unsigned int)arg1 isTryViewLive:(_Bool)arg2;
- (void)cdnPlayUrlRemoveObjectWithKey:(long long)arg1;
- (void)cdnPlayUrlAddObjectWithKey:(long long)arg1 value:(id)arg2;
- (void)updateCdnStreamAndClarity;
- (void)cleanData;
- (void)updateChannelParamsDesc:(id)arg1;

@end

