//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol ScanQRCodeUrlPrefixHandlerDelegate;

@interface ScanQRCodeUrlPrefixHandler : NSObject
{
    id <ScanQRCodeUrlPrefixHandlerDelegate> _m_delegate;
    long long _m_A8KeyScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_A8KeyScene; // @synthesize m_A8KeyScene=_m_A8KeyScene;
@property(nonatomic) __weak id <ScanQRCodeUrlPrefixHandlerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (BOOL)QRCodeType;
- (id)sessionPayMsgId;
- (id)sessionPaySenderUserName;
- (int)sessionPaySendType;
- (int)sessionPayChatType;
- (id)matchingPrefixes;
- (id)matchingPrefix;
- (void)handleUrl:(id)arg1;
- (id)initWithDelegate:(id)arg1 GetA8KeyScene:(long long)arg2;

@end

