//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNotifyGetMoreLiveResponse, NSString;

@interface MMFinderNotifyGetMoreLiveRespCacheItem : NSObject
{
    _Bool _needDisplay;
    FinderNotifyGetMoreLiveResponse *_resp;
    double _cacheTimestamp;
    NSString *_cacheKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needDisplay; // @synthesize needDisplay=_needDisplay;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) double cacheTimestamp; // @synthesize cacheTimestamp=_cacheTimestamp;
@property(retain, nonatomic) FinderNotifyGetMoreLiveResponse *resp; // @synthesize resp=_resp;

@end

