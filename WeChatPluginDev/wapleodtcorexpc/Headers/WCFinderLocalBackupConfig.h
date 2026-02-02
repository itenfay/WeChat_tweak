//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLocalBackupConfig : NSObject
{
    _Bool _useAff;
    _Bool _disableUnread;
    double _fakeTopLoadingTime;
    unsigned long long _topThreshold;
    unsigned long long _bottomThreshold;
    unsigned long long _minCacheCount;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
@property(nonatomic) _Bool disableUnread; // @synthesize disableUnread=_disableUnread;
@property(nonatomic) unsigned long long minCacheCount; // @synthesize minCacheCount=_minCacheCount;
@property(nonatomic) _Bool useAff; // @synthesize useAff=_useAff;
@property(nonatomic) unsigned long long bottomThreshold; // @synthesize bottomThreshold=_bottomThreshold;
@property(nonatomic) unsigned long long topThreshold; // @synthesize topThreshold=_topThreshold;
@property(nonatomic) double fakeTopLoadingTime; // @synthesize fakeTopLoadingTime=_fakeTopLoadingTime;

@end

