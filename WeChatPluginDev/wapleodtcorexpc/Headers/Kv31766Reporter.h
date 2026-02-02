//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface Kv31766Reporter : NSObject
{
    unsigned int _AppVersion;
    unsigned int _AppState;
    unsigned int _SSID;
    NSString *_AppId;
    unsigned long long _ClassID;
    unsigned long long _SceneID;
    unsigned long long _UIArea;
    unsigned long long _PositionID;
    unsigned long long _ActionID;
    unsigned long long _FuncType;
    NSString *_FuncID;
    NSDictionary *_ExternInfo;
}

+ (void)reportForGameReview:(id)arg1 appVersion:(unsigned int)arg2 appState:(unsigned int)arg3 positionID:(unsigned long long)arg4 actionID:(unsigned long long)arg5 reportData:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *ExternInfo; // @synthesize ExternInfo=_ExternInfo;
@property(nonatomic) unsigned int SSID; // @synthesize SSID=_SSID;
@property(retain, nonatomic) NSString *FuncID; // @synthesize FuncID=_FuncID;
@property(nonatomic) unsigned long long FuncType; // @synthesize FuncType=_FuncType;
@property(nonatomic) unsigned long long ActionID; // @synthesize ActionID=_ActionID;
@property(nonatomic) unsigned long long PositionID; // @synthesize PositionID=_PositionID;
@property(nonatomic) unsigned long long UIArea; // @synthesize UIArea=_UIArea;
@property(nonatomic) unsigned long long SceneID; // @synthesize SceneID=_SceneID;
@property(nonatomic) unsigned long long ClassID; // @synthesize ClassID=_ClassID;
@property(nonatomic) unsigned int AppState; // @synthesize AppState=_AppState;
@property(nonatomic) unsigned int AppVersion; // @synthesize AppVersion=_AppVersion;
@property(retain, nonatomic) NSString *AppId; // @synthesize AppId=_AppId;
- (void)report;

@end

