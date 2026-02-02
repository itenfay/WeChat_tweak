//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, WCMarqueeTextView;
@protocol WCVideoProducerMusicInfoMarqueeViewProtocol;

@interface WCVideoProducerMusicInfoMarqueeView : UIView
{
    id <WCVideoProducerMusicInfoMarqueeViewProtocol> _delegate;
    UIImageView *_musicIconView;
    UIImageView *_arrowIconView;
    WCMarqueeTextView *_marqueeTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMarqueeTextView *marqueeTextView; // @synthesize marqueeTextView=_marqueeTextView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(nonatomic) __weak id <WCVideoProducerMusicInfoMarqueeViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_initView;
- (void)_relayoutView;
- (void)_onSelfTapped;
- (void)stopPlaying;
- (void)startPlaying;
- (void)updateMarqueeTextContent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

