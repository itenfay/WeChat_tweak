//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface FavVideoCompressMgr
{
    NSMutableArray *m_compressingQueue;
    _Bool m_compressing;
    int m_retryTime;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)getCompressCallbackBlock;
- (void)startCompressVideo;
- (_Bool)tryCompressVideo:(id)arg1 IsPriority:(_Bool)arg2;
- (_Bool)isContainCompressingVideo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

