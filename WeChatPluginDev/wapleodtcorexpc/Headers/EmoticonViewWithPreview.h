//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, MMEmoticonView, ThreeWayExpandImageView, UIImageView, UILabel, YYAsyncImageView;
@protocol EmoticonViewWithPreviewDelegate;

@interface EmoticonViewWithPreview
{
    id <EmoticonViewWithPreviewDelegate> m_delegate;
    _Bool m_isPreviewing;
    MMEmoticonView *m_emoticonPreview;
    YYAsyncImageView *m_emoticonView;
    CEmoticonWrap *m_wrap;
    UIImageView *m_imageFocusView;
    ThreeWayExpandImageView *m_emoticonPreviewBack;
    UILabel *m_desLabel;
    UILabel *m_previewDesLabel;
    double _leftEdge;
    struct CGSize m_previewSize;
    struct CGPoint _previewOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint previewOffset; // @synthesize previewOffset=_previewOffset;
@property(nonatomic) double leftEdge; // @synthesize leftEdge=_leftEdge;
@property(retain, nonatomic) UILabel *m_previewDesLabel; // @synthesize m_previewDesLabel;
@property(retain, nonatomic) UILabel *m_desLabel; // @synthesize m_desLabel;
@property(nonatomic) _Bool m_isPreviewing; // @synthesize m_isPreviewing;
@property(nonatomic) struct CGSize m_previewSize; // @synthesize m_previewSize;
@property(retain, nonatomic) ThreeWayExpandImageView *m_emoticonPreviewBack; // @synthesize m_emoticonPreviewBack;
@property(retain, nonatomic) UIImageView *m_imageFocusView; // @synthesize m_imageFocusView;
@property(retain, nonatomic) CEmoticonWrap *m_wrap; // @synthesize m_wrap;
@property(retain, nonatomic) YYAsyncImageView *m_emoticonView; // @synthesize m_emoticonView;
@property(retain, nonatomic) MMEmoticonView *m_emoticonPreview; // @synthesize m_emoticonPreview;
- (void)adjustPreviewFrame;
- (void)hideFocusView;
- (void)showFocusView;
- (void)hidePreview;
- (void)showPreview;
- (void)changeWrap:(id)arg1 needShowDesc:(_Bool)arg2 shouldGetRemoteDesc:(_Bool)arg3;
- (void)changeWrap:(id)arg1 needShowDesc:(_Bool)arg2;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)updateDesc:(_Bool)arg1;
- (void)updateDescFromServerWithDelay;
- (void)updateDesc;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 EmoticonWrap:(id)arg2;
- (void)setPreviewSize:(struct CGSize)arg1;
- (void)setDelegate:(id)arg1;

@end

