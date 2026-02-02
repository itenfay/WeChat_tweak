//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WePkgPackage;

@interface WeAvatarResPackageWePkgImpl : NSObject
{
    CDUnknownBlockType successBlock;
    CDUnknownBlockType failBlock;
    WePkgPackage *_pkg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WePkgPackage *pkg; // @synthesize pkg=_pkg;
- (void)onWepkgNoNeedUpdate:(id)arg1 version:(id)arg2;
- (void)onWekgUpdateFailed:(id)arg1 errorStr:(id)arg2;
- (void)onWekgOperateSuccess:(id)arg1;
- (id)getCodePackageMD5;
- (id)getCodePackagePath;
- (id)getCodePackageData;
- (void)tryUpdatePackage:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkPackageExist;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

