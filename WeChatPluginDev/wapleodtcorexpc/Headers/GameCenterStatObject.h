//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GameCenterStatObject : NSObject
{
    unsigned int _actionStatus;
    int _sourceScene;
    int _msgType;
    unsigned int _networkType;
    long long _scene;
    long long _uiPositionNew;
    long long _uiArea;
    long long _action;
    NSString *_appId;
    NSString *_msgId;
    NSString *_noticeId;
    NSDictionary *_externInfo;
    NSString *_Commid;
    NSString *_ClientIPV6;
    long long _StartTime;
    long long _EndTime;
    long long _CostTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long CostTime; // @synthesize CostTime=_CostTime;
@property(nonatomic) long long EndTime; // @synthesize EndTime=_EndTime;
@property(nonatomic) long long StartTime; // @synthesize StartTime=_StartTime;
@property(retain, nonatomic) NSString *ClientIPV6; // @synthesize ClientIPV6=_ClientIPV6;
@property(retain, nonatomic) NSString *Commid; // @synthesize Commid=_Commid;
@property(retain, nonatomic) NSDictionary *externInfo; // @synthesize externInfo=_externInfo;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int actionStatus; // @synthesize actionStatus=_actionStatus;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long uiArea; // @synthesize uiArea=_uiArea;
@property(nonatomic) long long uiPositionNew; // @synthesize uiPositionNew=_uiPositionNew;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) int uiPosition; // @dynamic uiPosition;
- (id)to13384;
- (id)to12909;
- (int)getReportNetWorkType;
- (void)initStatField;
- (id)initFor13384;
- (id)initFor12909;

@end

