//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveNavLiveStreamBaseModel;

@interface MMFinderLiveHomePageDataCache : NSObject
{
    MMFinderLiveNavLiveStreamBaseModel *_model;
    unsigned long long _cacheTimeSec;
    unsigned long long _cacheMaxTtlSec;
}

+ (id)cacheWithModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheMaxTtlSec; // @synthesize cacheMaxTtlSec=_cacheMaxTtlSec;
@property(nonatomic) unsigned long long cacheTimeSec; // @synthesize cacheTimeSec=_cacheTimeSec;
@property(retain, nonatomic) MMFinderLiveNavLiveStreamBaseModel *model; // @synthesize model=_model;
- (_Bool)valid;

@end

