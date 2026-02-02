//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext, NSMutableDictionary;
@protocol MMIlinkCheckResourceMgrDelegate;

@interface MMIlinkCheckResourceMgr : NSObject
{
    MMContext *m_context;
    struct NetworkManagerBridge *network_;
    struct MMIlinkCheckResourceNetworkCallback *network_callback_;
    id <MMIlinkCheckResourceMgrDelegate> _delegate;
    NSMutableDictionary *_checkingResourceDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *checkingResourceDic; // @synthesize checkingResourceDic=_checkingResourceDic;
@property(nonatomic) __weak id <MMIlinkCheckResourceMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onReceiveAppMessageEvent:(const void *)arg1;
- (void)onCheckResourceComplete:(unsigned int)arg1 resp:(const void *)arg2 errorCode:(int)arg3;
- (void)callDelegateOnPeriodCheckResource:(id)arg1 resourcesDic:(id)arg2 noUpdateProjectIds:(id)arg3 errorProjectIds:(id)arg4 errorType:(unsigned long long)arg5 errorCode:(int)arg6 timeStamp:(unsigned int)arg7 nextUpdateInterval:(int)arg8 isFinish:(int)arg9 newOffset:(id)arg10;
- (void)callDelegateOnBatchCheckResource:(id)arg1 resourcesDic:(id)arg2 blockTimeDic:(id)arg3 noUpdateProjectIds:(id)arg4 errorProjectIds:(id)arg5 errorType:(unsigned long long)arg6 errorCode:(int)arg7 timeStamp:(unsigned int)arg8;
- (id)getResourceList:(id)arg1;
- (void)setLocalResource:(id)arg1 localResourcesMap:(id)arg2;
- (void)setProjectParameter:(id)arg1 localProjectParams:(id)arg2;
- (void)setAppParameter:(id)arg1;
- (void)createRequest:(const char *)arg1 size:(unsigned long long)arg2 scene:(int)arg3 type:(unsigned long long)arg4 extInfo:(id)arg5 projectIds:(id)arg6;
- (void)specifiedCheckUDRResourceUpdate:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)periodCheckUDRResourceUpdate:(id)arg1 offset:(id)arg2;
- (void)batchCheckUDRResourceUpdate:(id)arg1;
- (void)checkUDRResourceUpdate:(id)arg1;
- (void)batchCheckResourceUpdate:(id)arg1;
- (void)checkResourceUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithReceiveCheckResourceIdentify;

@end

