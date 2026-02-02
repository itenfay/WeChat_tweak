//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveNoticeInfoCache : NSObject
{
    NSString *_noticeId;
    unsigned long long _refreshTime;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;

@end

