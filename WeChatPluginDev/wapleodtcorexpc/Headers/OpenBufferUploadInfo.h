//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface OpenBufferUploadInfo : NSObject
{
    _Bool _m_bUpload;
    unsigned int _m_addQueueTime;
    unsigned int _m_uiScene;
    unsigned int _m_uiStartPos;
    unsigned int _m_uploadDataSize;
    unsigned int _m_uploadTime;
    unsigned int _m_maxUploadTime;
    NSString *_m_clientAppDataId;
    NSString *_m_nsUsrName;
    NSData *_m_uploadData;
    NSString *_m_mediaId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_maxUploadTime; // @synthesize m_maxUploadTime=_m_maxUploadTime;
@property(nonatomic) unsigned int m_uploadTime; // @synthesize m_uploadTime=_m_uploadTime;
@property(nonatomic) unsigned int m_uploadDataSize; // @synthesize m_uploadDataSize=_m_uploadDataSize;
@property(retain, nonatomic) NSString *m_mediaId; // @synthesize m_mediaId=_m_mediaId;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos=_m_uiStartPos;
@property(nonatomic) _Bool m_bUpload; // @synthesize m_bUpload=_m_bUpload;
@property(retain, nonatomic) NSData *m_uploadData; // @synthesize m_uploadData=_m_uploadData;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(nonatomic) unsigned int m_addQueueTime; // @synthesize m_addQueueTime=_m_addQueueTime;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName=_m_nsUsrName;
@property(retain, nonatomic) NSString *m_clientAppDataId; // @synthesize m_clientAppDataId=_m_clientAppDataId;
- (_Bool)IsCanUpload;

@end

