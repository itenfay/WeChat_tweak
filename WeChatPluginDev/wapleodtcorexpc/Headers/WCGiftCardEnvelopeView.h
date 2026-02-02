//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIButton, UILabel, WCPreGiftCardData;

@interface WCGiftCardEnvelopeView
{
    WCPreGiftCardData *_preCardData;
    MMWebImageView *_headImageView;
    UILabel *_fromUserNameLabel;
    UILabel *_contentLabel;
    UIButton *_acceptButton;
    UIButton *_moreDetailButton;
    UIButton *_seeOtherButton;
    UIButton *_closeButton;
    MMWebImageView *_rightImageView;
    MMWebImageView *_giftBackGroundView;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _acceptBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType acceptBlock; // @synthesize acceptBlock=_acceptBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) MMWebImageView *giftBackGroundView; // @synthesize giftBackGroundView=_giftBackGroundView;
@property(retain, nonatomic) MMWebImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *seeOtherButton; // @synthesize seeOtherButton=_seeOtherButton;
@property(retain, nonatomic) UIButton *moreDetailButton; // @synthesize moreDetailButton=_moreDetailButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *fromUserNameLabel; // @synthesize fromUserNameLabel=_fromUserNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCPreGiftCardData *preCardData; // @synthesize preCardData=_preCardData;
- (void)event:(id)arg1;
- (void)seeOtherButtonDidClicked;
- (void)acceptButtonDidClicked;
- (void)closeButtonDidClicked;
- (void)setAcceptDidClicked:(CDUnknownBlockType)arg1;
- (void)setCloseDidClicked:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

