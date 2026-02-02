//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSMCryptoSM2Desc : NSObject
{
}

+ (_Bool)verify:(int)arg1 desc:(id)arg2 msg:(id)arg3 uid:(id)arg4 sig:(id)arg5 error:(id *)arg6;
+ (id)sign:(int)arg1 desc:(id)arg2 msg:(id)arg3 uid:(id)arg4 error:(id *)arg5;
+ (id)decrypt:(int)arg1 desc:(id)arg2 cipher:(id)arg3 error:(id *)arg4;
+ (id)encrypt:(int)arg1 desc:(id)arg2 plain:(id)arg3 error:(id *)arg4;

@end

