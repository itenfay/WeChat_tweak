//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveReplayStopgapMediaItem : NSObject
{
    unsigned int _qualityLevel;
    unsigned int _codec;
    unsigned long long _stopgapId;
    NSString *_qualityTag;
    NSString *_uri;
    double _preloadRatio;
    double _preloadUnixEpochTime;
}

- (void).cxx_destruct;
@property(nonatomic) double preloadUnixEpochTime; // @synthesize preloadUnixEpochTime=_preloadUnixEpochTime;
@property(nonatomic) double preloadRatio; // @synthesize preloadRatio=_preloadRatio;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *qualityTag; // @synthesize qualityTag=_qualityTag;
@property(nonatomic) unsigned int codec; // @synthesize codec=_codec;
@property(nonatomic) unsigned int qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(nonatomic) unsigned long long stopgapId; // @synthesize stopgapId=_stopgapId;
@property(readonly, nonatomic) NSString *stopgapKey;

@end

