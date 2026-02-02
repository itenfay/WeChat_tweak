//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAAppTask, WAContact, WAPackageSweeperLogic, WAProvideApiConfig;

@interface WAProvideApiHelper : NSObject
{
    _Bool _isTempAppId;
    WAProvideApiConfig *_config;
    WAContact *_waContact;
    WAAppTask *_task;
    WAPackageSweeperLogic *_sweepLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPackageSweeperLogic *sweepLogic; // @synthesize sweepLogic=_sweepLogic;
@property(nonatomic) _Bool isTempAppId; // @synthesize isTempAppId=_isTempAppId;
@property(retain, nonatomic) WAAppTask *task; // @synthesize task=_task;
@property(retain, nonatomic) WAContact *waContact; // @synthesize waContact=_waContact;
@property(retain, nonatomic) WAProvideApiConfig *config; // @synthesize config=_config;
- (void)stopUseApi;
- (void)invokeApi:(id)arg1 Param:(id)arg2 CallbackId:(unsigned int)arg3;
- (_Bool)startUseApi;
- (void)sweepData;
- (void)fillDefaultConfig;
- (unsigned long long)getNameIndex;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

