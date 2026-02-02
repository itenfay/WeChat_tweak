//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveOnlineStateSessionInfo : NSObject
{
    _Bool _isOffline;
    _Bool _isRecentReward;
    _Bool _isRewardCount;
    _Bool _needPinBottom;
    unsigned long long _type;
    NSMutableArray *_userList;
    NSMutableArray *_recentRewardList;
    NSMutableArray *_gloryContacts;
    NSString *_title;
    NSString *_heatTitle;
    NSString *_footerTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(retain, nonatomic) NSString *heatTitle; // @synthesize heatTitle=_heatTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *gloryContacts; // @synthesize gloryContacts=_gloryContacts;
@property(retain, nonatomic) NSMutableArray *recentRewardList; // @synthesize recentRewardList=_recentRewardList;
@property(retain, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool needPinBottom; // @synthesize needPinBottom=_needPinBottom;
@property(nonatomic) _Bool isRewardCount; // @synthesize isRewardCount=_isRewardCount;
@property(nonatomic) _Bool isRecentReward; // @synthesize isRecentReward=_isRecentReward;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;

@end

