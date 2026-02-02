//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, NSString, WCFinderCreateCoordinator;

@interface WAJSEventHandler_openChannelsPostPage
{
    WCFinderCreateCoordinator *_createCoordinator;
    MMAsset *_finderAsset;
    unsigned long long _enterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) MMAsset *finderAsset; // @synthesize finderAsset=_finderAsset;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerStartUpload;
- (void)presentPostVCWith:(id)arg1;
- (void)openPostPageWithTitle:(id)arg1 jumpInfo:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

