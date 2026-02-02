//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderFeedDraft;
@protocol WCFinderDraftUploadProgressDelegate;

@interface WCFinderDraftUploadProgress : NSObject
{
    WCFinderFeedDraft *_draft;
    id <WCFinderDraftUploadProgressDelegate> _delegate;
    NSArray *_combinedProgresses;
}

+ (id)progressWithCombineProgresses:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *combinedProgresses; // @synthesize combinedProgresses=_combinedProgresses;
@property(nonatomic) __weak id <WCFinderDraftUploadProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WCFinderFeedDraft *draft; // @synthesize draft=_draft;
- (void)flushProgressValue;
@property(readonly, nonatomic) double value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

