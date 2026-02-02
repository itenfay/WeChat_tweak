//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface Kv20488Reporter : NSObject
{
    unsigned int _SceneID;
    unsigned int _UIArea;
    unsigned int _PositionID;
    unsigned int _ActionID;
    unsigned int _SourceID;
    unsigned int _GiftID;
    unsigned int _GiftType;
    unsigned int _FromAccountType;
    unsigned int _ToAccountType;
    unsigned int _RedDot;
    unsigned int _TotalNum;
    unsigned int _Time;
    NSString *_GameID;
    NSString *_ActionStatus;
    NSString *_FromUsername;
    NSString *_ToUsername;
    NSString *_SessionId;
    NSDictionary *_ExternInfo;
    long long _GameType;
    long long _ssid;
}

+ (void)reportConversationExpose:(id)arg1;
+ (void)reportChatInfoDetailViewBlackListItem:(unsigned int)arg1 actionId:(int)arg2 sessionId:(id)arg3 sourceId:(unsigned int)arg4 actionStatus:(id)arg5 roleType:(unsigned int)arg6;
+ (void)reportChatInfoDetailViewItem:(unsigned int)arg1 actionId:(int)arg2 sessionId:(id)arg3 sourceId:(unsigned int)arg4 actionStatus:(id)arg5;
+ (void)reportChattingViewItem:(unsigned int)arg1 actionId:(int)arg2 sessionId:(id)arg3 sourceId:(unsigned int)arg4 actionStatus:(id)arg5;
+ (id)getChatViewReporter:(int)arg1 uiArea:(int)arg2 pos:(unsigned int)arg3 actionId:(int)arg4 sessionId:(id)arg5 sourceId:(unsigned int)arg6 actionStatus:(id)arg7;
+ (void)reportConversationItem:(unsigned int)arg1 actionId:(int)arg2 totalNum:(unsigned int)arg3 conversation:(id)arg4 sourceId:(unsigned int)arg5 actionStatus:(id)arg6 extInfoDic:(id)arg7;
+ (id)createReporter:(int)arg1 uiArea:(int)arg2 positionId:(unsigned int)arg3 actionId:(int)arg4 sourceId:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long ssid; // @synthesize ssid=_ssid;
@property(nonatomic) long long GameType; // @synthesize GameType=_GameType;
@property(nonatomic) unsigned int Time; // @synthesize Time=_Time;
@property(retain, nonatomic) NSDictionary *ExternInfo; // @synthesize ExternInfo=_ExternInfo;
@property(retain, nonatomic) NSString *SessionId; // @synthesize SessionId=_SessionId;
@property(nonatomic) unsigned int TotalNum; // @synthesize TotalNum=_TotalNum;
@property(nonatomic) unsigned int RedDot; // @synthesize RedDot=_RedDot;
@property(retain, nonatomic) NSString *ToUsername; // @synthesize ToUsername=_ToUsername;
@property(nonatomic) unsigned int ToAccountType; // @synthesize ToAccountType=_ToAccountType;
@property(retain, nonatomic) NSString *FromUsername; // @synthesize FromUsername=_FromUsername;
@property(nonatomic) unsigned int FromAccountType; // @synthesize FromAccountType=_FromAccountType;
@property(nonatomic) unsigned int GiftType; // @synthesize GiftType=_GiftType;
@property(nonatomic) unsigned int GiftID; // @synthesize GiftID=_GiftID;
@property(retain, nonatomic) NSString *ActionStatus; // @synthesize ActionStatus=_ActionStatus;
@property(retain, nonatomic) NSString *GameID; // @synthesize GameID=_GameID;
@property(nonatomic) unsigned int SourceID; // @synthesize SourceID=_SourceID;
@property(nonatomic) unsigned int ActionID; // @synthesize ActionID=_ActionID;
@property(nonatomic) unsigned int PositionID; // @synthesize PositionID=_PositionID;
@property(nonatomic) unsigned int UIArea; // @synthesize UIArea=_UIArea;
@property(nonatomic) unsigned int SceneID; // @synthesize SceneID=_SceneID;
- (id)toString;
- (void)report;

@end

