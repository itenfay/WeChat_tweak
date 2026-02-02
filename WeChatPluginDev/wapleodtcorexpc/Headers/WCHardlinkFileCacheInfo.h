//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCHardlinkFileCacheInfo : NSObject
{
    _Bool _bCacheUse;
    unsigned long long _fileSize;
    NSString *_fileMD5;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_fileSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bCacheUse; // @synthesize bCacheUse=_bCacheUse;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

