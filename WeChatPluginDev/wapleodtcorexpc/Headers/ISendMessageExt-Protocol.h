//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@protocol ISendMessageExt

@optional
- (void)OnSendMessageFail:(CMessageWrap *)arg1;
- (void)OnSendMessageSuccess:(CMessageWrap *)arg1;
@end

