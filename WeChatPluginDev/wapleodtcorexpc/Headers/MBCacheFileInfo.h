//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAPackageUnpackLib;

@interface MBCacheFileInfo : NSObject
{
    NSString *bizName;
    NSString *subPath;
    unsigned long long offset;
    unsigned long long size;
    WAPackageUnpackLib *pkgLib;
    NSString *_packageFilePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *packageFilePath; // @synthesize packageFilePath=_packageFilePath;
@property(retain, nonatomic) WAPackageUnpackLib *pkgLib; // @synthesize pkgLib;
@property(nonatomic) unsigned long long size; // @synthesize size;
@property(nonatomic) unsigned long long offset; // @synthesize offset;
@property(copy, nonatomic) NSString *subPath; // @synthesize subPath;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName;

@end

