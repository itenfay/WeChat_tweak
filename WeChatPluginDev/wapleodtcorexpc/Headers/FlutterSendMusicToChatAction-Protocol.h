//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SendMusicRequest, SendMusicResponse;

@protocol FlutterSendMusicToChatAction
- (SendMusicResponse *)getChatUserNameWithError:(id *)arg1;
- (void)sendMusicToChatRequest:(SendMusicRequest *)arg1 error:(id *)arg2;
@end

