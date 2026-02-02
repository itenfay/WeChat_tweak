//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACronetProgressInfo : NSObject
{
    NSString *_m_nsClientMsgID;
    unsigned long long _m_nTotalLength;
    unsigned long long _m_nFinishedLegth;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_nFinishedLegth; // @synthesize m_nFinishedLegth=_m_nFinishedLegth;
@property(nonatomic) unsigned long long m_nTotalLength; // @synthesize m_nTotalLength=_m_nTotalLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID=_m_nsClientMsgID;
- (id)initWithClientMediaID:(id)arg1 totalLength:(unsigned long long)arg2 finishLength:(unsigned long long)arg3;

@end

