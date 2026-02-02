//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderDataItem, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@interface WCMomentsFinderRecommendationInfo : NSObject
{
    WCFinderRedDotCtrlInfo *_finderCtrlInfo;
    NSArray *_usernames;
    unsigned long long _userCount;
    NSString *_customizedSeparatorTips;
}

+ (id)recommendationInfoWithFinderCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *customizedSeparatorTips; // @synthesize customizedSeparatorTips=_customizedSeparatorTips;
@property(readonly, nonatomic) unsigned long long userCount; // @synthesize userCount=_userCount;
@property(readonly, copy, nonatomic) NSArray *usernames; // @synthesize usernames=_usernames;
@property(readonly, nonatomic) WCFinderRedDotCtrlInfo *finderCtrlInfo; // @synthesize finderCtrlInfo=_finderCtrlInfo;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) WCFinderDataItem *finderDataItem;
@property(readonly, nonatomic) WCFinderRedDotTipsShowInfo *finderShowInfo;
- (id)initWithFinderCtrlInfo:(id)arg1;

@end

