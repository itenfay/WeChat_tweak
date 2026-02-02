//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, NSArray, NSMutableArray, NSString, UIImage;

@interface MassSendMessageViewModel
{
    NSMutableArray *m_receivers;
    _Bool _isPlaying;
    CEmoticonWrap *_emoticonWrap;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)onMessageStopPlaying;
- (_Bool)isText;
@property(readonly, nonatomic) NSString *videoTimeString;
@property(readonly, nonatomic) NSString *voiceTimeString;
@property(readonly, nonatomic) double voiceTimeLength;
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSString *contentText;
@property(readonly, nonatomic) NSString *receiverString;
@property(readonly, nonatomic) NSArray *receivers;
- (struct CGSize)finderViewSize;
- (struct CGSize)emoticonViewSize;
- (struct CGSize)videoViewSize;
- (struct CGSize)voiceViewSize;
- (struct CGSize)imageViewSize;
- (struct CGSize)textViewSize;
- (struct CGSize)bodyViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

