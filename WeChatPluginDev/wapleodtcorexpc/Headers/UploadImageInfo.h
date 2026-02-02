//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface UploadImageInfo : NSObject
{
    CMessageWrap *m_wrapMsg;
    unsigned long long m_ui64StartTime;
    unsigned int m_uiTotalLen;
    int m_nRetCode;
    _Bool _isParallelUpload;
    _Bool _isUploadFail;
    _Bool _isSendingMsg;
    _Bool _hadTryCaculateOriginSourceMD5;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadTryCaculateOriginSourceMD5; // @synthesize hadTryCaculateOriginSourceMD5=_hadTryCaculateOriginSourceMD5;
@property(nonatomic) _Bool isSendingMsg; // @synthesize isSendingMsg=_isSendingMsg;
@property(nonatomic) _Bool isUploadFail; // @synthesize isUploadFail=_isUploadFail;
@property(nonatomic) _Bool isParallelUpload; // @synthesize isParallelUpload=_isParallelUpload;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (id)GetStatInfo;
- (id)init;

@end

