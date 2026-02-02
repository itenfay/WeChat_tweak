//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WrapTimeRecordData
{
    unsigned long long m_caseID;
    struct timeval m_msCurTime;
}

+ (id)recordDataWithTime:(struct timeval)arg1 onCase:(unsigned long long)arg2;
@property(nonatomic) struct timeval m_msCurTime; // @synthesize m_msCurTime;
@property(nonatomic) unsigned long long m_caseID; // @synthesize m_caseID;
- (id)initWithTime:(struct timeval)arg1 onCase:(unsigned long long)arg2;

@end

