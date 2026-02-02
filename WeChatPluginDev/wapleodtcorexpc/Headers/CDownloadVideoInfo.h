//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface CDownloadVideoInfo : NSObject
{
    CMessageWrap *m_wrapMsg;
    unsigned long long m_ui64StartTime;
    unsigned int m_uiOpType;
    int m_nRetCode;
}

- (void).cxx_destruct;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (id)GetStatInfo;
- (id)init;

@end

