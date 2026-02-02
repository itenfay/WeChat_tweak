//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DeviceProfileButton
{
    NSString *_uiTitle;
    NSString *_nsUrl;
    NSString *_uiIcon;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsUrl;
+ (void)PBArrayAdd_uiTitle;
+ (void)PBArrayAdd_uiIcon;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uiIcon; // @synthesize uiIcon=_uiIcon;
@property(copy, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(copy, nonatomic) NSString *uiTitle; // @synthesize uiTitle=_uiTitle;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

