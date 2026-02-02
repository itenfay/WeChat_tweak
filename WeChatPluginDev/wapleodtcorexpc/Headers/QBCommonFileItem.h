//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBCommonFileItem : NSObject
{
    NSString *_moduleName;
    NSString *_fileName;
    NSString *_fileUrl;
    NSString *_fileContentMd5;
    NSString *_fileContentSignature;
    NSString *_fileEncryptAlgorithm;
}

+ (id)itemWithInfo:(id)arg1;
+ (id)itemWupObj:(id)arg1 moduleName:(id)arg2;
@property(retain, nonatomic) NSString *fileEncryptAlgorithm; // @synthesize fileEncryptAlgorithm=_fileEncryptAlgorithm;
@property(retain, nonatomic) NSString *fileContentSignature; // @synthesize fileContentSignature=_fileContentSignature;
@property(retain, nonatomic) NSString *fileContentMd5; // @synthesize fileContentMd5=_fileContentMd5;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;

@end

