//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LensIcon, LensPackage, NSString, PersonalDesigner;

@interface EmoticonLensInfo
{
    NSString *_lensId;
    NSString *_name;
    PersonalDesigner *_designer;
    LensPackage *_package;
    LensIcon *_iconInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_iconInfo;
+ (void)PBArrayAdd_package;
+ (void)PBArrayAdd_designer;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_lensId;
- (void).cxx_destruct;
@property(retain, nonatomic) LensIcon *iconInfo; // @synthesize iconInfo=_iconInfo;
@property(retain, nonatomic) LensPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) PersonalDesigner *designer; // @synthesize designer=_designer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

