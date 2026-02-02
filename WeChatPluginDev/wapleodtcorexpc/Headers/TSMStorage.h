//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSMStorage : NSObject
{
}

+ (_Bool)checkSM2PriKey:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteSM2PriKey:(id)arg1 error:(id *)arg2;
+ (_Bool)updateSM2PriKey:(id)arg1 prikey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (id)exportSM2PriKey:(id)arg1 format:(int)arg2 error:(id *)arg3;
+ (_Bool)importSM2PriKey:(id)arg1 prikey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (_Bool)checkSM2PubKey:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteSM2PubKey:(id)arg1 error:(id *)arg2;
+ (_Bool)updateSM2PubKey:(id)arg1 pubkey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (id)exportSM2PubKey:(id)arg1 format:(int)arg2 error:(id *)arg3;
+ (_Bool)importSM2PubKey:(id)arg1 pubkey:(id)arg2 format:(int)arg3 error:(id *)arg4;
+ (_Bool)generateSM2KeyPair:(id)arg1 error:(id *)arg2;
+ (_Bool)checkSM4Key:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteSM4Key:(id)arg1 error:(id *)arg2;
+ (_Bool)updateSM4Key:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)exportSM4Key:(id)arg1 error:(id *)arg2;
+ (_Bool)importSM4Key:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (_Bool)generateSM4Key:(id)arg1 error:(id *)arg2;
+ (_Bool)initWithPath:(id)arg1 appid:(id)arg2 userid:(id)arg3 error:(id *)arg4;

@end

