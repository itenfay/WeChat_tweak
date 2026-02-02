//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavoritesItemDataField, NSString;

@interface CdnRecordMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    NSString *m_nsUsername;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned long long m_uiFileTotalLen;
    unsigned int m_uiScene;
    NSString *m_nsExtInfo;
    unsigned int m_uiFileType;
    NSString *m_authkey;
    double m_tGetMoovTime;
    unsigned int m_uiMoovPos;
    unsigned long long m_ui64StartTime;
    unsigned long long m_ui64EndTime;
    _Bool _isThumb;
    _Bool _isLargeFile;
    NSString *_m_nsTargetFilePath;
    NSString *_m_nsVideoThumbPath;
    NSString *_m_nsFileMd5;
    FavoritesItemDataField *_recordDataField;
    NSString *_signature;
    NSString *_fakeAeskey;
    NSString *_fakeSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fakeSignature; // @synthesize fakeSignature=_fakeSignature;
@property(retain, nonatomic) NSString *fakeAeskey; // @synthesize fakeAeskey=_fakeAeskey;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) _Bool isLargeFile; // @synthesize isLargeFile=_isLargeFile;
@property(retain, nonatomic) FavoritesItemDataField *recordDataField; // @synthesize recordDataField=_recordDataField;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *m_nsFileMd5; // @synthesize m_nsFileMd5=_m_nsFileMd5;
@property(retain, nonatomic) NSString *m_nsVideoThumbPath; // @synthesize m_nsVideoThumbPath=_m_nsVideoThumbPath;
@property(retain, nonatomic) NSString *m_nsTargetFilePath; // @synthesize m_nsTargetFilePath=_m_nsTargetFilePath;
@property(nonatomic) unsigned long long m_ui64EndTime; // @synthesize m_ui64EndTime;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(nonatomic) double m_tGetMoovTime; // @synthesize m_tGetMoovTime;
@property(nonatomic) unsigned int m_uiMoovPos; // @synthesize m_uiMoovPos;
@property(retain, nonatomic) NSString *m_authkey; // @synthesize m_authkey;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned long long m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsUsername; // @synthesize m_nsUsername;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

