//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSArray, UIImageView, UILabel;
@protocol MMFinderLiveConcertTicketViewDelegate;

@interface MMFinderLiveConcertTicketView : UIView
{
    id <MMFinderLiveConcertTicketViewDelegate> _delegate;
    UIView *_ticketRoundedCornerContainerView;
    UIView *_ticketContainerView;
    UIView *_nonImagedContainerView;
    UIImageView *_backgroundImageView;
    UIImageView *_brandLogoView;
    UIView *_ticketIdContainer;
    UILabel *_ticketIdLabel;
    UIImageView *_quotationMarkImageView;
    MMUIButton *_nextLyricsButton;
    MMUILabel *_lyricsQuotationLabel;
    UILabel *_concertNameLabel;
    UIImageView *_weBeanLogoView;
    UILabel *_weBeanPriceLabel;
    UILabel *_timeLabel;
    UILabel *_locationLabel;
    UIView *_separatorBarView;
    UIImageView *_holderAvatarView;
    UILabel *_holderLabel;
    UIView *_qrCodeContainerView;
    UIImageView *_qrCodeImageView;
    NSArray *_lyrics;
    unsigned long long _currentLyricsIndex;
    UIView *_externalNavigationBar;
    UIImageView *_externalNavigationBarBackgroundImageView;
    UIImageView *_externalNavigationBarIconView;
    MMUIButton *_externalNavigationButton;
    UIImageView *_externalNavigationBarRightChevronView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *externalNavigationBarRightChevronView; // @synthesize externalNavigationBarRightChevronView=_externalNavigationBarRightChevronView;
@property(retain, nonatomic) MMUIButton *externalNavigationButton; // @synthesize externalNavigationButton=_externalNavigationButton;
@property(retain, nonatomic) UIImageView *externalNavigationBarIconView; // @synthesize externalNavigationBarIconView=_externalNavigationBarIconView;
@property(retain, nonatomic) UIImageView *externalNavigationBarBackgroundImageView; // @synthesize externalNavigationBarBackgroundImageView=_externalNavigationBarBackgroundImageView;
@property(retain, nonatomic) UIView *externalNavigationBar; // @synthesize externalNavigationBar=_externalNavigationBar;
@property(nonatomic) unsigned long long currentLyricsIndex; // @synthesize currentLyricsIndex=_currentLyricsIndex;
@property(retain, nonatomic) NSArray *lyrics; // @synthesize lyrics=_lyrics;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIView *qrCodeContainerView; // @synthesize qrCodeContainerView=_qrCodeContainerView;
@property(retain, nonatomic) UILabel *holderLabel; // @synthesize holderLabel=_holderLabel;
@property(retain, nonatomic) UIImageView *holderAvatarView; // @synthesize holderAvatarView=_holderAvatarView;
@property(retain, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *weBeanPriceLabel; // @synthesize weBeanPriceLabel=_weBeanPriceLabel;
@property(retain, nonatomic) UIImageView *weBeanLogoView; // @synthesize weBeanLogoView=_weBeanLogoView;
@property(retain, nonatomic) UILabel *concertNameLabel; // @synthesize concertNameLabel=_concertNameLabel;
@property(retain, nonatomic) MMUILabel *lyricsQuotationLabel; // @synthesize lyricsQuotationLabel=_lyricsQuotationLabel;
@property(retain, nonatomic) MMUIButton *nextLyricsButton; // @synthesize nextLyricsButton=_nextLyricsButton;
@property(retain, nonatomic) UIImageView *quotationMarkImageView; // @synthesize quotationMarkImageView=_quotationMarkImageView;
@property(retain, nonatomic) UILabel *ticketIdLabel; // @synthesize ticketIdLabel=_ticketIdLabel;
@property(retain, nonatomic) UIView *ticketIdContainer; // @synthesize ticketIdContainer=_ticketIdContainer;
@property(retain, nonatomic) UIImageView *brandLogoView; // @synthesize brandLogoView=_brandLogoView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *nonImagedContainerView; // @synthesize nonImagedContainerView=_nonImagedContainerView;
@property(retain, nonatomic) UIView *ticketContainerView; // @synthesize ticketContainerView=_ticketContainerView;
@property(retain, nonatomic) UIView *ticketRoundedCornerContainerView; // @synthesize ticketRoundedCornerContainerView=_ticketRoundedCornerContainerView;
@property(nonatomic) __weak id <MMFinderLiveConcertTicketViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setLabelColor:(id)arg1;
- (void)setImageUri:(id)arg1 forImageView:(id)arg2 fallbackImage:(id)arg3 isRequired:(_Bool)arg4 isCritical:(_Bool)arg5 criticalFailBlock:(CDUnknownBlockType)arg6 taskGroup:(id)arg7 logKey:(id)arg8;
- (void)startAsyncImageLoadWithStyleItem:(id)arg1;
- (void)onExternalNavigationInvoked;
- (void)nextLyricsQuotation;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)ticketImage;
- (void)playEntryAnimation;
- (void)updateWithTicketStyleItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

