//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface MMFinderLiveReplayStopgapConfiguration : NSObject
{
    _Bool _enabled;
    _Bool _forceQualityRecommendation;
    unsigned int _recommendedQualityLevel;
    unsigned long long _stopgapId;
    NSDictionary *_mediaItems;
    NSArray *_mediaItemsList;
}

+ (_Bool)stopgapInfoValid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *mediaItemsList; // @synthesize mediaItemsList=_mediaItemsList;
@property(retain, nonatomic) NSDictionary *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(nonatomic) _Bool forceQualityRecommendation; // @synthesize forceQualityRecommendation=_forceQualityRecommendation;
@property(nonatomic) unsigned int recommendedQualityLevel; // @synthesize recommendedQualityLevel=_recommendedQualityLevel;
@property(nonatomic) unsigned long long stopgapId; // @synthesize stopgapId=_stopgapId;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)preferredStopgapMediaItemWithMaximumQuality:(unsigned int)arg1 enableH265:(_Bool)arg2;
- (id)initWithStopgapInfo:(id)arg1 preloadInfo:(id)arg2;

@end

