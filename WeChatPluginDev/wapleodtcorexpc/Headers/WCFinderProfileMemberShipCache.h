//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderProfileMemberShipCache : NSObject
{
    _Bool _autoRenewSwitch;
    NSArray *_videoTids;
    long long _price;
    long long _videoNum;
    NSString *_ticket;
    NSString *_wecoinProductId;
    long long _autoPrice;
}

+ (void)initialize;
+ (void)PBArrayAdd_autoPrice;
+ (void)PBArrayAdd_wecoinProductId;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_videoNum;
+ (void)PBArrayAdd_price;
+ (void)PBArrayAdd_videoTids;
- (void).cxx_destruct;
@property(nonatomic) _Bool autoRenewSwitch; // @synthesize autoRenewSwitch=_autoRenewSwitch;
@property(nonatomic) long long autoPrice; // @synthesize autoPrice=_autoPrice;
@property(copy, nonatomic) NSString *wecoinProductId; // @synthesize wecoinProductId=_wecoinProductId;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long videoNum; // @synthesize videoNum=_videoNum;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) NSArray *videoTids; // @synthesize videoTids=_videoTids;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

