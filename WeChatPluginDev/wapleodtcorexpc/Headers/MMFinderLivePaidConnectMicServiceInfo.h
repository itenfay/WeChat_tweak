//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, MicSetting_PurchaseMicSetting, NSString;

@interface MMFinderLivePaidConnectMicServiceInfo : NSObject
{
    NSString *_title;
    NSString *_headImgUrl;
    double _rating;
    unsigned long long _duration;
    unsigned long long _price;
    unsigned long long _currentWaitingUserCount;
    FinderJumpInfo *_ratingJumpInfo;
    MicSetting_PurchaseMicSetting *_correspondingMicSetting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *correspondingMicSetting; // @synthesize correspondingMicSetting=_correspondingMicSetting;
@property(retain, nonatomic) FinderJumpInfo *ratingJumpInfo; // @synthesize ratingJumpInfo=_ratingJumpInfo;
@property(nonatomic) unsigned long long currentWaitingUserCount; // @synthesize currentWaitingUserCount=_currentWaitingUserCount;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

