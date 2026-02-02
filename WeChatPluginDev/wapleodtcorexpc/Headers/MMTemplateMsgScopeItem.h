//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMTemplateMsgScopeItem
{
    _Bool _isScopeRecv;
    _Bool _isShowInSetting;
    _Bool _isBan;
    _Bool _isAudioTemplate;
    _Bool _isAcceptWithAudio;
    _Bool _isForceNotifyTemplate;
    _Bool _isAcceptWithForceNotify;
    unsigned int _maxValidTime;
    unsigned int _templateType;
    unsigned int _tid;
    unsigned int _businessType;
    NSString *_scopeID;
    NSString *_scopeName;
    NSMutableArray *_kvList;
    NSString *_audioTemplateUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_isAcceptWithForceNotify;
+ (void)PBArrayAdd_isForceNotifyTemplate;
+ (void)PBArrayAdd_audioTemplateUrl;
+ (void)PBArrayAdd_isAcceptWithAudio;
+ (void)PBArrayAdd_isAudioTemplate;
+ (void)PBArrayAdd_isBan;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_kvList;
+ (void)PBArrayAdd_maxValidTime;
+ (void)PBArrayAdd_isShowInSetting;
+ (void)PBArrayAdd_isScopeRecv;
+ (void)PBArrayAdd_scopeName;
+ (void)PBArrayAdd_scopeID;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAcceptWithForceNotify; // @synthesize isAcceptWithForceNotify=_isAcceptWithForceNotify;
@property(nonatomic) _Bool isForceNotifyTemplate; // @synthesize isForceNotifyTemplate=_isForceNotifyTemplate;
@property(retain, nonatomic) NSString *audioTemplateUrl; // @synthesize audioTemplateUrl=_audioTemplateUrl;
@property(nonatomic) _Bool isAcceptWithAudio; // @synthesize isAcceptWithAudio=_isAcceptWithAudio;
@property(nonatomic) _Bool isAudioTemplate; // @synthesize isAudioTemplate=_isAudioTemplate;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) _Bool isBan; // @synthesize isBan=_isBan;
@property(nonatomic) unsigned int tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSMutableArray *kvList; // @synthesize kvList=_kvList;
@property(nonatomic) unsigned int maxValidTime; // @synthesize maxValidTime=_maxValidTime;
@property(nonatomic) _Bool isShowInSetting; // @synthesize isShowInSetting=_isShowInSetting;
@property(nonatomic) _Bool isScopeRecv; // @synthesize isScopeRecv=_isScopeRecv;
@property(copy, nonatomic) NSString *scopeName; // @synthesize scopeName=_scopeName;
@property(copy, nonatomic) NSString *scopeID; // @synthesize scopeID=_scopeID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

