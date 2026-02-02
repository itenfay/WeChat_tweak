//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NewLifeCallbackProcessor : NSObject
{
    NSMutableDictionary *_command2CallbackGenerator;
    NSMutableDictionary *_command2ApiList;
}

+ (Class)generatorClassForCommand:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *command2ApiList; // @synthesize command2ApiList=_command2ApiList;
@property(retain, nonatomic) NSMutableDictionary *command2CallbackGenerator; // @synthesize command2CallbackGenerator=_command2CallbackGenerator;
- (id)createGeneratorForCommand:(id)arg1;
- (id)generatorForCommand:(id)arg1;
- (void)unregisterCommonApiForAllCommands:(id)arg1;
- (void)unregisterCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)registerCommonApi:(id)arg1 forCommandList:(id)arg2;
- (id)init;

@end

