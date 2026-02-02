//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, WCPayTransToBankCardReceiver, WCPayWebImageView;
@protocol WCPayT2BCCandidateViewDelegate;

@interface WCPayT2BCCandidateView : UIView
{
    WCPayTransToBankCardReceiver *_receiver;
    UILabel *_titleLabel;
    WCPayWebImageView *_bankIconImageView;
    UILabel *_bankLabel;
    NSString *_inputText;
    UIButton *_maskBtn;
    id <WCPayT2BCCandidateViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayT2BCCandidateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *maskBtn; // @synthesize maskBtn=_maskBtn;
@property(retain, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(retain, nonatomic) UILabel *bankLabel; // @synthesize bankLabel=_bankLabel;
@property(retain, nonatomic) WCPayWebImageView *bankIconImageView; // @synthesize bankIconImageView=_bankIconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayTransToBankCardReceiver *receiver; // @synthesize receiver=_receiver;
- (void)onTapCandidateView:(id)arg1;
- (void)updateView;
- (void)updateWithInputText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReceiver:(id)arg1;

@end

