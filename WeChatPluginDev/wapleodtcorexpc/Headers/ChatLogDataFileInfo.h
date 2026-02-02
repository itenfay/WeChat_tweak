//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatLogDataFileInfo : NSObject
{
    _Bool _hasScanned;
    unsigned int _fileTime;
    unsigned long long _fileSize;
    unsigned long long _iNodeNum;
}

+ (void)initialize;
+ (void)PBArrayAdd_iNodeNum;
+ (void)PBArrayAdd_fileTime;
+ (void)PBArrayAdd_fileSize;
@property(nonatomic) _Bool hasScanned; // @synthesize hasScanned=_hasScanned;
@property(nonatomic) unsigned long long iNodeNum; // @synthesize iNodeNum=_iNodeNum;
@property(nonatomic) unsigned int fileTime; // @synthesize fileTime=_fileTime;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

