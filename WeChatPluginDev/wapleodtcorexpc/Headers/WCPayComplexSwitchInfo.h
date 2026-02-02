//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayBindNewCardSwitch;

@interface WCPayComplexSwitchInfo : NSObject
{
    WCPayBindNewCardSwitch *_bind_newcard_switch;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_bind_newcard_switch;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindNewCardSwitch *bind_newcard_switch; // @synthesize bind_newcard_switch=_bind_newcard_switch;
- (void)genFromDic:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

