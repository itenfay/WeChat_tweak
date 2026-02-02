//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WATemplateMsgBanWrap
{
    _Bool _isBanned;
    NSString *_appUsername;
    NSString *_appNickname;
    NSString *_avatarURLString;
}

+ (void)initialize;
+ (void)PBArrayAdd_isBanned;
+ (void)PBArrayAdd_avatarURLString;
+ (void)PBArrayAdd_appNickname;
+ (void)PBArrayAdd_appUsername;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned=_isBanned;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *appNickname; // @synthesize appNickname=_appNickname;
@property(copy, nonatomic) NSString *appUsername; // @synthesize appUsername=_appUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

