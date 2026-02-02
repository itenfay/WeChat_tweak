//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppStateChangedContextInfoWXABGAudioInfo
{
    _Bool _bgAudioMode;
    _Bool _bgVoipMode;
    _Bool _isVoipChatting;
    _Bool _isVoipChattingInterupted;
    _Bool _isWXVoipChatting;
    _Bool _isWxaVoipWaiting;
}

@property(nonatomic) _Bool isWxaVoipWaiting; // @synthesize isWxaVoipWaiting=_isWxaVoipWaiting;
@property(nonatomic) _Bool isWXVoipChatting; // @synthesize isWXVoipChatting=_isWXVoipChatting;
@property(nonatomic) _Bool isVoipChattingInterupted; // @synthesize isVoipChattingInterupted=_isVoipChattingInterupted;
@property(nonatomic) _Bool isVoipChatting; // @synthesize isVoipChatting=_isVoipChatting;
@property(nonatomic) _Bool bgVoipMode; // @synthesize bgVoipMode=_bgVoipMode;
@property(nonatomic) _Bool bgAudioMode; // @synthesize bgAudioMode=_bgAudioMode;
- (id)description;

@end

