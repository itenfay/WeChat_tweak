//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebNetTaskResponseInfo : NSObject
{
    NSString *m_nsClientMsgID;
    unsigned int m_uiFileLength;
    int m_nRetCode;
    int m_nHttpStatusCode;
    _Bool m_isResumed;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isResumed; // @synthesize m_isResumed;
@property(nonatomic) int m_nHttpStatusCode; // @synthesize m_nHttpStatusCode;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned int m_uiFileLength; // @synthesize m_uiFileLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

