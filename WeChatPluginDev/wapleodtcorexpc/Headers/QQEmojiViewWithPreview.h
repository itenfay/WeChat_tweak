//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel;

@interface QQEmojiViewWithPreview
{
    _Bool _needReloadPreview;
    UIImageView *_m_emojiImageView;
    UILabel *_m_emojiLabel;
    UIImageView *_m_emojiPreviewBackView;
    UILabel *_m_emojiDescriptionLabel;
    UIButton *_m_emojiPreviewView;
    NSString *_m_emojiKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReloadPreview; // @synthesize needReloadPreview=_needReloadPreview;
@property(retain, nonatomic) NSString *m_emojiKey; // @synthesize m_emojiKey=_m_emojiKey;
@property(retain, nonatomic) UIButton *m_emojiPreviewView; // @synthesize m_emojiPreviewView=_m_emojiPreviewView;
@property(retain, nonatomic) UILabel *m_emojiDescriptionLabel; // @synthesize m_emojiDescriptionLabel=_m_emojiDescriptionLabel;
@property(retain, nonatomic) UIImageView *m_emojiPreviewBackView; // @synthesize m_emojiPreviewBackView=_m_emojiPreviewBackView;
@property(retain, nonatomic) UILabel *m_emojiLabel; // @synthesize m_emojiLabel=_m_emojiLabel;
@property(retain, nonatomic) UIImageView *m_emojiImageView; // @synthesize m_emojiImageView=_m_emojiImageView;
- (_Bool)isAccessibilityElement;
- (struct CGRect)accessibilityFrame;
- (void)reloadPreview;
- (void)hidePreview;
- (void)showPreview;
- (void)showEmojiLabel;
- (void)updateEmojiImageViewWithImage:(id)arg1;
- (_Bool)changeKey:(id)arg1 needSyncLoad:(_Bool)arg2;

@end

