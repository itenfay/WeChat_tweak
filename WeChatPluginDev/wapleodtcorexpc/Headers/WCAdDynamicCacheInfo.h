//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCADChainStrengthenInfo, WCAdFinderTopicInfo;

@interface WCAdDynamicCacheInfo : NSObject
{
    _Bool _adWeAppRelievedBuyFlag;
    _Bool _adWeAppFlagshipFlag;
    int _adLiveStatus;
    WCADChainStrengthenInfo *_adChainStrengthenInfo;
    WCAdFinderTopicInfo *_adFinderTopicInfo;
    NSString *_adContinuousLikeNumberTitle;
    NSString *_adFireworkCheerNumberTitle;
    NSString *_adHighlightTagNumberTitle;
    NSString *_adStateSettingBarNumberTitle;
    NSString *_adHotDiscussedBarNumberTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adHotDiscussedBarNumberTitle; // @synthesize adHotDiscussedBarNumberTitle=_adHotDiscussedBarNumberTitle;
@property(retain, nonatomic) NSString *adStateSettingBarNumberTitle; // @synthesize adStateSettingBarNumberTitle=_adStateSettingBarNumberTitle;
@property(copy, nonatomic) NSString *adHighlightTagNumberTitle; // @synthesize adHighlightTagNumberTitle=_adHighlightTagNumberTitle;
@property(retain, nonatomic) NSString *adFireworkCheerNumberTitle; // @synthesize adFireworkCheerNumberTitle=_adFireworkCheerNumberTitle;
@property(retain, nonatomic) NSString *adContinuousLikeNumberTitle; // @synthesize adContinuousLikeNumberTitle=_adContinuousLikeNumberTitle;
@property(nonatomic) _Bool adWeAppFlagshipFlag; // @synthesize adWeAppFlagshipFlag=_adWeAppFlagshipFlag;
@property(nonatomic) _Bool adWeAppRelievedBuyFlag; // @synthesize adWeAppRelievedBuyFlag=_adWeAppRelievedBuyFlag;
@property(retain, nonatomic) WCAdFinderTopicInfo *adFinderTopicInfo; // @synthesize adFinderTopicInfo=_adFinderTopicInfo;
@property(retain, nonatomic) WCADChainStrengthenInfo *adChainStrengthenInfo; // @synthesize adChainStrengthenInfo=_adChainStrengthenInfo;
@property(nonatomic) int adLiveStatus; // @synthesize adLiveStatus=_adLiveStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

