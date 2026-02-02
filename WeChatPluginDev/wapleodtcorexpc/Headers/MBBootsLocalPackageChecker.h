//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MBBootsLocalPackageChecker : NSObject
{
    NSString *_bizName;
    NSString *_fileName;
    NSString *_originalName;
    NSString *_version;
    NSString *_md5;
    NSString *_mbBundleFilePath;
    NSString *_mbHardcodeWxaPkgFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mbHardcodeWxaPkgFilePath; // @synthesize mbHardcodeWxaPkgFilePath=_mbHardcodeWxaPkgFilePath;
@property(retain, nonatomic) NSString *mbBundleFilePath; // @synthesize mbBundleFilePath=_mbBundleFilePath;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
- (id)getBrotiData:(id)arg1;
- (_Bool)copyHardcodePkg;
- (void)makeWxaPkgDir:(id)arg1;
- (id)getWxaPkgFilePath;
- (id)process;
- (id)initWithBizName:(id)arg1 hardCodeFileName:(id)arg2 md5:(id)arg3 version:(id)arg4 suffix:(id)arg5;

@end

