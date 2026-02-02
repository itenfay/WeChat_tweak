//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol MMStackReportConnectionDelegate, OS_dispatch_queue;

@interface MMStackReportConnection : NSObject
{
    id <MMStackReportConnectionDelegate> _delegate;
    NSMutableArray *_uploadedCustomIssue;
    NSObject<OS_dispatch_queue> *_reportQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(retain, nonatomic) NSMutableArray *uploadedCustomIssue; // @synthesize uploadedCustomIssue=_uploadedCustomIssue;
@property(nonatomic) __weak id <MMStackReportConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCustomIssue:(id)arg1 uploadComplete:(_Bool)arg2;
- (void)stackReportDict:(id)arg1 reportType:(unsigned long long)arg2;
- (void)stackReportWithData:(id)arg1 reportType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

