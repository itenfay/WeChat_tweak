//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfo, EmoticonPreviewWindowViewController, MMImageView, MMWebImageView, NSString;

@interface MMWebImageViewWithThumbPreview
{
    MMWebImageView *m_imageView;
    MMImageView *m_imageFocusView;
    EmojiInfo *_emojiInfo;
    unsigned long long _index;
    EmoticonPreviewWindowViewController *_previewVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonPreviewWindowViewController *previewVC; // @synthesize previewVC=_previewVC;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) EmojiInfo *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(retain, nonatomic) MMImageView *m_imageFocusView; // @synthesize m_imageFocusView;
@property(retain, nonatomic) MMWebImageView *m_imageView; // @synthesize m_imageView;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (_Bool)isPreviewShowing;
- (void)setDefaultImage:(id)arg1;
- (void)setImageStatic:(_Bool)arg1;
- (void)hidePreview;
- (void)showPreview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

