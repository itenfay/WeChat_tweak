//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveQrCodeSessionSelectController, NSString, UINavigationController;

@interface MMFinderLiveSessionSelectHandle : NSObject
{
    NSString *_userName;
    UINavigationController *_navVC;
    NSString *_qrCodeUri;
    MMFinderLiveQrCodeSessionSelectController *_sessionSelectController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveQrCodeSessionSelectController *sessionSelectController; // @synthesize sessionSelectController=_sessionSelectController;
@property(retain, nonatomic) NSString *qrCodeUri; // @synthesize qrCodeUri=_qrCodeUri;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)pushSelectViewController;
- (void)pushLiveSessionSelectUserName:(id)arg1 currentNavController:(id)arg2 qrCodeUri:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

