//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ShakeTvHistoryItem
{
    unsigned int _createTime;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_desc;
    NSString *_brandUserName;
    NSString *_deeplinkJumpUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_deeplinkJumpUrl;
+ (void)PBArrayAdd_brandUserName;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deeplinkJumpUrl; // @synthesize deeplinkJumpUrl=_deeplinkJumpUrl;
@property(retain, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

