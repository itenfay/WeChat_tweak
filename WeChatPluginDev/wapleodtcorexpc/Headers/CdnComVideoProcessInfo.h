//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnComVideoProcessInfo : NSObject
{
    unsigned int m_uiDurationMs;
    int _m_iNotMoovReason;
    int _videoFormat;
    int _originalVideoFormat;
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    unsigned long long m_uiOffset;
    unsigned long long m_uiLength;
    NSString *m_nsM3u8;
    NSString *_svrFlag;
}

- (void).cxx_destruct;
@property(nonatomic) int originalVideoFormat; // @synthesize originalVideoFormat=_originalVideoFormat;
@property(nonatomic) int videoFormat; // @synthesize videoFormat=_videoFormat;
@property(retain, nonatomic) NSString *svrFlag; // @synthesize svrFlag=_svrFlag;
@property(nonatomic) int m_iNotMoovReason; // @synthesize m_iNotMoovReason=_m_iNotMoovReason;
@property(retain, nonatomic) NSString *m_nsM3u8; // @synthesize m_nsM3u8;
@property(nonatomic) unsigned int m_uiDurationMs; // @synthesize m_uiDurationMs;
@property(nonatomic) unsigned long long m_uiLength; // @synthesize m_uiLength;
@property(nonatomic) unsigned long long m_uiOffset; // @synthesize m_uiOffset;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

