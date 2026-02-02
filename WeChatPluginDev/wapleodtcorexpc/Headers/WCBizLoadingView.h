//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCBizLoadingView : UIView
{
    UIImageView *m_imageView;
    UILabel *m_labelTitle;
    UILabel *m_labelMsg;
    UIImageView *backgroundView;
    UIImageView *m_logoView;
    _Bool m_bIgnoringInteractionEventsWhenLoading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIgnoringInteractionEventsWhenLoading; // @synthesize m_bIgnoringInteractionEventsWhenLoading;
- (id)insideGetCurrentViewController;
- (void)stopLoading;
- (void)startLoading;
- (void)setMessage:(id)arg1;
- (void)usePayLogo;
- (void)setLogo:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)autoLayoutInCenter;
- (id)init;

@end

