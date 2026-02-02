//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CUploadHDHeadImgWrap : NSObject
{
    NSString *m_nsName;
    unsigned int m_startPos;
    unsigned int m_totalLen;
    NSData *m_dtData;
    NSData *m_dtNormalData;
    NSString *m_nsHash;
    NSString *m_nsFinalMD5;
    NSString *m_nsSmallUrl;
    NSString *m_nsHDUrl;
    unsigned int m_eventID;
    unsigned int m_uiUploadEventID;
    unsigned int m_headType;
    int m_headScene;
    _Bool _isUseCdnUpload;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUseCdnUpload; // @synthesize isUseCdnUpload=_isUseCdnUpload;
@property(retain, nonatomic) NSString *HDUrl; // @synthesize HDUrl=m_nsHDUrl;
@property(retain, nonatomic) NSString *smallUrl; // @synthesize smallUrl=m_nsSmallUrl;
@property(nonatomic) unsigned int uiUploadEventID; // @synthesize uiUploadEventID=m_uiUploadEventID;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=m_eventID;
@property(nonatomic) unsigned int headType; // @synthesize headType=m_headType;
@property(nonatomic) int headScene; // @synthesize headScene=m_headScene;
@property(nonatomic) unsigned int totalLen; // @synthesize totalLen=m_totalLen;
@property(nonatomic) unsigned int startPos; // @synthesize startPos=m_startPos;
@property(retain, nonatomic) NSData *normalData; // @synthesize normalData=m_dtNormalData;
@property(retain, nonatomic) NSData *data; // @synthesize data=m_dtData;
@property(retain, nonatomic) NSString *finalMD5; // @synthesize finalMD5=m_nsFinalMD5;
@property(retain, nonatomic) NSString *hash; // @synthesize hash=m_nsHash;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=m_nsName;

@end

