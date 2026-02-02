//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFile : NSObject
{
    int _fileClass;
    int _fileInUseType;
    NSString *_name;
    long long _size;
    long long _fileID;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileID;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(nonatomic) int fileInUseType; // @synthesize fileInUseType=_fileInUseType;
@property(nonatomic) long long fileID; // @synthesize fileID=_fileID;
@property(nonatomic) int fileClass; // @synthesize fileClass=_fileClass;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

