//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterPkgForceUpdateListiener : NSObject
{
    _Bool _successUpdate;
    NSString *_pkgId;
    CDUnknownBlockType _didCompleteBlock;
    NSString *_errorDesc;
    GameCenterPkgForceUpdateListiener *_selfRef;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterPkgForceUpdateListiener *selfRef; // @synthesize selfRef=_selfRef;
@property(nonatomic) _Bool successUpdate; // @synthesize successUpdate=_successUpdate;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(copy, nonatomic) CDUnknownBlockType didCompleteBlock; // @synthesize didCompleteBlock=_didCompleteBlock;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (void)onWepkgNoNeedUpdate:(id)arg1 version:(id)arg2;
- (void)onWekgUpdateFailed:(id)arg1 errorStr:(id)arg2;
- (void)onPkgUpdateComplete:(id)arg1 result:(_Bool)arg2 errorStr:(id)arg3;
- (void)onWekgOperateSuccess:(id)arg1;
- (void)updatePkg;
- (id)initWithTargetPkgId:(id)arg1 didCompleteBlock:(CDUnknownBlockType)arg2;

@end

