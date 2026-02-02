//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRKStreamCryptor : NSObject
{
}

+ (_Bool)cryptFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)cryptData:(char *)arg1 size:(int)arg2 atOffset:(int)arg3;

@end

