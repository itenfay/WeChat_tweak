//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnProgressInfo : NSObject
{
    struct C2CDownloadResult m_result;
    _Bool m_nTryShow;
    int m_nStatus;
    NSString *m_nsClientMsgID;
    unsigned long long m_nTotalLength;
    unsigned long long m_nFinishedLegth;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_nTryShow; // @synthesize m_nTryShow;
@property(nonatomic) int m_nStatus; // @synthesize m_nStatus;
@property(nonatomic) unsigned long long m_nFinishedLegth; // @synthesize m_nFinishedLegth;
@property(nonatomic) unsigned long long m_nTotalLength; // @synthesize m_nTotalLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (id)initWithClientMsgID:(id)arg1 totalSize:(unsigned long long)arg2 finish:(unsigned long long)arg3;

@end

