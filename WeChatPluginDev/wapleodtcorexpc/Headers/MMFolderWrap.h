//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBizFileMatchNode, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFolderWrap : NSObject
{
    _Bool _bStatOK;
    int _m_onlyFileTypeInUse;
    int _m_onlyWeChatFileClass;
    unsigned int _m_subFolderNum;
    unsigned int _m_fileNum;
    unsigned int _m_delFileNum;
    unsigned int _m_puffyFileNum;
    long long _m_scanStatus;
    NSString *_m_name;
    NSMutableArray *_m_arrChildFolder;
    NSMutableArray *_m_arrNotScanFileName;
    long long _m_onlyBizType;
    long long _m_storeTimeType;
    MMBizFileMatchNode *_m_bizMatchNode;
    unsigned long long _m_fileSize;
    unsigned long long _m_delFileSize;
    NSMutableDictionary *_m_dicBizStat;
    NSMutableDictionary *_m_dicSpecialBizStat;
    NSMutableDictionary *_m_dicFileTypeInUseStat;
    NSMutableDictionary *_m_dicWechatFileClassStat;
    unsigned long long _m_logicFileSize;
    unsigned long long _m_puffyFileSize;
    unsigned long long _m_puffyLogicFileSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bStatOK; // @synthesize bStatOK=_bStatOK;
@property(nonatomic) unsigned long long m_puffyLogicFileSize; // @synthesize m_puffyLogicFileSize=_m_puffyLogicFileSize;
@property(nonatomic) unsigned long long m_puffyFileSize; // @synthesize m_puffyFileSize=_m_puffyFileSize;
@property(nonatomic) unsigned int m_puffyFileNum; // @synthesize m_puffyFileNum=_m_puffyFileNum;
@property(nonatomic) unsigned long long m_logicFileSize; // @synthesize m_logicFileSize=_m_logicFileSize;
@property(retain, nonatomic) NSMutableDictionary *m_dicWechatFileClassStat; // @synthesize m_dicWechatFileClassStat=_m_dicWechatFileClassStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicFileTypeInUseStat; // @synthesize m_dicFileTypeInUseStat=_m_dicFileTypeInUseStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicSpecialBizStat; // @synthesize m_dicSpecialBizStat=_m_dicSpecialBizStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicBizStat; // @synthesize m_dicBizStat=_m_dicBizStat;
@property(nonatomic) unsigned long long m_delFileSize; // @synthesize m_delFileSize=_m_delFileSize;
@property(nonatomic) unsigned int m_delFileNum; // @synthesize m_delFileNum=_m_delFileNum;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize=_m_fileSize;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum=_m_fileNum;
@property(nonatomic) unsigned int m_subFolderNum; // @synthesize m_subFolderNum=_m_subFolderNum;
@property(retain, nonatomic) MMBizFileMatchNode *m_bizMatchNode; // @synthesize m_bizMatchNode=_m_bizMatchNode;
@property(nonatomic) long long m_storeTimeType; // @synthesize m_storeTimeType=_m_storeTimeType;
@property(nonatomic) int m_onlyWeChatFileClass; // @synthesize m_onlyWeChatFileClass=_m_onlyWeChatFileClass;
@property(nonatomic) int m_onlyFileTypeInUse; // @synthesize m_onlyFileTypeInUse=_m_onlyFileTypeInUse;
@property(nonatomic) long long m_onlyBizType; // @synthesize m_onlyBizType=_m_onlyBizType;
@property(retain, nonatomic) NSMutableArray *m_arrNotScanFileName; // @synthesize m_arrNotScanFileName=_m_arrNotScanFileName;
@property(retain, nonatomic) NSMutableArray *m_arrChildFolder; // @synthesize m_arrChildFolder=_m_arrChildFolder;
@property(retain, nonatomic) NSString *m_name; // @synthesize m_name=_m_name;
@property(nonatomic) long long m_scanStatus; // @synthesize m_scanStatus=_m_scanStatus;
- (_Bool)isFolderMayHaveDB;
- (void)getChildFolderAndFileWithParentPath:(id)arg1;
- (void)markScanFinish;
- (_Bool)isScanFinish;
- (_Bool)isMarkFolderWrap;
- (id)init;
- (void)dealloc;

@end

