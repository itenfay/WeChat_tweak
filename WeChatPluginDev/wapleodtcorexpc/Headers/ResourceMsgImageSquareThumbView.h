//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString, SimpleChatLogInfo, UIImageView, UILabel, UIView, YYImage;

@interface ResourceMsgImageSquareThumbView
{
    _Bool _bIsSelected;
    _Bool _bUsePureColorBackground;
    CDUnknownBlockType _selectBlock;
    SimpleChatLogInfo *_m_msgInfo;
    NSString *_m_imageSquarePath;
    UILabel *_m_titleLabel;
    UILabel *_m_timeLabel;
    UILabel *_m_sizeLabel;
    UIView *_m_timeBkgView;
    CMessageWrap *_m_msgWrap;
    UIView *_m_markSelectedView;
    UIImageView *_m_markSelectedImageView;
    YYImage *_m_image;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) YYImage *m_image; // @synthesize m_image=_m_image;
@property(nonatomic) _Bool bUsePureColorBackground; // @synthesize bUsePureColorBackground=_bUsePureColorBackground;
@property(retain, nonatomic) UIImageView *m_markSelectedImageView; // @synthesize m_markSelectedImageView=_m_markSelectedImageView;
@property(retain, nonatomic) UIView *m_markSelectedView; // @synthesize m_markSelectedView=_m_markSelectedView;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap=_m_msgWrap;
@property(retain, nonatomic) UIView *m_timeBkgView; // @synthesize m_timeBkgView=_m_timeBkgView;
@property(retain, nonatomic) UILabel *m_sizeLabel; // @synthesize m_sizeLabel=_m_sizeLabel;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel=_m_timeLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain, nonatomic) NSString *m_imageSquarePath; // @synthesize m_imageSquarePath=_m_imageSquarePath;
@property(retain, nonatomic) SimpleChatLogInfo *m_msgInfo; // @synthesize m_msgInfo=_m_msgInfo;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) _Bool bIsSelected; // @synthesize bIsSelected=_bIsSelected;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)newAsyncDisplayTask;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)toggleSelection;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)updateSelectViewAnimated:(_Bool)arg1;
- (void)loadImgBackground;
- (id)initWithMsgInfo:(id)arg1 viewSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

