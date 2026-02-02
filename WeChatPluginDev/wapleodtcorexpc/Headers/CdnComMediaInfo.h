//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnComMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned long long m_uiFileTotalLen;
    unsigned int m_uiScene;
    NSString *m_nsExtInfo;
    _Bool m_bNeedMediaId;
    _Bool _m_bNeedStorage;
    int m_bizId;
    int m_appType;
    NSString *m_nsMediaType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNeedStorage; // @synthesize m_bNeedStorage=_m_bNeedStorage;
@property(nonatomic) int m_appType; // @synthesize m_appType;
@property(nonatomic) int m_bizId; // @synthesize m_bizId;
@property(nonatomic) _Bool m_bNeedMediaId; // @synthesize m_bNeedMediaId;
@property(retain, nonatomic) NSString *m_nsMediaType; // @synthesize m_nsMediaType;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned long long m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (id)init;

@end

