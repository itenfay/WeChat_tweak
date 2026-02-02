//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RedDotManager : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCtrlInfoByFinderUsernamePath:(id)arg1 reddotPath:(id)arg2;
- (id)getCtrlInfoByFinderUsernameType:(id)arg1 type:(int)arg2;
- (void)disposeSubAccountFinderUsername:(id)arg1 reddotPath:(id)arg2;
- (_Bool)addSubAccountFinderRedDot:(id)arg1;
- (id)redDotDataByUsername:(id)arg1;
- (_Bool)updateOrInsertFinderRedDotInfoList:(id)arg1 ctrlInfoVector:(id)arg2;
- (_Bool)updateOrInsertFinderRedDotInfo:(id)arg1 ctrlInfo:(id)arg2;
- (_Bool)updateOrInsertWXRedDotInfoList:(id)arg1;
- (_Bool)updateOrInsertWXRedDotInfo:(id)arg1;
- (void)loadRedDotInfoFromDB:(id)arg1;
- (id)getRedDotCtrlInfoListWithRevokeId:(id)arg1;
- (_Bool)revokeRedDotPathInfo:(id)arg1 isOnlyWhiteList:(_Bool)arg2 whiteListTips:(id)arg3;
- (void)clearRedDotMockInfo;
- (void)saveRedDotInfoToLocal;
- (void)clearSameRevokeIdCtrlInfo:(id)arg1;
- (void)revokeRedDotByViewAction:(int)arg1 commentScene:(int)arg2;
- (void)clearSameTypeCtrlInfoType:(int)arg1;
- (_Bool)shouldShowRedDotAtPath:(id)arg1;
- (void)redDotInfoInvalidCheck;
- (int)ctrlInfoTypeAtPath:(id)arg1;
- (id)currentShowInfoAtPath:(id)arg1;
- (int)showInfoTypeAtPath:(id)arg1;
- (id)ctrlInfoWithTipsUuid:(id)arg1;
- (id)ctrlInfoWithType:(int)arg1;
- (void)resetAllRedDotData;
- (id)getAllRedDotCtrlInfo;
- (id)getAllRedDotCtrlInfoAtPath:(id)arg1;
- (void)disposeGroupTipsWithGroupId:(id)arg1;
- (_Bool)disposeRedDotIgnoreClearTypeAtPath:(id)arg1;
- (void)disposeRedDotByTipsUuid:(id)arg1 subReasonType:(int)arg2;
- (_Bool)disposeRedDotAtPath:(id)arg1 subReasonType:(int)arg2;
- (void)addNewRedDotCtrlInfo:(id)arg1;
- (id)currentCtrlInfoIgnoreAtPath:(id)arg1 ignoreNMFrequency:(_Bool)arg2;
- (id)currentCtrlInfoAtPath:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

