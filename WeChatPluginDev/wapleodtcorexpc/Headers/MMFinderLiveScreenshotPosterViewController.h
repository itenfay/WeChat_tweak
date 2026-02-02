//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveScreenshotPosterImages, NSString;

@interface MMFinderLiveScreenshotPosterViewController
{
    MMFinderLiveScreenshotPosterImages *_images;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveScreenshotPosterImages *images; // @synthesize images=_images;
- (id)audienceLogReporter;
- (id)liveTask;
- (void)onSharedSuccessfullyToMiscellaneousTargets;
- (void)onSharedSuccessfullyToMoments;
- (void)onSharedSuccessfullyToChatWithUsernames:(id)arg1;
- (void)onShareButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onCancelButtonInvoked;
- (_Bool)supportsLandscape;
- (id)reporter;
- (void)willAppear;
- (id)createQrCodeView;
- (void)fetchScreenshotPosterInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)backdropColor;
- (id)initWithTaskId:(id)arg1 images:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

