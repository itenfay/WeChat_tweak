//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;

@interface WCFinderPremovieAdMBHelper
{
    _Bool _isReadyToShow;
    UIView *_containerView;
    NSString *_frameSetName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool isReadyToShow; // @synthesize isReadyToShow=_isReadyToShow;
- (void)onFinderMediaUpdateAdFeedback:(id)arg1 jumpId:(id)arg2 rect:(id)arg3;
- (void)onFinderMediaInsertAdFeedback:(id)arg1 jumpId:(id)arg2 rect:(id)arg3;
- (void)onFinderMediaJumpAdDetail:(id)arg1 jumpId:(id)arg2;
- (void)onFinderMediaDisplayAdEnd:(id)arg1 jumpId:(id)arg2;
- (void)onFinderMediaCloseAd:(id)arg1 jumpId:(id)arg2;
- (void)onFinderMediaFirstFrame:(id)arg1;
- (struct CGRect)adLabelFrameWithDict:(id)arg1;
- (void)closePremovieAd;
- (void)showPremovieAd;
- (void)clearCache;
- (id)genPremovieView:(id)arg1;
- (void)updateWithMultiMediaCell:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

