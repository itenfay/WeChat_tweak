//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RouteInfo, WCPayPaidDetailLogoViewData;

@interface WCPayPaidDetailFinderInfoViewData : NSObject
{
    WCPayPaidDetailLogoViewData *_logo;
    WCPayPaidDetailLogoViewData *_sub_logo;
    NSString *_title;
    NSString *_desc;
    RouteInfo *_route_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RouteInfo *route_info; // @synthesize route_info=_route_info;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) WCPayPaidDetailLogoViewData *sub_logo; // @synthesize sub_logo=_sub_logo;
@property(retain, nonatomic) WCPayPaidDetailLogoViewData *logo; // @synthesize logo=_logo;

@end

