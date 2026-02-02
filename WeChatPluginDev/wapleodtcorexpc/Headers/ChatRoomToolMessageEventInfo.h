//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface ChatRoomToolMessageEventInfo
{
    unsigned int _eventTime;
    unsigned int _createTime;
    unsigned int _nReply;
    unsigned int _isDispose;
    NSString *_eventID;
    NSString *_userName;
    NSString *_title;
    NSString *_desc;
    NSString *_appUserName;
    NSString *_appPath;
    NSString *_customInfo;
    long long _nRelatedMesSvrID;
    NSString *_creatorUserName;
    NSString *_manager;
    NSMutableDictionary *_extInfo;
    NSString *_nsNewXMLScene;
}

+ (id)genMessageEventInfoWithUserName:(id)arg1 andEventID:(id)arg2;
+ (id)genMessageEventInfoMsgWrap:(id)arg1;
+ (id)GenLocalEventIdBySvrId:(long long)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isDispose;
+ (void)PBArrayAdd_nReply;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_manager;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_creatorUserName;
+ (void)PBArrayAdd_nRelatedMesSvrID;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_eventTime;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_eventID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nsNewXMLScene; // @synthesize nsNewXMLScene=_nsNewXMLScene;
@property(nonatomic) unsigned int isDispose; // @synthesize isDispose=_isDispose;
@property(nonatomic) unsigned int nReply; // @synthesize nReply=_nReply;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSString *creatorUserName; // @synthesize creatorUserName=_creatorUserName;
@property(nonatomic) long long nRelatedMesSvrID; // @synthesize nRelatedMesSvrID=_nRelatedMesSvrID;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSString *appPath; // @synthesize appPath=_appPath;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void)copyFromDBMessageEventInfo:(id)arg1;
- (id)genDBContactChatRoomToolMessageEvent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDisplay;
- (id)replyInfo;
- (_Bool)hasReplyInfo;
- (_Bool)canRevoke;
- (_Bool)isValid;
- (void)setCheckTodo;
- (_Bool)hasCheckTodo;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

