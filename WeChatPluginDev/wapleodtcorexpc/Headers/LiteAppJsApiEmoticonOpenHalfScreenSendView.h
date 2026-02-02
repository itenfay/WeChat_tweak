//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, NSString;

@interface LiteAppJsApiEmoticonOpenHalfScreenSendView
{
    _Bool _showEntry;
    long long _emoticonScene;
    long long _addEmoticonSource;
    EmojiInfoObj *_emojiInfoObj;
    NSString *_sdkRequestId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sdkRequestId; // @synthesize sdkRequestId=_sdkRequestId;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) _Bool showEntry; // @synthesize showEntry=_showEntry;
@property(nonatomic) long long addEmoticonSource; // @synthesize addEmoticonSource=_addEmoticonSource;
@property(nonatomic) long long emoticonScene; // @synthesize emoticonScene=_emoticonScene;
- (void)endWithOK;
- (id)getViewController;
- (void)openHalfScreen;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

