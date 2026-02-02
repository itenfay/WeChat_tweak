//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser;

@interface MMFinderLiveConnectMicCloseInfo : NSObject
{
    MMFinderLiveConnectMicUser *_userInfo;
    unsigned long long _tryCloseCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tryCloseCount; // @synthesize tryCloseCount=_tryCloseCount;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;

@end

