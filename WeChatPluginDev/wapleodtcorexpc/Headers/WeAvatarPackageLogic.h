//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol IWeAvatarCodePackageLogic, IWeAvatarResPackageLogic;

@interface WeAvatarPackageLogic : NSObject
{
    _Bool _isDebugMode;
    NSObject<IWeAvatarResPackageLogic> *_resPackageLogic;
    NSObject<IWeAvatarCodePackageLogic> *_codePackageLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<IWeAvatarCodePackageLogic> *codePackageLogic; // @synthesize codePackageLogic=_codePackageLogic;
@property(retain, nonatomic) NSObject<IWeAvatarResPackageLogic> *resPackageLogic; // @synthesize resPackageLogic=_resPackageLogic;
@property(readonly, nonatomic) _Bool isDebugMode; // @synthesize isDebugMode=_isDebugMode;
- (id)getFileData:(id)arg1;
- (void)checkUpdate:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)unpack;
- (_Bool)checkPackageExist;
- (void)dealloc;
- (id)init;

@end

