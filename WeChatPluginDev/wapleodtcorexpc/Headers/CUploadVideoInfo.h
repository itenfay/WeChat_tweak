//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface CUploadVideoInfo : NSObject
{
    unsigned int m_uiUploadCount;
    unsigned int m_uiCurOffset;
    unsigned int m_uiCurOffsetCount;
    unsigned int m_uiZeroUploadCount;
    CMessageWrap *m_wrapMsg;
    unsigned long long m_ui64StartTime;
    unsigned int m_uiOpType;
    int m_nRetCode;
    _Bool _isParallelUpload;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isParallelUpload; // @synthesize isParallelUpload=_isParallelUpload;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(nonatomic) unsigned int m_uiZeroUploadCount; // @synthesize m_uiZeroUploadCount;
@property(nonatomic) unsigned int m_uiCurOffsetCount; // @synthesize m_uiCurOffsetCount;
@property(nonatomic) unsigned int m_uiCurOffset; // @synthesize m_uiCurOffset;
@property(nonatomic) unsigned int m_uiUploadCount; // @synthesize m_uiUploadCount;
- (id)GetStatInfo;
- (id)description;
- (id)init;

@end

