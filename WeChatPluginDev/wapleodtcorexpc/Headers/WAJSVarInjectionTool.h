//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAJSVarInjectionTool : NSObject
{
    NSMutableArray *_configArr;
    NSString *_name;
    NSString *_baseObjJsonStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *baseObjJsonStr; // @synthesize baseObjJsonStr=_baseObjJsonStr;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)getJSString;
- (void)addVar:(id)arg1 withObject:(id)arg2;
- (void)addVar:(id)arg1 withJson:(id)arg2;
- (void)addVar:(id)arg1 withDict:(id)arg2;
- (void)addVar:(id)arg1 withString:(id)arg2;
- (void)addVar:(id)arg1 withBool:(_Bool)arg2;
- (void)addVar:(id)arg1 withNumber:(id)arg2;
- (void)setBaseObjWithJson:(id)arg1;
- (void)setBaseObjWithDict:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

