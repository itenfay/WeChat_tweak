//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAAppBrandNotifyModuleInfo : NSObject
{
    NSMutableArray *_arrModuleList;
    NSString *_enteranceModule;
    NSMutableDictionary *_dicModuleState;
    NSMutableArray *_chatToolList;
}

+ (void)initialize;
+ (void)PBArrayAdd_chatToolList;
+ (void)PBArrayAdd_dicModuleState;
+ (void)PBArrayAdd_enteranceModule;
+ (void)PBArrayAdd_arrModuleList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *chatToolList; // @synthesize chatToolList=_chatToolList;
@property(retain, nonatomic) NSMutableDictionary *dicModuleState; // @synthesize dicModuleState=_dicModuleState;
@property(retain, nonatomic) NSString *enteranceModule; // @synthesize enteranceModule=_enteranceModule;
@property(retain, nonatomic) NSMutableArray *arrModuleList; // @synthesize arrModuleList=_arrModuleList;
- (id)moduleListContainJSONDictionary;
- (_Bool)isUseModule;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

