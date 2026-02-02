//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel;

@interface QQEmojiPreview
{
    UIImageView *_backgroundView;
    UIButton *_previewView;
    UILabel *_descriptionLabel;
    NSString *_emojiKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *emojiKey; // @synthesize emojiKey=_emojiKey;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)showWithEmojiKey:(id)arg1 hideDesc:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

