//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UIImageView, UILabel;

@interface MMFinderLiveConcertMicroTicketView : UIView
{
    CDUnknownBlockType _readyForDisplayBlock;
    CDUnknownBlockType _getTicketButtonTappedBlock;
    CDUnknownBlockType _closeButtonTappedBlock;
    UIImageView *_backgroundImageView;
    UILabel *_concertNameLabel;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *concertNameLabel; // @synthesize concertNameLabel=_concertNameLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType closeButtonTappedBlock; // @synthesize closeButtonTappedBlock=_closeButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType getTicketButtonTappedBlock; // @synthesize getTicketButtonTappedBlock=_getTicketButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType readyForDisplayBlock; // @synthesize readyForDisplayBlock=_readyForDisplayBlock;
- (void)checkImageLoadCompletion;
- (void)onCloseButtonTapped;
- (void)onTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithTicketModel:(id)arg1 reportContext:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

