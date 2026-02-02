//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MZipUtil : NSObject
{
}

+ (id)dateWithDosDate:(unsigned long long)arg1;
+ (_Bool)UnZipFile:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)UnZipFile:(id)arg1 toPath:(id)arg2;

@end

