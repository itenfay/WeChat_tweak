//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AuthEventHandler
{
    struct ec_key_st *ecdh_key;
    unsigned int ct1;
}

- (void)OnNonDisasterAuthResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnDisasterAuthResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)changeForMessage:(id)arg1;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)dealloc;
- (id)init;

@end

