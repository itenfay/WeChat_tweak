//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface LiteAppDynamicModuleConfig : NSObject
{
    NSString *_moduleName;
    NSString *_className;
    NSMutableDictionary *_syncMethods;
    NSMutableDictionary *_asyncMethods;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *asyncMethods; // @synthesize asyncMethods=_asyncMethods;
@property(retain, nonatomic) NSMutableDictionary *syncMethods; // @synthesize syncMethods=_syncMethods;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void)registerMethods;
- (id)initWithModuleName:(id)arg1 forClass:(id)arg2;

@end

