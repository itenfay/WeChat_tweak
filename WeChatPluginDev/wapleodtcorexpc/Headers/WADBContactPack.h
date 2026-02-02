//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WADBContactPack : NSObject
{
    unsigned int _uiLastUpdateAppVersionInfoTime;
    unsigned int _uiLastLaunchAppTime;
    NSString *_aliasName;
    NSString *_nickName;
    NSString *_fullPinYin;
    NSString *_headHDImageURL;
    NSString *_headImageURL;
    NSString *_signature;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_uiLastLaunchAppTime;
+ (void)PBArrayAdd_uiLastUpdateAppVersionInfoTime;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_headImageURL;
+ (void)PBArrayAdd_headHDImageURL;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_aliasName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiLastLaunchAppTime; // @synthesize uiLastLaunchAppTime=_uiLastLaunchAppTime;
@property(nonatomic) unsigned int uiLastUpdateAppVersionInfoTime; // @synthesize uiLastUpdateAppVersionInfoTime=_uiLastUpdateAppVersionInfoTime;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(retain, nonatomic) NSString *headHDImageURL; // @synthesize headHDImageURL=_headHDImageURL;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin=_fullPinYin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

