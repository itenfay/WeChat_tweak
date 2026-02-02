//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACronetDownloadTaskInfo : NSObject
{
    int _m_nRetCode;
    int _m_nHttpStatusCode;
    NSString *_m_nsClientMsgID;
    NSString *_m_nsTransInfo;
    struct CronetTaskResult _result;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CronetTaskResult result; // @synthesize result=_result;
@property(nonatomic) int m_nHttpStatusCode; // @synthesize m_nHttpStatusCode=_m_nHttpStatusCode;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode=_m_nRetCode;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo=_m_nsTransInfo;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID=_m_nsClientMsgID;
- (id)initWithClientMediaID:(id)arg1 result:(const void *)arg2;

@end

