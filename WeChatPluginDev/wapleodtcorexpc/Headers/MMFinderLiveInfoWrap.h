//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveStreamTypeInfo, NSString, WCFinderLiveInfo;

@interface MMFinderLiveInfoWrap : NSObject
{
    NSString *_tid;
    WCFinderLiveInfo *_finderLiveInfo;
    unsigned long long _liveInfoUpdateTime;
    unsigned long long _activityType;
    unsigned long long _activityTypeUpdateTime;
    MMFinderLiveStreamTypeInfo *_finderLiveStreamTypeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStreamTypeInfo *finderLiveStreamTypeInfo; // @synthesize finderLiveStreamTypeInfo=_finderLiveStreamTypeInfo;
@property(nonatomic) unsigned long long activityTypeUpdateTime; // @synthesize activityTypeUpdateTime=_activityTypeUpdateTime;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long liveInfoUpdateTime; // @synthesize liveInfoUpdateTime=_liveInfoUpdateTime;
@property(retain, nonatomic) WCFinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

