//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderMemberShipIntroduceListData : NSObject
{
    _Bool _autoRenewSwitch;
    unsigned long long _otherVideoNum;
    unsigned long long _otherLiveNum;
    unsigned long long _videoShortNum;
    unsigned long long _liveShortNum;
    unsigned long long _memberPrice;
    unsigned long long _autoMemberPrice;
    NSString *_wecoinProductId;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool autoRenewSwitch; // @synthesize autoRenewSwitch=_autoRenewSwitch;
@property(copy, nonatomic) NSString *wecoinProductId; // @synthesize wecoinProductId=_wecoinProductId;
@property(nonatomic) unsigned long long autoMemberPrice; // @synthesize autoMemberPrice=_autoMemberPrice;
@property(nonatomic) unsigned long long memberPrice; // @synthesize memberPrice=_memberPrice;
@property(nonatomic) unsigned long long liveShortNum; // @synthesize liveShortNum=_liveShortNum;
@property(nonatomic) unsigned long long videoShortNum; // @synthesize videoShortNum=_videoShortNum;
@property(nonatomic) unsigned long long otherLiveNum; // @synthesize otherLiveNum=_otherLiveNum;
@property(nonatomic) unsigned long long otherVideoNum; // @synthesize otherVideoNum=_otherVideoNum;

@end

