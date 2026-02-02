//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCDevice, WCMyDeviceInfoAssist;

@interface WCMyDeviceInfoViewController
{
    WCMyDeviceInfoAssist *m_oDeviceInfoAssist;
    id m_deviceData;
    _Bool m_ignoreContact;
    unsigned long long m_source;
    WCDevice *_deviceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDevice *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) _Bool m_ignoreContact; // @synthesize m_ignoreContact;
@property(nonatomic) unsigned long long m_source; // @synthesize m_source;
- (void)jumpToContactInfoViewController:(id)arg1;
- (id)getDeviceStrangerContact;
- (void)reloadView;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onEnterBrandSession;
- (void)onRemarkEdited:(id)arg1;
- (void)onUnbindDevice;
- (void)onShowDeviceSession;
- (void)onBindDevice;
- (id)getViewController;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)initMyDeviceInfoAssist;
- (id)initWithDevice:(id)arg1 userData:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initBindInfoWithContact:(id)arg1 userData:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

