//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol IWATimelineCommitDelegate;

@interface WATimelineProxy : NSObject
{
    id <IWATimelineCommitDelegate> _commitDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IWATimelineCommitDelegate> commitDelegate; // @synthesize commitDelegate=_commitDelegate;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)weAppData2WCUploadTask:(id)arg1;
- (id)getTimelineVCByData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

