//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACacheFileItem : NSObject
{
    unsigned int _modifyTime;
    NSString *_filePath;
    unsigned long long _fileSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;

@end

