//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLimitedModeDataAgreenAuthorizationItemPB
{
    unsigned int _businessType;
    unsigned int _agreenAuthorizationTime;
    NSString *_businesskey;
    NSString *_guardianUserName;
    NSString *_wardUserName;
    unsigned long long _requestAuthorizationMsgid;
}

+ (void)initialize;
+ (void)PBArrayAdd_requestAuthorizationMsgid;
+ (void)PBArrayAdd_agreenAuthorizationTime;
+ (void)PBArrayAdd_wardUserName;
+ (void)PBArrayAdd_guardianUserName;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_businesskey;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestAuthorizationMsgid; // @synthesize requestAuthorizationMsgid=_requestAuthorizationMsgid;
@property(nonatomic) unsigned int agreenAuthorizationTime; // @synthesize agreenAuthorizationTime=_agreenAuthorizationTime;
@property(retain, nonatomic) NSString *wardUserName; // @synthesize wardUserName=_wardUserName;
@property(retain, nonatomic) NSString *guardianUserName; // @synthesize guardianUserName=_guardianUserName;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *businesskey; // @synthesize businesskey=_businesskey;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

