//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ZstdUtil : NSObject
{
}

+ (_Bool)decompressFile:(id)arg1 toPath:(id)arg2;
+ (_Bool)compressFile:(id)arg1 toPath:(id)arg2 withOption:(unsigned long long)arg3;
+ (_Bool)compressFile:(id)arg1 toPath:(id)arg2;
+ (id)decompressData:(id)arg1;
+ (id)compressData:(id)arg1 withOption:(unsigned long long)arg2;
+ (id)compressData:(id)arg1;

@end

