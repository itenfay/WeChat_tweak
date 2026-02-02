//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol GC23070ReportDelegate;

@interface GC23070Report : NSObject
{
    _Bool _isExposureReported;
    unsigned long long _SceneID;
    unsigned long long _UIArea;
    unsigned long long _PositionID;
    unsigned long long _ActionID;
    unsigned long long _ActionStatus;
    unsigned long long _Ssid;
    unsigned long long _SourceID;
    NSString *_GameID;
    NSString *_ChatroomID;
    unsigned long long _MessageID;
    NSString *_GameLeval;
    NSString *_GameTitle;
    unsigned long long _UserState;
    NSString *_Username;
    unsigned long long _StayTime;
    NSMutableDictionary *_externInfoDict;
    NSString *_NoticeID;
    long long _TalkTab;
    NSString *_vcKey;
    NSString *_subKey;
    id <GC23070ReportDelegate> _reportDelegate;
}

+ (void)reportExplosureWithVc:(id)arg1 subKey:(id)arg2 reportBlock:(CDUnknownBlockType)arg3;
+ (id)dataForChatRoomScene;
+ (id)dataForFindMoreScene;
+ (id)dataForChatTabScene;
+ (id)reportModelForVc:(id)arg1 subKey:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isExposureReported; // @synthesize isExposureReported=_isExposureReported;
@property(nonatomic) __weak id <GC23070ReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(retain, nonatomic) NSString *subKey; // @synthesize subKey=_subKey;
@property(retain, nonatomic) NSString *vcKey; // @synthesize vcKey=_vcKey;
@property(nonatomic) long long TalkTab; // @synthesize TalkTab=_TalkTab;
@property(retain, nonatomic) NSString *NoticeID; // @synthesize NoticeID=_NoticeID;
@property(retain, nonatomic) NSMutableDictionary *externInfoDict; // @synthesize externInfoDict=_externInfoDict;
@property(nonatomic) unsigned long long StayTime; // @synthesize StayTime=_StayTime;
@property(retain, nonatomic) NSString *Username; // @synthesize Username=_Username;
@property(nonatomic) unsigned long long UserState; // @synthesize UserState=_UserState;
@property(retain, nonatomic) NSString *GameTitle; // @synthesize GameTitle=_GameTitle;
@property(retain, nonatomic) NSString *GameLeval; // @synthesize GameLeval=_GameLeval;
@property(nonatomic) unsigned long long MessageID; // @synthesize MessageID=_MessageID;
@property(retain, nonatomic) NSString *ChatroomID; // @synthesize ChatroomID=_ChatroomID;
@property(retain, nonatomic) NSString *GameID; // @synthesize GameID=_GameID;
@property(nonatomic) unsigned long long SourceID; // @synthesize SourceID=_SourceID;
@property(nonatomic) unsigned long long Ssid; // @synthesize Ssid=_Ssid;
@property(nonatomic) unsigned long long ActionStatus; // @synthesize ActionStatus=_ActionStatus;
@property(nonatomic) unsigned long long ActionID; // @synthesize ActionID=_ActionID;
@property(nonatomic) unsigned long long PositionID; // @synthesize PositionID=_PositionID;
@property(nonatomic) unsigned long long UIArea; // @synthesize UIArea=_UIArea;
@property(nonatomic) unsigned long long SceneID; // @synthesize SceneID=_SceneID;
- (void)configureGetDataReportBlock:(CDUnknownBlockType)arg1;
- (id)toString;
- (void)reportWithPosId:(unsigned long long)arg1 actionid:(unsigned long long)arg2 actionStatus:(unsigned long long)arg3 addtionDict:(id)arg4;
- (void)reportWithPosId:(unsigned long long)arg1 actionid:(unsigned long long)arg2 actionStatus:(unsigned long long)arg3;
- (void)reportWithPosId:(unsigned long long)arg1 actionid:(unsigned long long)arg2;
- (void)reportExplosure;
- (void)reportWithActionId:(unsigned long long)arg1;
- (void)report;
- (id)init;

@end

