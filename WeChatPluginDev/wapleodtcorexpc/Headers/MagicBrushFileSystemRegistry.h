//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OrderedDictionary;
@protocol IMBFileSystem, OS_dispatch_queue;

@interface MagicBrushFileSystemRegistry : NSObject
{
    id <IMBFileSystem> _mDummyFS;
    OrderedDictionary *_mOrderedList;
    OrderedDictionary *_mCustomOrderedList;
    NSObject<OS_dispatch_queue> *_orderListQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *orderListQueue; // @synthesize orderListQueue=_orderListQueue;
@property(retain, nonatomic) OrderedDictionary *mCustomOrderedList; // @synthesize mCustomOrderedList=_mCustomOrderedList;
@property(retain, nonatomic) OrderedDictionary *mOrderedList; // @synthesize mOrderedList=_mOrderedList;
@property(retain, nonatomic) id <IMBFileSystem> mDummyFS; // @synthesize mDummyFS=_mDummyFS;
- (_Bool)accept:(id)arg1;
- (_Bool)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
- (_Bool)rmdir:(id)arg1 recursive:(_Bool)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)mkdir:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (_Bool)unzip:(id)arg1 targetDirectory:(id)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unlink:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (_Bool)access:(id)arg1 error:(id *)arg2;
- (id)findAppropriateFileSystem:(id)arg1;
- (id)precondition:(id)arg1;
- (id)getDecodePath:(id)arg1;
- (id)findNonFlattenedFileSystem;
- (id)findType:(id)arg1;
- (id)findBizName:(id)arg1;
- (void)addFStoCustomOrderedList:(id)arg1 prefix:(id)arg2;
- (id)getCustomOrderedFileSystemList;
- (id)getOrderedFileSystemList;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

