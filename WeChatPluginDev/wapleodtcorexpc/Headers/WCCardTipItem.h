//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardTipItem
{
    unsigned int _tipType;
    unsigned int _unreadCount;
    unsigned int _layoutEndTime;
    NSString *_layoutTip;
    NSString *_shareUsername;
}

+ (void)initialize;
+ (void)PBArrayAdd_shareUsername;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_layoutTip;
+ (void)PBArrayAdd_unreadCount;
+ (void)PBArrayAdd_tipType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareUsername; // @synthesize shareUsername=_shareUsername;
@property(nonatomic) unsigned int layoutEndTime; // @synthesize layoutEndTime=_layoutEndTime;
@property(retain, nonatomic) NSString *layoutTip; // @synthesize layoutTip=_layoutTip;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) unsigned int tipType; // @synthesize tipType=_tipType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

