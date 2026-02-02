//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSDate;

@protocol _TtP6WeChat25IKaraFeatureCenterMessage_

@optional
- (void)thumbnailOfMessage:(CMessageWrap *)arg1 downloadRespondedAt:(NSDate *)arg2;
- (void)messageRevoked:(CMessageWrap *)arg1;
- (void)message:(CMessageWrap *)arg1 appearedAt:(NSDate *)arg2;
- (void)message:(CMessageWrap *)arg1 preparedAt:(NSDate *)arg2;
- (void)message:(CMessageWrap *)arg1 recalledAt:(NSDate *)arg2;
- (void)message:(CMessageWrap *)arg1 receivedAt:(NSDate *)arg2;
@end

