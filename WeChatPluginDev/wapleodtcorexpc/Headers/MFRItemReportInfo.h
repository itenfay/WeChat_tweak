//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMomentsFinderRecommendationInfo;

@interface MFRItemReportInfo : NSObject
{
    _Bool _isExposed;
    _Bool _isFinalUnexposureReason;
    unsigned long long _sessionIndex;
    WCMomentsFinderRecommendationInfo *_finderRecommendationInfo;
    long long _unexposureReason;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFinalUnexposureReason; // @synthesize isFinalUnexposureReason=_isFinalUnexposureReason;
@property(nonatomic) long long unexposureReason; // @synthesize unexposureReason=_unexposureReason;
@property(nonatomic) _Bool isExposed; // @synthesize isExposed=_isExposed;
@property(retain, nonatomic) WCMomentsFinderRecommendationInfo *finderRecommendationInfo; // @synthesize finderRecommendationInfo=_finderRecommendationInfo;
@property(nonatomic) unsigned long long sessionIndex; // @synthesize sessionIndex=_sessionIndex;

@end

