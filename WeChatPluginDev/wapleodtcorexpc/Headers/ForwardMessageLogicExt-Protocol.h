//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, CContact, CMessageWrap, CaptureVideoInfo;

@protocol ForwardMessageLogicExt <NSObject>
- (void)onForwardMsgToContact:(CContact *)arg1 scene:(unsigned long long)arg2;
- (void)onPreForwardVideoToContact:(CBaseContact *)arg1 videoInfo:(CaptureVideoInfo *)arg2;
- (void)onPreForwardMsgToContact:(CBaseContact *)arg1 msgWrap:(CMessageWrap *)arg2;

@optional
- (void)onAfterForwardMsgToContact:(CBaseContact *)arg1 msgWrap:(CMessageWrap *)arg2 fromMsg:(CMessageWrap *)arg3;
@end

