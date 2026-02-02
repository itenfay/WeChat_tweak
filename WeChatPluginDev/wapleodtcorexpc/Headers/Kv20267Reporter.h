//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface Kv20267Reporter : NSObject
{
    unsigned int _AppVersion;
    unsigned int _AppState;
    unsigned int _SSID;
    unsigned int _ToUin;
    unsigned int _SceneID;
    unsigned int _UIArea;
    unsigned int _PositionID;
    unsigned int _ActionID;
    unsigned int _OpType;
    unsigned int _SourceID;
    unsigned int _ExpID;
    unsigned int _LogType;
    unsigned int _Time;
    unsigned int _FuncType;
    unsigned int _ContentType;
    unsigned int _ContentID;
    unsigned int _ReasonID;
    unsigned int _ClassID;
    NSString *_AppId;
    NSString *_NetworkType;
    NSString *_ActionStatus;
    NSString *_Object;
    NSString *_Status;
    NSString *_Allpath;
    NSString *_ErrType;
    NSString *_FuncID;
    NSString *_ExternInfo;
}

+ (id)createReportWithScenceID:(int)arg1 uiArea:(int)arg2 positionId:(unsigned int)arg3 actionId:(int)arg4 externInfo:(id)arg5 appId:(id)arg6;
- (void).cxx_destruct;
@property(nonatomic) unsigned int ClassID; // @synthesize ClassID=_ClassID;
@property(retain, nonatomic) NSString *ExternInfo; // @synthesize ExternInfo=_ExternInfo;
@property(nonatomic) unsigned int ReasonID; // @synthesize ReasonID=_ReasonID;
@property(nonatomic) unsigned int ContentID; // @synthesize ContentID=_ContentID;
@property(nonatomic) unsigned int ContentType; // @synthesize ContentType=_ContentType;
@property(retain, nonatomic) NSString *FuncID; // @synthesize FuncID=_FuncID;
@property(nonatomic) unsigned int FuncType; // @synthesize FuncType=_FuncType;
@property(nonatomic) unsigned int Time; // @synthesize Time=_Time;
@property(retain, nonatomic) NSString *ErrType; // @synthesize ErrType=_ErrType;
@property(nonatomic) unsigned int LogType; // @synthesize LogType=_LogType;
@property(nonatomic) unsigned int ExpID; // @synthesize ExpID=_ExpID;
@property(retain, nonatomic) NSString *Allpath; // @synthesize Allpath=_Allpath;
@property(nonatomic) unsigned int SourceID; // @synthesize SourceID=_SourceID;
@property(retain, nonatomic) NSString *Status; // @synthesize Status=_Status;
@property(retain, nonatomic) NSString *Object; // @synthesize Object=_Object;
@property(nonatomic) unsigned int OpType; // @synthesize OpType=_OpType;
@property(retain, nonatomic) NSString *ActionStatus; // @synthesize ActionStatus=_ActionStatus;
@property(nonatomic) unsigned int ActionID; // @synthesize ActionID=_ActionID;
@property(nonatomic) unsigned int PositionID; // @synthesize PositionID=_PositionID;
@property(nonatomic) unsigned int UIArea; // @synthesize UIArea=_UIArea;
@property(nonatomic) unsigned int SceneID; // @synthesize SceneID=_SceneID;
@property(nonatomic) unsigned int ToUin; // @synthesize ToUin=_ToUin;
@property(nonatomic) unsigned int SSID; // @synthesize SSID=_SSID;
@property(retain, nonatomic) NSString *NetworkType; // @synthesize NetworkType=_NetworkType;
@property(nonatomic) unsigned int AppState; // @synthesize AppState=_AppState;
@property(nonatomic) unsigned int AppVersion; // @synthesize AppVersion=_AppVersion;
@property(retain, nonatomic) NSString *AppId; // @synthesize AppId=_AppId;
- (void)report;
- (id)toString;

@end

