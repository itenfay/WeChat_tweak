//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface NewSyncEventHandler
{
    unsigned int ct1;
    unsigned long long m_startTime;
}

- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;

@end

