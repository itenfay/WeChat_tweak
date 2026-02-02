//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmojiInfoObj, MMWebImageView, NSString, UIImageView, UILabel, UIView;

@interface EmoticonFinderDesignerUGCEmojiCell : UICollectionViewCell
{
    _Bool _needStaticsInfo;
    MMWebImageView *_emoticonView;
    UIImageView *_statusView;
    UIView *_gradientView;
    EmojiInfoObj *_emojiInfoObj;
    UILabel *_sendCountLabel;
    UIView *_sendView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sendView; // @synthesize sendView=_sendView;
@property(retain, nonatomic) UILabel *sendCountLabel; // @synthesize sendCountLabel=_sendCountLabel;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) MMWebImageView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(nonatomic) _Bool needStaticsInfo; // @synthesize needStaticsInfo=_needStaticsInfo;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)startDownloadEmoji;
- (void)updateWithEmojiInfo:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

