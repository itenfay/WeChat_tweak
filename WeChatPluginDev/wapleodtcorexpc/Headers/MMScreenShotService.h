//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, UIImage;

@interface MMScreenShotService
{
    _Bool _isCaptured;
    NSURL *_fakeScreenShotUrl;
    UIImage *_fakeScreenShot;
    UIImage *_sendingScreenShot;
    NSURL *_sendingScreenShotUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *sendingScreenShotUrl; // @synthesize sendingScreenShotUrl=_sendingScreenShotUrl;
@property(retain, nonatomic) UIImage *sendingScreenShot; // @synthesize sendingScreenShot=_sendingScreenShot;
@property(retain) UIImage *fakeScreenShot; // @synthesize fakeScreenShot=_fakeScreenShot;
@property(retain) NSURL *fakeScreenShotUrl; // @synthesize fakeScreenShotUrl=_fakeScreenShotUrl;
@property(nonatomic) _Bool isCaptured; // @synthesize isCaptured=_isCaptured;
- (void)MMUIViewControllerDidBePushOrPresent:(id)arg1;
- (void)saveFakeScreenShot:(id)arg1;
- (void)logVC:(id)arg1 action:(id)arg2;
- (_Bool)shouldFakeScreenShot;
- (unsigned int)getReportScene;
- (void)cleanCachedScreenShot;
- (void)cacheCurrentFakeScreenShot;
- (id)getScreenShotForUrl:(id)arg1;
- (id)getFakeScreenShotUrl;
- (void)takeScreenShot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

