//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DataReportPageDataEntity : NSObject
{
    _Bool _isFullSubPage;
    unsigned long long _pageId;
    unsigned long long _bizGroupId;
    NSString *_pageName;
    NSMutableDictionary *_pageParams;
    NSMutableDictionary *_pageEventParams;
    NSMutableDictionary *_refPageParams;
    NSMutableDictionary *_sourcePageParams;
    NSMutableDictionary *_innerProperty;
    NSMutableDictionary *_reportPolicy;
    long long _pageStep;
    unsigned long long _pageInTime;
    unsigned long long _sessionInTime;
    NSMutableDictionary *_dynamicParamsBlocks;
    NSMutableDictionary *_reportIntervals;
    NSMutableDictionary *_lastReportTimes;
    id _relatedModel;
    NSString *_sourceViewId;
    NSMutableDictionary *_bizOutDynamicParamsCache;
    NSMutableDictionary *_sessionOutDynamicParamsCache;
    NSMutableDictionary *_pageOutDynamicParamsCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pageOutDynamicParamsCache; // @synthesize pageOutDynamicParamsCache=_pageOutDynamicParamsCache;
@property(retain, nonatomic) NSMutableDictionary *sessionOutDynamicParamsCache; // @synthesize sessionOutDynamicParamsCache=_sessionOutDynamicParamsCache;
@property(retain, nonatomic) NSMutableDictionary *bizOutDynamicParamsCache; // @synthesize bizOutDynamicParamsCache=_bizOutDynamicParamsCache;
@property(nonatomic) _Bool isFullSubPage; // @synthesize isFullSubPage=_isFullSubPage;
@property(retain, nonatomic) NSString *sourceViewId; // @synthesize sourceViewId=_sourceViewId;
@property(nonatomic) __weak id relatedModel; // @synthesize relatedModel=_relatedModel;
@property(retain, nonatomic) NSMutableDictionary *lastReportTimes; // @synthesize lastReportTimes=_lastReportTimes;
@property(retain, nonatomic) NSMutableDictionary *reportIntervals; // @synthesize reportIntervals=_reportIntervals;
@property(retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks; // @synthesize dynamicParamsBlocks=_dynamicParamsBlocks;
@property(nonatomic) unsigned long long sessionInTime; // @synthesize sessionInTime=_sessionInTime;
@property(nonatomic) unsigned long long pageInTime; // @synthesize pageInTime=_pageInTime;
@property(nonatomic) long long pageStep; // @synthesize pageStep=_pageStep;
@property(retain, nonatomic) NSMutableDictionary *reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(retain, nonatomic) NSMutableDictionary *innerProperty; // @synthesize innerProperty=_innerProperty;
@property(retain, nonatomic) NSMutableDictionary *sourcePageParams; // @synthesize sourcePageParams=_sourcePageParams;
@property(retain, nonatomic) NSMutableDictionary *refPageParams; // @synthesize refPageParams=_refPageParams;
@property(retain, nonatomic) NSMutableDictionary *pageEventParams; // @synthesize pageEventParams=_pageEventParams;
@property(retain, nonatomic) NSMutableDictionary *pageParams; // @synthesize pageParams=_pageParams;
@property(retain) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) unsigned long long bizGroupId; // @synthesize bizGroupId=_bizGroupId;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
- (id)toString;
- (void)reset;
- (id)init;

@end

