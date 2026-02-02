//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, FinderLiveInfo, MMTimer, NSString, WCPlayLiveWithoutLoginCheckQRCodeStatusCGI, WCPlayLiveWithoutLoginGetQRCodeCGI, WCPlayLiveWithoutLoginQRCodeViewController, WCPlayLiveWithoutLoginViewController;

@interface WCPlayLiveWithoutLoginControlLogic
{
    _Bool _isInCheckQRCodeStatus;
    WCPlayLiveWithoutLoginGetQRCodeCGI *_getQRCodeCGI;
    WCPlayLiveWithoutLoginCheckQRCodeStatusCGI *_checkQRCodeCGI;
    WCPlayLiveWithoutLoginQRCodeViewController *_playLiveWithoutLoginQRCodeViewController;
    WCPlayLiveWithoutLoginViewController *_playerVc;
    double _nextCheckStatusTime;
    MMTimer *_timer;
    NSString *_qrcodeToken;
    FinderLiveContact *_anchorLiveContact;
    FinderLiveInfo *_liveInfo;
    CDUnknownBlockType _refreshTokenCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType refreshTokenCompletion; // @synthesize refreshTokenCompletion=_refreshTokenCompletion;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) FinderLiveContact *anchorLiveContact; // @synthesize anchorLiveContact=_anchorLiveContact;
@property(retain, nonatomic) NSString *qrcodeToken; // @synthesize qrcodeToken=_qrcodeToken;
@property(nonatomic) _Bool isInCheckQRCodeStatus; // @synthesize isInCheckQRCodeStatus=_isInCheckQRCodeStatus;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double nextCheckStatusTime; // @synthesize nextCheckStatusTime=_nextCheckStatusTime;
@property(retain, nonatomic) WCPlayLiveWithoutLoginViewController *playerVc; // @synthesize playerVc=_playerVc;
@property(retain, nonatomic) WCPlayLiveWithoutLoginQRCodeViewController *playLiveWithoutLoginQRCodeViewController; // @synthesize playLiveWithoutLoginQRCodeViewController=_playLiveWithoutLoginQRCodeViewController;
@property(retain, nonatomic) WCPlayLiveWithoutLoginCheckQRCodeStatusCGI *checkQRCodeCGI; // @synthesize checkQRCodeCGI=_checkQRCodeCGI;
@property(retain, nonatomic) WCPlayLiveWithoutLoginGetQRCodeCGI *getQRCodeCGI; // @synthesize getQRCodeCGI=_getQRCodeCGI;
- (void)checkQRCodeStatusAfterGetQRCodeToken;
- (void)showPlayLiveWithoutLoginQRCode;
- (void)onGetQRCodeFail;
- (void)onGetQRCodeSuccuss:(id)arg1 image:(id)arg2 token:(id)arg3;
- (void)onCheckQRCodeStatusFail;
- (void)onCheckQRCodeStatusSuccuss:(id)arg1 nextPollingTs:(double)arg2 liveContact:(id)arg3 liveInfo:(id)arg4;
- (void)startGetQRCode;
- (void)startCheckQRCodeStatus;
- (void)startCheckQRCodeStatusTimeInterval:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

