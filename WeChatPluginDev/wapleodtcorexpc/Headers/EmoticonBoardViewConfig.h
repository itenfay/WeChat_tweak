//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonBoardViewConfig : NSObject
{
    _Bool _showSearchEmoji;
    _Bool _showQQEmoji;
    _Bool _showCustomEmoticon;
    _Bool _showCameraEmoticon;
    _Bool _showStoreEmoticon;
    _Bool _showGameEmoticon;
    _Bool _showAddCustomEmoticon;
    _Bool _showAddCameraEmoticon;
    _Bool _showQQEmojiSendButton;
    unsigned long long _currentConfigCases;
}

@property(nonatomic) _Bool showQQEmojiSendButton; // @synthesize showQQEmojiSendButton=_showQQEmojiSendButton;
@property(nonatomic) unsigned long long currentConfigCases; // @synthesize currentConfigCases=_currentConfigCases;
@property(nonatomic) _Bool showAddCameraEmoticon; // @synthesize showAddCameraEmoticon=_showAddCameraEmoticon;
@property(nonatomic) _Bool showAddCustomEmoticon; // @synthesize showAddCustomEmoticon=_showAddCustomEmoticon;
@property(nonatomic) _Bool showGameEmoticon; // @synthesize showGameEmoticon=_showGameEmoticon;
@property(nonatomic) _Bool showStoreEmoticon; // @synthesize showStoreEmoticon=_showStoreEmoticon;
@property(nonatomic) _Bool showCameraEmoticon; // @synthesize showCameraEmoticon=_showCameraEmoticon;
@property(nonatomic) _Bool showCustomEmoticon; // @synthesize showCustomEmoticon=_showCustomEmoticon;
@property(nonatomic) _Bool showQQEmoji; // @synthesize showQQEmoji=_showQQEmoji;
@property(nonatomic) _Bool showSearchEmoji; // @synthesize showSearchEmoji=_showSearchEmoji;
- (void)quickConfigureTabWithCases:(unsigned long long)arg1;
- (void)quickConfigureTab;
- (id)init;

@end

