//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WCAppContext;

@interface WCModuleCenter : NSObject
{
    WCAppContext *_context;
    NSMutableArray *_moduleClasseList;
    NSMutableDictionary *_modulesMap;
    NSMutableArray *_moduleList;
}

+ (id)center;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *moduleList; // @synthesize moduleList=_moduleList;
@property(readonly, nonatomic) NSMutableDictionary *modulesMap; // @synthesize modulesMap=_modulesMap;
@property(readonly, nonatomic) NSMutableArray *moduleClasseList; // @synthesize moduleClasseList=_moduleClasseList;
@property(retain, nonatomic) WCAppContext *context; // @synthesize context=_context;
- (id)getModuleForClass:(Class)arg1;
- (void)p_loadModule:(Class)arg1 withCompleteAction:(CDUnknownBlockType)arg2;
- (void)moduleLoadWithCompleteAction:(CDUnknownBlockType)arg1;
- (void)registerModuleAndInit:(Class)arg1;
- (void)p_initModule:(Class)arg1;
- (void)moduleInit;
- (void)registerModule:(Class)arg1;
- (id)init;

@end

