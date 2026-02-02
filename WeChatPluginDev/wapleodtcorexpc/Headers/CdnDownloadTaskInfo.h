//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnDownloadTaskInfo : NSObject
{
    _Bool _m_isStartFail;
    _Bool _m_isPartialEnd;
    _Bool _m_isResumed;
    int _m_nRetCode;
    int _m_nHttpStatusCode;
    unsigned int _m_uiScene;
    NSString *_m_nsClientMsgID;
    unsigned long long _m_uiFileLength;
    NSString *_m_nsTransInfo;
    NSString *_fileMd5;
    NSString *_m_nsFileID;
    NSString *_m_nsExtInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _recvedLength;
    NSString *_savePath;
    struct C2CDownloadResult _result;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct C2CDownloadResult result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) unsigned long long recvedLength; // @synthesize recvedLength=_recvedLength;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool m_isResumed; // @synthesize m_isResumed=_m_isResumed;
@property(nonatomic) _Bool m_isPartialEnd; // @synthesize m_isPartialEnd=_m_isPartialEnd;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo=_m_nsExtInfo;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID=_m_nsFileID;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(nonatomic) int m_nHttpStatusCode; // @synthesize m_nHttpStatusCode=_m_nHttpStatusCode;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode=_m_nRetCode;
@property(nonatomic) _Bool m_isStartFail; // @synthesize m_isStartFail=_m_isStartFail;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo=_m_nsTransInfo;
@property(nonatomic) unsigned long long m_uiFileLength; // @synthesize m_uiFileLength=_m_uiFileLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID=_m_nsClientMsgID;
- (id)initWithClientMediaID:(id)arg1 result:(const void *)arg2;
- (id)init;

@end

