//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WAJSContextPlugin_GlobalState
{
    NSMutableDictionary *_dicState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicState; // @synthesize dicState=_dicState;
- (id)getGlobalStateValueWithKey:(id)arg1;
- (void)setGlobalStateWithKey:(id)arg1 value:(id)arg2;
- (id)init;

@end

