//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFreezeBalanceMsg : NSObject
{
    NSString *_wording;
    unsigned long long _wording_color;
    unsigned long long _wording_size;
    unsigned long long _bg_color;
    NSString *_route_url;
    NSString *_left_icon;
    NSString *_right_icon;
}

+ (void)initialize;
+ (void)PBArrayAdd_right_icon;
+ (void)PBArrayAdd_left_icon;
+ (void)PBArrayAdd_route_url;
+ (void)PBArrayAdd_bg_color;
+ (void)PBArrayAdd_wording_size;
+ (void)PBArrayAdd_wording_color;
+ (void)PBArrayAdd_wording;
- (void).cxx_destruct;
@property(retain) NSString *right_icon; // @synthesize right_icon=_right_icon;
@property(retain) NSString *left_icon; // @synthesize left_icon=_left_icon;
@property(retain) NSString *route_url; // @synthesize route_url=_route_url;
@property unsigned long long bg_color; // @synthesize bg_color=_bg_color;
@property unsigned long long wording_size; // @synthesize wording_size=_wording_size;
@property unsigned long long wording_color; // @synthesize wording_color=_wording_color;
@property(retain) NSString *wording; // @synthesize wording=_wording;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

