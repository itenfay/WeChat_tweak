//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSCoder.h>

@class NSString;

@interface SafeDeviceData : NSCoder
{
    _Bool _online;
    unsigned int _lastTime;
    NSString *_name;
    NSString *_uuid;
    NSString *_deviceType;
}

+ (void)SetSafeDeviceList:(id)arg1;
+ (void)UpdateSafeDevice:(id)arg1 withName:(id)arg2;
+ (void)DelSafeDevice:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_online;
+ (void)PBArrayAdd_lastTime;
+ (void)PBArrayAdd_deviceType;
+ (void)PBArrayAdd_uuid;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(nonatomic) unsigned int lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isCurrentDevice;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

