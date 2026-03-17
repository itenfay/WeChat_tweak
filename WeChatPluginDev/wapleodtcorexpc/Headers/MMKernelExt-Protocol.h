//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL;

@protocol MMKernelExt

@optional
- (void)onHandleOpenURL:(NSURL *)arg1 bundleID:(NSString *)arg2;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onForceAuthJustForShort:(_Bool *)arg1;
- (void)onInitOK;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)onMainControllStart;
- (void)onLaunchOpenFirstView;
- (void)onManulLogOut;
- (void)onGetUpdateInfoOk;
- (void)onNewRegOK;
- (void)onLoginOK;
- (void)onManulLoginOK;
- (void)onAuthOK;
@end

