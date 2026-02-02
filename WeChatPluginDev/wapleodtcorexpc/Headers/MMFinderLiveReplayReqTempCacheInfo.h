//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveHonCoverCacheInfo, NSData, WCLocationInfo;

@interface MMFinderLiveReplayReqTempCacheInfo : NSObject
{
    _Bool _hasMoreData;
    _Bool _isNeedOpenBank;
    NSData *_lastBuffer;
    WCLocationInfo *_currentLocationInfo;
    MMFinderLiveHonCoverCacheInfo *_honCoverCacheInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveHonCoverCacheInfo *honCoverCacheInfo; // @synthesize honCoverCacheInfo=_honCoverCacheInfo;
@property(nonatomic) _Bool isNeedOpenBank; // @synthesize isNeedOpenBank=_isNeedOpenBank;
@property(retain, nonatomic) WCLocationInfo *currentLocationInfo; // @synthesize currentLocationInfo=_currentLocationInfo;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;

@end

