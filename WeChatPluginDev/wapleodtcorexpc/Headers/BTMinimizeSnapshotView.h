//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMUILabel, MMWebImageView, NSString, RichTextView, SightIconView, UIImageView, UIView;

@interface BTMinimizeSnapshotView
{
    _Bool _isShowLargeCover;
    unsigned int _itemShowType;
    RichTextView *_richTextView;
    MMWebImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    MMWebImageView *_coverImageView;
    SightIconView *_playIconView;
    UIView *_audioBGView;
    UIView *_audioPlayViewBGView;
    UIImageView *_audioPlayView;
    CContact *_contact;
    NSString *_titleStr;
    NSString *_coverImgURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *coverImgURL; // @synthesize coverImgURL=_coverImgURL;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) _Bool isShowLargeCover; // @synthesize isShowLargeCover=_isShowLargeCover;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIImageView *audioPlayView; // @synthesize audioPlayView=_audioPlayView;
@property(retain, nonatomic) UIView *audioPlayViewBGView; // @synthesize audioPlayViewBGView=_audioPlayViewBGView;
@property(retain, nonatomic) UIView *audioBGView; // @synthesize audioBGView=_audioBGView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)configureAudioLayout;
- (void)configurePicLayout;
- (void)configureTextLayout;
- (void)configureVideoLayout;
- (void)configureReaderLayout;
- (double)rootViewPaddingTop;
- (id)rootViewConfigure;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)snapshotImage;
- (void)configWithRecAppMsgItemViewMode:(id)arg1;
- (id)initWithRecAppMsgViewModel:(id)arg1 contact:(id)arg2;
- (void)configWithReaderItemViewMode:(id)arg1;
- (id)initWithReaderItemCellViewModel:(id)arg1 contact:(id)arg2;

@end

