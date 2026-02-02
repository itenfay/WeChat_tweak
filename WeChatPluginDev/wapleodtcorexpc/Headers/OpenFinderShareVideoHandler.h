//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCFinderCreateCoordinator, WCFinderJumpInfo;

@interface OpenFinderShareVideoHandler
{
    NSMutableArray *_mmAssetArray;
    NSString *_extLinkUrl;
    NSString *_title;
    WCFinderCreateCoordinator *_createCoordinator;
    unsigned long long _enterEditImageViewTime;
    WCFinderJumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned long long enterEditImageViewTime; // @synthesize enterEditImageViewTime=_enterEditImageViewTime;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *extLinkUrl; // @synthesize extLinkUrl=_extLinkUrl;
@property(retain, nonatomic) NSMutableArray *mmAssetArray; // @synthesize mmAssetArray=_mmAssetArray;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (void)backTo3rdAppWithExtMsg:(id)arg1;
- (void)backTo3rdApp;
- (void)triggerFinderPostActionWith:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)onAuthDidCancel;
- (void)onAuthDidFail;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1 presentAnimated:(_Bool)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)startShareVideo;
- (void)onAuthDidSuccess;
- (void)onAuthRejectJumpInfo;
- (void)OnAppInfoChanged:(id)arg1;
- (void)initJumpInfo;
- (id)genBlockVC;
- (void)createOpenUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

