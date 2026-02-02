//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface MBWAUnpackedPackageInfo : NSObject
{
    NSMutableSet *_setPackageFilePath;
    NSMutableSet *_setCacheFileInfoKey;
}

+ (id)packageKeyWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setCacheFileInfoKey; // @synthesize setCacheFileInfoKey=_setCacheFileInfoKey;
@property(retain, nonatomic) NSMutableSet *setPackageFilePath; // @synthesize setPackageFilePath=_setPackageFilePath;
- (id)init;

@end

