//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class RouteInfo, WCPayPaidDetailLeadTailCmdData;

@interface WCPayPaidDetailJumpInfo : NSObject
{
    long long _type;
    WCPayPaidDetailLeadTailCmdData *_cmd_data;
    RouteInfo *_route_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RouteInfo *route_info; // @synthesize route_info=_route_info;
@property(retain, nonatomic) WCPayPaidDetailLeadTailCmdData *cmd_data; // @synthesize cmd_data=_cmd_data;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

