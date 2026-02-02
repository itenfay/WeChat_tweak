//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;

@interface WAJSContextPlugin_Crypto
{
    NSMutableDictionary *_contexts;
    NSMutableArray *_keyAliasList;
}

+ (id)getKeyTagsWithAppId:(id)arg1;
+ (id)getTagInKeyChainWithInputAlias:(id)arg1 appId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keyAliasList; // @synthesize keyAliasList=_keyAliasList;
@property(retain, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
- (id)getKeyTypeWithKeyAlgorithm:(id)arg1 keySize:(unsigned int)arg2;
- (void)computeWithId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)operateWithId:(long long)arg1 type:(id)arg2 data:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openWithId:(long long)arg1 type:(id)arg2 algorithm:(id)arg3 keyAlias:(id)arg4 publicKey:(id)arg5 signature:(id)arg6 errMsgPtr:(id *)arg7;
- (void)exchangeKeyWithPublicKey:(id)arg1 privateKeyAlias:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateKeyWithAlgorithm:(id)arg1 keySize:(unsigned int)arg2 keyAlias:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeKeyAlias:(id)arg1;
- (id)getKeys;
- (void)saveKeyAliasList;
- (void)loadKeyAliasList;
- (id)init;

@end

