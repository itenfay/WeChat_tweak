//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnFavMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    unsigned int m_uiFileType;
    _Bool m_bStreamMedia;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned long long m_uiFileTotalLen;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType;
@property(nonatomic) unsigned long long m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(nonatomic) _Bool m_bStreamMedia; // @synthesize m_bStreamMedia;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

