//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBPackageLogic, NSString;
@protocol IWeAvatarResPackageLogic;

@interface WeAvatarCodePackageWxapkgLogic : NSObject
{
    MBPackageLogic *_pkg;
    id <IWeAvatarResPackageLogic> _resLogic;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IWeAvatarResPackageLogic> resLogic; // @synthesize resLogic=_resLogic;
@property(retain, nonatomic) MBPackageLogic *pkg; // @synthesize pkg=_pkg;
- (id)getFileData:(id)arg1;
- (_Bool)copyToDestPath:(id)arg1 fromSrcData:(id)arg2;
- (id)getResPackageData;
- (void)unpack;
- (void)dealloc;
- (id)initWithResPackage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

