//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCommonCgiUploadInfo : NSObject
{
    unsigned int _sectionIndex;
    unsigned int _sectionOffset;
    unsigned int _sectionLength;
    long long _scene;
    long long _fileType;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sectionLength; // @synthesize sectionLength=_sectionLength;
@property(nonatomic) unsigned int sectionOffset; // @synthesize sectionOffset=_sectionOffset;
@property(nonatomic) unsigned int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)description;

@end

