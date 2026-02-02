//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEFavFileTask : NSObject
{
    unsigned int _fileSize;
    NSString *_fileName;
    NSString *_md5;
}

+ (void)initialize;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

