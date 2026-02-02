//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface GameCenterPromotedGamesFeedsItem
{
    NSArray *_usernameList;
    NSString *_detail;
    NSArray *_nicknameList;
}

+ (void)initialize;
+ (void)PBArrayAdd_nicknameList;
+ (void)PBArrayAdd_detail;
+ (void)PBArrayAdd_usernameList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nicknameList; // @synthesize nicknameList=_nicknameList;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSArray *usernameList; // @synthesize usernameList=_usernameList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

