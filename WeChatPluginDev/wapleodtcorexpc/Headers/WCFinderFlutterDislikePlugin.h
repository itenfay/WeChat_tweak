//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderDislikeFlutterAPI, NSString, WCFinderFeedContentVM;

@interface WCFinderFlutterDislikePlugin : NSObject
{
    _Bool _dislikeV2Enabled;
    WCFinderFeedContentVM *_contentVM;
    FinderDislikeFlutterAPI *_flutterAPI;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dislikeV2Enabled; // @synthesize dislikeV2Enabled=_dislikeV2Enabled;
@property(retain, nonatomic) FinderDislikeFlutterAPI *flutterAPI; // @synthesize flutterAPI=_flutterAPI;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)_updateDislikeReasonFetchResultWithContentVM:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)submitDislikeWithSelectedReasons:(id)arg1;
- (void)retryFetchDislikeReasonsWithError:(id *)arg1;
- (void)submitFeedDislikeReasonsSelectedReasons:(id)arg1 error:(id *)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)flutterHalfVC;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

