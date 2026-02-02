//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderShopCouponInfo_AcquireInfo, NSString;

@interface WCFinderCouponReceiveEventInfo : NSObject
{
    _Bool _hasResponseWhenFail;
    unsigned int _couponStatus;
    unsigned int _clickButtonAction;
    unsigned int _clickButtonStyle;
    long long _event;
    long long _scene;
    NSString *_stockID;
    NSString *_buttonWording;
    FinderShopCouponInfo_AcquireInfo *_acquireInfo;
}

+ (id)infoWith:(id)arg1 event:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int clickButtonStyle; // @synthesize clickButtonStyle=_clickButtonStyle;
@property(retain, nonatomic) FinderShopCouponInfo_AcquireInfo *acquireInfo; // @synthesize acquireInfo=_acquireInfo;
@property(copy, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(nonatomic) unsigned int clickButtonAction; // @synthesize clickButtonAction=_clickButtonAction;
@property(nonatomic) unsigned int couponStatus; // @synthesize couponStatus=_couponStatus;
@property(nonatomic) _Bool hasResponseWhenFail; // @synthesize hasResponseWhenFail=_hasResponseWhenFail;
@property(copy, nonatomic) NSString *stockID; // @synthesize stockID=_stockID;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long event; // @synthesize event=_event;

@end

