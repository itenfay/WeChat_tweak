//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface lzCommCacheFileData : NSObject
{
    _Bool _bHidden;
    _Bool _bIgnor;
    NSString *_filePath;
    NSDate *_createDate;
    NSDate *_modifyDate;
    long long _fileSize;
    NSString *_fileName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIgnor; // @synthesize bIgnor=_bIgnor;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) _Bool bHidden; // @synthesize bHidden=_bHidden;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSDate *modifyDate; // @synthesize modifyDate=_modifyDate;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;

@end

