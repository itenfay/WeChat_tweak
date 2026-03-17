//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SecureNotify : NSObject
{
}

+ (id)decodeDataWithEncryptAlgo:(unsigned int)arg1 encryptVer:(unsigned int)arg2 encryptSalt:(unsigned int)arg3 compressAlgo:(unsigned int)arg4 compressVer:(unsigned int)arg5 compressLen:(unsigned int)arg6 checkSum:(unsigned int)arg7 data:(id)arg8;
+ (id)decodeSecureNotifyData:(char *)arg1 length:(unsigned long long)arg2;
+ (id)decodeSecureActionNotifyData:(id)arg1 extraData:(id)arg2;

@end

