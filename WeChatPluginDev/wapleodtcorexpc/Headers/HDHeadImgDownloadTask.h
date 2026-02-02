//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HDHeadImgDownloadTask : NSObject
{
    unsigned char m_headCategory;
    unsigned int m_headType;
    int m_downloadType;
    unsigned int m_eventId;
    unsigned int m_totalLen;
    unsigned int m_startOffset;
    unsigned int m_uiDownloadEventId;
    NSString *m_nsName;
    NSString *m_nsUrl;
    NSString *_m_nsTempFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTempFile; // @synthesize m_nsTempFile=_m_nsTempFile;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl;
@property(nonatomic) unsigned int m_uiDownloadEventId; // @synthesize m_uiDownloadEventId;
@property(nonatomic) unsigned int m_startOffset; // @synthesize m_startOffset;
@property(nonatomic) unsigned int m_totalLen; // @synthesize m_totalLen;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) int m_downloadType; // @synthesize m_downloadType;
@property(nonatomic) unsigned int m_headType; // @synthesize m_headType;
@property(nonatomic) unsigned char m_headCategory; // @synthesize m_headCategory;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;

@end

