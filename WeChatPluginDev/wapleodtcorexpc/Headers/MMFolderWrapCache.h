//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMFolderWrapCache : NSObject
{
    unsigned int _fileNum;
    unsigned int _puffyFileNum;
    NSString *_folderName;
    long long _lastScanTime;
    unsigned long long _fileSize;
    NSMutableDictionary *_dicBizStat;
    NSMutableDictionary *_dicSpecialBizStat;
    NSMutableDictionary *_dicFileTypeInUseStat;
    NSMutableDictionary *_dicWechatFileClassStat;
    unsigned long long _logicFileSize;
    unsigned long long _puffyFileSize;
    unsigned long long _puffyLogicFileSize;
    long long _cacheTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_puffyLogicFileSize;
+ (void)PBArrayAdd_puffyFileSize;
+ (void)PBArrayAdd_puffyFileNum;
+ (void)PBArrayAdd_logicFileSize;
+ (void)PBArrayAdd_folderName;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_dicWechatFileClassStat;
+ (void)PBArrayAdd_dicFileTypeInUseStat;
+ (void)PBArrayAdd_dicSpecialBizStat;
+ (void)PBArrayAdd_dicBizStat;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileNum;
+ (void)PBArrayAdd_lastScanTime;
- (void).cxx_destruct;
@property(nonatomic) long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long puffyLogicFileSize; // @synthesize puffyLogicFileSize=_puffyLogicFileSize;
@property(nonatomic) unsigned long long puffyFileSize; // @synthesize puffyFileSize=_puffyFileSize;
@property(nonatomic) unsigned int puffyFileNum; // @synthesize puffyFileNum=_puffyFileNum;
@property(nonatomic) unsigned long long logicFileSize; // @synthesize logicFileSize=_logicFileSize;
@property(retain, nonatomic) NSMutableDictionary *dicWechatFileClassStat; // @synthesize dicWechatFileClassStat=_dicWechatFileClassStat;
@property(retain, nonatomic) NSMutableDictionary *dicFileTypeInUseStat; // @synthesize dicFileTypeInUseStat=_dicFileTypeInUseStat;
@property(retain, nonatomic) NSMutableDictionary *dicSpecialBizStat; // @synthesize dicSpecialBizStat=_dicSpecialBizStat;
@property(retain, nonatomic) NSMutableDictionary *dicBizStat; // @synthesize dicBizStat=_dicBizStat;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned int fileNum; // @synthesize fileNum=_fileNum;
@property(nonatomic) long long lastScanTime; // @synthesize lastScanTime=_lastScanTime;
@property(retain, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
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

