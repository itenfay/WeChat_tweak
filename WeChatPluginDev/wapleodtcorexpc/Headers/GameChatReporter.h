//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface GameChatReporter
{
    _Bool _isReporting;
    NSMutableArray *_reportQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReporting; // @synthesize isReporting=_isReporting;
@property(retain, nonatomic) NSMutableArray *reportQueue; // @synthesize reportQueue=_reportQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doReport;
- (void)reportUnreadState:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

