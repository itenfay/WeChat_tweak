//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface MMLiveAdsParams : NSObject
{
    _Bool _isAdsLive;
    _Bool _hasReportAction;
    NSString *_feedbackUrl;
    CDUnknownBlockType _adsSuccess;
    NSMutableArray *_feedbackInfoArray;
    unsigned long long _originExposeTimeStamp;
    unsigned long long _lastReportActionTimeStamp;
    unsigned long long _viewableExposeTimeStamp;
    NSDictionary *_reportInfo;
    NSString *_expReportLink;
    NSString *_clkReportLink;
    unsigned long long _rewardTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardTime; // @synthesize rewardTime=_rewardTime;
@property(copy, nonatomic) NSString *clkReportLink; // @synthesize clkReportLink=_clkReportLink;
@property(copy, nonatomic) NSString *expReportLink; // @synthesize expReportLink=_expReportLink;
@property(retain, nonatomic) NSDictionary *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) _Bool hasReportAction; // @synthesize hasReportAction=_hasReportAction;
@property(nonatomic) unsigned long long viewableExposeTimeStamp; // @synthesize viewableExposeTimeStamp=_viewableExposeTimeStamp;
@property(nonatomic) unsigned long long lastReportActionTimeStamp; // @synthesize lastReportActionTimeStamp=_lastReportActionTimeStamp;
@property(nonatomic) unsigned long long originExposeTimeStamp; // @synthesize originExposeTimeStamp=_originExposeTimeStamp;
@property(retain, nonatomic) NSMutableArray *feedbackInfoArray; // @synthesize feedbackInfoArray=_feedbackInfoArray;
@property(copy, nonatomic) CDUnknownBlockType adsSuccess; // @synthesize adsSuccess=_adsSuccess;
@property(retain, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(nonatomic) _Bool isAdsLive; // @synthesize isAdsLive=_isAdsLive;
- (id)init;

@end

