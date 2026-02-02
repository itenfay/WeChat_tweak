//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppItemOperation
{
    _Bool _excuteSync;
    _Bool _isOperating;
    unsigned int _appType;
    unsigned int _opType;
    unsigned int _retryCount;
    unsigned int _scene;
    unsigned int _isFromBackground;
    unsigned int _recordType;
    unsigned int _reason;
    unsigned int _commuseFlag;
    NSString *_usrname;
    NSString *_sessionId;
    NSString *_appMd5Str;
}

+ (void)initialize;
+ (void)PBArrayAdd_recordType;
+ (void)PBArrayAdd_isFromBackground;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_opType;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_usrname;
- (void).cxx_destruct;
@property(nonatomic) unsigned int commuseFlag; // @synthesize commuseFlag=_commuseFlag;
@property(nonatomic) _Bool isOperating; // @synthesize isOperating=_isOperating;
@property(nonatomic) _Bool excuteSync; // @synthesize excuteSync=_excuteSync;
@property(copy, nonatomic) NSString *appMd5Str; // @synthesize appMd5Str=_appMd5Str;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int recordType; // @synthesize recordType=_recordType;
@property(nonatomic) unsigned int isFromBackground; // @synthesize isFromBackground=_isFromBackground;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *usrname; // @synthesize usrname=_usrname;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

