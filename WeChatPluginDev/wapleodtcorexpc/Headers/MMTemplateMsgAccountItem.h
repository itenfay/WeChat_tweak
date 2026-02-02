//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMTemplateMsgAccountItem
{
    NSString *_userName;
    NSString *_nickName;
    NSString *_avatarUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

