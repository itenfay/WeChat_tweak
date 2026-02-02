//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WrapMemoryRecordData
{
    unsigned long long m_caseID;
    long long m_curMemory;
}

+ (id)recordDataWithMemory:(long long)arg1 onCase:(unsigned long long)arg2;
@property(nonatomic) long long m_curMemory; // @synthesize m_curMemory;
@property(nonatomic) unsigned long long m_caseID; // @synthesize m_caseID;
- (id)initMemory:(long long)arg1 onCase:(unsigned long long)arg2;

@end

