//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdSnsPullSelectAdInfo;

@interface WCAdSnsPullSelectReportModel : NSObject
{
    int _stateType;
    WCAdSnsPullSelectAdInfo *_timelinePullAd;
    WCAdSnsPullSelectAdInfo *_adPullAd;
    NSString *_sessionKeyAd;
    NSString *_selectedSnsId;
}

- (void).cxx_destruct;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;
@property(retain, nonatomic) NSString *selectedSnsId; // @synthesize selectedSnsId=_selectedSnsId;
@property(retain, nonatomic) NSString *sessionKeyAd; // @synthesize sessionKeyAd=_sessionKeyAd;
@property(retain, nonatomic) WCAdSnsPullSelectAdInfo *adPullAd; // @synthesize adPullAd=_adPullAd;
@property(retain, nonatomic) WCAdSnsPullSelectAdInfo *timelinePullAd; // @synthesize timelinePullAd=_timelinePullAd;

@end

