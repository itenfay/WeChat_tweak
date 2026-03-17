//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSMCryptoSM4Desc : NSObject
{
}

+ (id)GCMDecrypt:(id)arg1 desc:(id)arg2 tag:(id)arg3 iv:(id)arg4 aad:(id)arg5 error:(id *)arg6;
+ (id)GCMEncrypt:(id)arg1 desc:(id)arg2 taglen:(unsigned int)arg3 iv:(id)arg4 aad:(id)arg5 error:(id *)arg6;
+ (id)CTRDecrypt:(id)arg1 desc:(id)arg2 iv:(id)arg3 error:(id *)arg4;
+ (id)CTREncrypt:(id)arg1 desc:(id)arg2 iv:(id)arg3 error:(id *)arg4;
+ (id)CBCDecrypt:(id)arg1 desc:(id)arg2 iv:(id)arg3 error:(id *)arg4;
+ (id)CBCEncrypt:(id)arg1 desc:(id)arg2 iv:(id)arg3 error:(id *)arg4;
+ (id)ECBDecrypt:(id)arg1 desc:(id)arg2 error:(id *)arg3;
+ (id)ECBEncrypt:(id)arg1 desc:(id)arg2 error:(id *)arg3;

@end

