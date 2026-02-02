//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCBootsUpdateInfo
{
    unsigned int _fileSize;
    NSString *_baseID;
    NSString *_pid;
    NSString *_pDataMd5;
    NSMutableArray *_eccmd5SignatureList;
}

+ (void)initialize;
+ (void)PBArrayAdd_eccmd5SignatureList;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_pDataMd5;
+ (void)PBArrayAdd_pid;
+ (void)PBArrayAdd_baseID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *eccmd5SignatureList; // @synthesize eccmd5SignatureList=_eccmd5SignatureList;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *pDataMd5; // @synthesize pDataMd5=_pDataMd5;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *baseID; // @synthesize baseID=_baseID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

