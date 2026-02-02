//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ChatRoomToolWeAppInfo
{
    NSString *_userName;
    NSString *_appUserName;
    NSString *_appPagePath;
    NSString *_appNickName;
    NSString *_appIconUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_appPagePath;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(retain, nonatomic) NSString *appNickName; // @synthesize appNickName=_appNickName;
@property(retain, nonatomic) NSString *appPagePath; // @synthesize appPagePath=_appPagePath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)copyFromDBWeAppInfo:(id)arg1;
- (id)genDBContactChatRoomToolWeApp;
- (void)copyFromOtherWeAppInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

