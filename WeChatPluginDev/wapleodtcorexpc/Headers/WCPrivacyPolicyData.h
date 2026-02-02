//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPrivacyPolicyData : NSObject
{
    unsigned int _updateTime;
    NSString *_birthday;
}

+ (void)testClearAllData;
+ (void)saveBirthday:(id)arg1 userName:(id)arg2;
+ (id)loadDataWithUserName:(id)arg1;
+ (id)filePathWithUserName:(id)arg1;
+ (id)rootPath;
+ (void)initialize;
+ (void)PBArrayAdd_birthday;
+ (void)PBArrayAdd_updateTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
- (id)jsonDesc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

