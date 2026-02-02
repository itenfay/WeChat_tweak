//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMainControll, MMExtensionCenter, MMLongLink, MMServiceCenter, NSRecursiveLock, NSString;

@interface MMContext : NSObject
{
    unsigned long long m_contextType;
    unsigned int m_uin;
    char m_uinStr[32];
    NSString *m_userName;
    unsigned long long m_userState;
    id m_mainController;
    NSRecursiveLock *m_contextLock;
    NSString *m_userMd5;
    NSString *m_userDocumentPath;
    NSString *m_userLibraryCachePath;
    basic_string_5909a4e2 m_marsContext;
    MMLongLink *m_marsLongLink;
    MMServiceCenter *m_serviceCenter;
    MMExtensionCenter *m_extensionCenter;
}

+ (id)currentUserLibraryCachePath;
+ (id)currentUserDocumentPath;
+ (id)currentUserMd5;
+ (id)currentUserName;
+ (_Bool)currentUserTypeHas:(unsigned long long)arg1;
+ (void)removeUserType:(unsigned long long)arg1;
+ (void)addUserType:(unsigned long long)arg1;
+ (unsigned long long)maxUserType;
+ (unsigned long long)currentUserType;
+ (const char *)currentUinStrForLog;
+ (_Bool)isLoggedIn;
+ (unsigned int)currentUin;
+ (void)setContext:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)pop:(id)arg1;
+ (void)push:(id)arg1;
+ (id)activeUserContext;
+ (id)rootContext;
+ (id)lastContext;
+ (id)fastCurrentContext;
+ (id)currentContext;
+ (void)initContextEnvironment;
+ (void)initialize;
+ (id)contextFromTask;
+ (id)CancelAllMMTasksNotification;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *contextLock; // @synthesize contextLock=m_contextLock;
@property(readonly, nonatomic) MMExtensionCenter *extensionCenter; // @synthesize extensionCenter=m_extensionCenter;
@property(readonly, nonatomic) MMServiceCenter *serviceCenter; // @synthesize serviceCenter=m_serviceCenter;
@property(retain, nonatomic) CMainControll *mainController; // @synthesize mainController=m_mainController;
- (id)userLibraryCachePath;
- (id)userDocumentPath;
- (id)userMd5;
- (id)userName;
- (unsigned int)uin;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isInvalidContext;
@property(readonly, nonatomic) _Bool isUserContext;
@property(readonly, nonatomic) _Bool isRootContext;
- (void)checkExistExtensionIfNeeded;
- (id)longLink;
- (void)setLongLink:(id)arg1;
- (void)setUin:(unsigned int)arg1 userName:(id)arg2;
- (id)initWithContextType:(unsigned long long)arg1;
- (id)init;
- (id)affContext;
- (id)getUinStr;
- (unsigned int)getUin;
- (void)callKeyExtensionOnMainThreadContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThreadContinuously:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtensionContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtensionContinuously:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)callKeyExtensionOnMainThread:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThread:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtension:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)unRegisterAllKeyExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)registerExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (void *)marsLongLinkName;
- (void *)marsContext;
- (void)stopNetworking;
- (void)startNetworking;
- (_Bool)enableTask;
- (id)unsafeGetServiceWrapper:(Class)arg1;
- (void)setService:(id)arg1 for:(Class)arg2;
- (void)removeService:(Class)arg1;
- (_Bool)isServiceExist:(Class)arg1;
- (id)getService:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

