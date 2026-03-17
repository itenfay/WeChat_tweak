//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBWupEncrypt : NSObject
{
}

+ (id)sharedInstance;
- (id)encryptAESKeyWithRSA1024:(id)arg1;
- (id)generateAESKey;
- (void)removeWupTokenInfo;
- (id)getWupTokenInfo;
- (void)saveWupToken:(id)arg1;
- (id)keyAppendToWupRequestUrl:(id)arg1;
- (id)generateEncryptKey:(_Bool)arg1;

@end

