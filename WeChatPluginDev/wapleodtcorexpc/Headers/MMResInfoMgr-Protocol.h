//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMResDownloadInfo, MMResInfo, NSArray;

@protocol MMResInfoMgr <NSObject>

@optional
- (_Bool)updateResDownloadInfo:(MMResDownloadInfo *)arg1;
- (MMResDownloadInfo *)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (MMResDownloadInfo *)getResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (NSArray *)getABTestResDownloadInfo:(unsigned int)arg1;
- (NSArray *)getResDownloadInfo:(unsigned int)arg1;
- (NSArray *)getABTestResDownloadInfoLimit:(unsigned int)arg1;
- (NSArray *)getResDownloadInfoLimit:(unsigned int)arg1;
- (_Bool)insertNewResDownloadInfo:(MMResDownloadInfo *)arg1;
- (_Bool)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (_Bool)deleteTestResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (_Bool)deleteResDownloadInfo:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (_Bool)deleteResDownloadInfo:(unsigned int)arg1;
- (_Bool)updateResInfo:(MMResInfo *)arg1;
- (_Bool)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (_Bool)deleteTestResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (_Bool)deleteResInfo:(unsigned int)arg1 WithSubResType:(unsigned int)arg2;
- (_Bool)deleteResInfo:(unsigned int)arg1;
- (MMResInfo *)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 WithEid:(unsigned int)arg3;
- (NSArray *)getTestResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (MMResInfo *)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (NSArray *)getResInfo:(unsigned int)arg1;
- (NSArray *)getResInfoWithLimit:(long long)arg1;
- (_Bool)insertNewResInfo:(MMResInfo *)arg1;
@end

