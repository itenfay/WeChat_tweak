//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPreloadInfo : NSObject
{
    unsigned long long _preloadVideoCount;
    unsigned long long _preloadVideoThreadCount;
    unsigned long long _preloadStrategyID;
}

@property(nonatomic) unsigned long long preloadStrategyID; // @synthesize preloadStrategyID=_preloadStrategyID;
@property(nonatomic) unsigned long long preloadVideoThreadCount; // @synthesize preloadVideoThreadCount=_preloadVideoThreadCount;
@property(nonatomic) unsigned long long preloadVideoCount; // @synthesize preloadVideoCount=_preloadVideoCount;

@end

