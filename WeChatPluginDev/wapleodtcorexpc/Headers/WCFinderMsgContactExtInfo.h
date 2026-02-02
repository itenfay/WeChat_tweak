//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPrivateMsgContactExtInfo;

@interface WCFinderMsgContactExtInfo : NSObject
{
    _Bool _isRequesting;
    unsigned int _refreshInterval;
    unsigned long long _lastRequestTime;
    FinderPrivateMsgContactExtInfo *_respExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderPrivateMsgContactExtInfo *respExtInfo; // @synthesize respExtInfo=_respExtInfo;
@property(nonatomic) unsigned int refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) unsigned long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
- (id)parseFollowerBadgeInfo;
- (id)parseFrequentWatchBadgeInfo;
- (id)parseBuyBadgeInfo;
- (id)parseBadgeLabelViewModel;
- (id)parseSignUIStateInfo;
- (id)parseRankSignViewModel;

@end

