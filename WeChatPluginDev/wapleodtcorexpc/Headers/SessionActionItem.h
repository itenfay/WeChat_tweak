//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SessionActionItem
{
    _Bool _bNotifyOpen;
    unsigned int _uiEnterTime;
    unsigned int _uiStayTime;
    unsigned int _uiStayWebViewTime;
    unsigned int _uiSessionType;
    unsigned int _uiMemberCount;
    unsigned int _uiUnreadCount;
    NSString *_nsUserName;
    NSString *_key;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsUserName;
+ (void)PBArrayAdd_uiStayWebViewTime;
+ (void)PBArrayAdd_uiUnreadCount;
+ (void)PBArrayAdd_bNotifyOpen;
+ (void)PBArrayAdd_uiMemberCount;
+ (void)PBArrayAdd_uiSessionType;
+ (void)PBArrayAdd_uiStayTime;
+ (void)PBArrayAdd_uiEnterTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName=_nsUserName;
@property(nonatomic) unsigned int uiUnreadCount; // @synthesize uiUnreadCount=_uiUnreadCount;
@property(nonatomic) _Bool bNotifyOpen; // @synthesize bNotifyOpen=_bNotifyOpen;
@property(nonatomic) unsigned int uiMemberCount; // @synthesize uiMemberCount=_uiMemberCount;
@property(nonatomic) unsigned int uiSessionType; // @synthesize uiSessionType=_uiSessionType;
@property(nonatomic) unsigned int uiStayWebViewTime; // @synthesize uiStayWebViewTime=_uiStayWebViewTime;
@property(nonatomic) unsigned int uiStayTime; // @synthesize uiStayTime=_uiStayTime;
@property(nonatomic) unsigned int uiEnterTime; // @synthesize uiEnterTime=_uiEnterTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

