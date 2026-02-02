//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBPackageLogic, NSString;

@interface WeAvatarResPackageWeAppImpl : NSObject
{
    _Bool _isDownloadFinish;
    MBPackageLogic *_pkg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDownloadFinish; // @synthesize isDownloadFinish=_isDownloadFinish;
@property(retain, nonatomic) MBPackageLogic *pkg; // @synthesize pkg=_pkg;
- (id)getCodePackageMD5;
- (id)getCodePackagePath;
- (id)getCodePackageData;
- (void)tryUpdatePackage:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkPackageExist;
- (void)dealloc;
- (id)initWithConfString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

