//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ServiceAppData
{
    NSString *_appID;
    NSString *_appName;
    NSString *_appNameEn;
    NSString *_appNameTW;
    NSString *_appNameHK;
    NSString *_appIconUrlAttView;
    NSString *_appIconUrlListView;
    NSString *_appForwardUrl;
    unsigned int _appType;
    unsigned int _appInfoFlag;
    unsigned int _appJumpType;
    unsigned int _appShowFlag;
    _Bool _appNotShowNew;
}

+ (void)initialize;
+ (void)PBArrayAdd_appNameHK;
+ (void)PBArrayAdd_appShowFlag;
+ (void)PBArrayAdd_appJumpType;
+ (void)PBArrayAdd_appNotShowNew;
+ (void)PBArrayAdd_appIconUrlListView;
+ (void)PBArrayAdd_appInfoFlag;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_appForwardUrl;
+ (void)PBArrayAdd_appIconUrlAttView;
+ (void)PBArrayAdd_appNameTW;
+ (void)PBArrayAdd_appNameEn;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(nonatomic) unsigned int appShowFlag; // @synthesize appShowFlag=_appShowFlag;
@property(nonatomic) unsigned int appJumpType; // @synthesize appJumpType=_appJumpType;
@property(nonatomic) _Bool appNotShowNew; // @synthesize appNotShowNew=_appNotShowNew;
@property(nonatomic) unsigned int appInfoFlag; // @synthesize appInfoFlag=_appInfoFlag;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *appForwardUrl; // @synthesize appForwardUrl=_appForwardUrl;
@property(retain, nonatomic) NSString *appIconUrlListView; // @synthesize appIconUrlListView=_appIconUrlListView;
@property(retain, nonatomic) NSString *appIconUrlAttView; // @synthesize appIconUrlAttView=_appIconUrlAttView;
@property(retain, nonatomic) NSString *appNameHK; // @synthesize appNameHK=_appNameHK;
@property(retain, nonatomic) NSString *appNameTW; // @synthesize appNameTW=_appNameTW;
@property(retain, nonatomic) NSString *appNameEn; // @synthesize appNameEn=_appNameEn;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

