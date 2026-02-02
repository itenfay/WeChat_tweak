//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAbnormalClosedPageInfo, NSArray, NSString, WCFinderGetLiveInfoModel, WCFinderLiveInfo;

@interface MMFinderLiveInfoCacheItem : NSObject
{
    unsigned int _liveNewFansNum;
    unsigned int _refreshIntervalInSecond;
    unsigned long long _creationUnixEpochTime;
    unsigned long long _expirationUnixEpochTimeInSecond;
    WCFinderLiveInfo *_liveInfo;
    NSString *_recommendReason;
    NSArray *_jumpInfos;
    WCFinderGetLiveInfoModel *_successCallbackModel;
    FinderLiveAbnormalClosedPageInfo *_abnormalClosePage;
}

+ (id)keyWithGetLiveInfoParams:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *abnormalClosePage; // @synthesize abnormalClosePage=_abnormalClosePage;
@property(retain, nonatomic) WCFinderGetLiveInfoModel *successCallbackModel; // @synthesize successCallbackModel=_successCallbackModel;
@property(retain, nonatomic) NSArray *jumpInfos; // @synthesize jumpInfos=_jumpInfos;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) unsigned int refreshIntervalInSecond; // @synthesize refreshIntervalInSecond=_refreshIntervalInSecond;
@property(nonatomic) unsigned int liveNewFansNum; // @synthesize liveNewFansNum=_liveNewFansNum;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) unsigned long long expirationUnixEpochTimeInSecond; // @synthesize expirationUnixEpochTimeInSecond=_expirationUnixEpochTimeInSecond;
@property(nonatomic) unsigned long long creationUnixEpochTime; // @synthesize creationUnixEpochTime=_creationUnixEpochTime;

@end

