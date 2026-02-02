//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ConcertTicketInfo, MMFinderLivePayButton, MMUILabel, MMWebImageView;
@protocol MMLiveBuyTicketsViewDelegate;

@interface MMLiveBuyTicketsView : UIView
{
    _Bool _isLandscapeLayout;
    _Bool _needSmallImage;
    unsigned int _remainTime;
    unsigned int _limitTime;
    CDUnknownBlockType _payTicketBlock;
    id <MMLiveBuyTicketsViewDelegate> _delegate;
    ConcertTicketInfo *_ticketInfo;
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMFinderLivePayButton *_actionButton;
    long long _payButtonState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needSmallImage; // @synthesize needSmallImage=_needSmallImage;
@property(nonatomic) _Bool isLandscapeLayout; // @synthesize isLandscapeLayout=_isLandscapeLayout;
@property(nonatomic) long long payButtonState; // @synthesize payButtonState=_payButtonState;
@property(retain, nonatomic) MMFinderLivePayButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
@property(nonatomic) unsigned int limitTime; // @synthesize limitTime=_limitTime;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(retain, nonatomic) ConcertTicketInfo *ticketInfo; // @synthesize ticketInfo=_ticketInfo;
@property(nonatomic) __weak id <MMLiveBuyTicketsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType payTicketBlock; // @synthesize payTicketBlock=_payTicketBlock;
- (void)actionButtonClick;
- (double)ticketActionButtonTop;
- (double)ticketActionButtonWidth;
- (double)getMainHeight;
- (void)onPayActionTimeout;
- (void)layoutActionBtn;
- (void)layoutdetailLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (void)layoutUI;
- (void)updateForRemainTimeChanged;
- (void)countDown;
- (void)startCountDown;
- (void)updateRetryViewTip;
- (void)updateConcertTicketInfo:(id)arg1 limitTime:(unsigned int)arg2 remainTime:(unsigned int)arg3;
- (void)layoutSubviews;
- (double)getTitleLabelWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getDefaultWidth;
- (double)getCurrentWidth;
- (void)updateActionButtonOrientation;
- (void)adaptLandscapeLayout:(_Bool)arg1 needSmallImage:(_Bool)arg2;

@end

