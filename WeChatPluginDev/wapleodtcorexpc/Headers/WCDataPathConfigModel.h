//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCDataPathConfigModel
{
    _Bool _encrypt;
    unsigned int _action;
    NSString *_className;
    NSString *_dataPath;
    NSString *_expect;
}

+ (void)initialize;
+ (void)PBArrayAdd_encrypt;
+ (void)PBArrayAdd_expect;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_className;
- (void).cxx_destruct;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
@property(retain, nonatomic) NSString *expect; // @synthesize expect=_expect;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (id)toString;
- (id)initWithClassName:(id)arg1 withDataPath:(id)arg2;
- (id)initWithClassName:(id)arg1 withDataPath:(id)arg2 withAction:(unsigned int)arg3 withEncrypt:(_Bool)arg4;
- (id)initWithDataPath:(id)arg1 withExpect:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

