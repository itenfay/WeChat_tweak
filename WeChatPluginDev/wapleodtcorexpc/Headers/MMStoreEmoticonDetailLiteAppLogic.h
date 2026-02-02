//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonStoreReportInfo, MMLiteAppViewController, NSString, WCDataItem;

@interface MMStoreEmoticonDetailLiteAppLogic : NSObject
{
    CDUnknownBlockType _finishInstallBlock;
    CDUnknownBlockType _finishUninstallBlock;
    WCDataItem *_timeLineData;
    EmoticonStoreReportInfo *_reportInfo;
    long long _extranceScene;
    NSString *_appid;
    NSString *_pid;
    MMLiteAppViewController *_viewController;
}

+ (id)createLogicWithPid:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak MMLiteAppViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long extranceScene; // @synthesize extranceScene=_extranceScene;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCDataItem *timeLineData; // @synthesize timeLineData=_timeLineData;
@property(copy, nonatomic) CDUnknownBlockType finishUninstallBlock; // @synthesize finishUninstallBlock=_finishUninstallBlock;
@property(copy, nonatomic) CDUnknownBlockType finishInstallBlock; // @synthesize finishInstallBlock=_finishInstallBlock;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (_Bool)isRewardClose:(unsigned long long)arg1 callbackId:(int)arg2;
- (void)reportEmoticonStoreActionIfNeeded:(unsigned long long)arg1;
- (_Bool)onReportEmoticonStoreActionIfNeeded:(id)arg1;
- (_Bool)onUnInstallFinish:(id)arg1;
- (_Bool)onInstallFinish:(id)arg1;
- (_Bool)onDetailDataChange:(id)arg1;
- (void)createStore;
- (id)initWithPid:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void)dealloc;

@end

