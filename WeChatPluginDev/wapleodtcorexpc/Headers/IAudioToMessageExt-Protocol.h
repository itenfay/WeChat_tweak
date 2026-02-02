//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@protocol IAudioToMessageExt

@optional
- (void)OnErrorByReceiver:(CMessageWrap *)arg1 ErrNo:(int)arg2;
- (void)OnErrorBySender:(CMessageWrap *)arg1 ErrNo:(int)arg2;
- (void)OnMessageSentBySender:(CMessageWrap *)arg1;
- (void)OnAddMessageByReceiver:(CMessageWrap *)arg1;
@end

