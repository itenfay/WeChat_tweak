//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;
@protocol DataReportMultiEventDelegate;

@interface DataReportMultiEventMonitor
{
    NSNumber *m_monitorSwitch;
    _Bool m_isOpenMonitor;
    id <DataReportMultiEventDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DataReportMultiEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void)messageReturn:(id)arg1 event:(unsigned int)arg2;
- (void)messageStart:(id)arg1 event:(unsigned int)arg2;
- (void)stopMonitor;
- (void)startMonitor;
- (_Bool)isOpenMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

