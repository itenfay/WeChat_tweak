//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface OplogEventHandler
{
    NSMutableArray *m_arrOplogs;
}

- (void).cxx_destruct;
- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;

@end

