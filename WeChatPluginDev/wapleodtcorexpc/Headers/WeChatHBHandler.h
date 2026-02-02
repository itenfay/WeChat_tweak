//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WeChatHBHandler : NSObject
{
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
    NSString *m_nsBundleID;
    NSString *m_nsUniversalLink;
}

- (void).cxx_destruct;
- (void)createWeChateHB;
- (id)parseURLParams:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)cancelWeChatHB;
- (void)startWeChatHB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

