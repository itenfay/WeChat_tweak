//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLimitedModeDataBecomeGuardianItemPB
{
    unsigned int _becomeGuardianTime;
    NSString *_guardianUserName;
    NSString *_wardUserName;
    NSString *_ticket;
}

+ (void)initialize;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_becomeGuardianTime;
+ (void)PBArrayAdd_wardUserName;
+ (void)PBArrayAdd_guardianUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned int becomeGuardianTime; // @synthesize becomeGuardianTime=_becomeGuardianTime;
@property(retain, nonatomic) NSString *wardUserName; // @synthesize wardUserName=_wardUserName;
@property(retain, nonatomic) NSString *guardianUserName; // @synthesize guardianUserName=_guardianUserName;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

