//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCPayWebImageView, WCRedEnvelopesSelectSkinRedDotInfo;

@interface ContentReddotBubbleView : UIView
{
    UIImageView *_m_arrowImageView;
    UIImageView *_m_bubbleImageView;
    UILabel *_m_contentLabel;
    WCPayWebImageView *_m_iconImageView;
    WCRedEnvelopesSelectSkinRedDotInfo *_m_reddotInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinRedDotInfo *m_reddotInfo; // @synthesize m_reddotInfo=_m_reddotInfo;
@property(retain, nonatomic) WCPayWebImageView *m_iconImageView; // @synthesize m_iconImageView=_m_iconImageView;
@property(retain, nonatomic) UILabel *m_contentLabel; // @synthesize m_contentLabel=_m_contentLabel;
@property(retain, nonatomic) UIImageView *m_bubbleImageView; // @synthesize m_bubbleImageView=_m_bubbleImageView;
@property(retain, nonatomic) UIImageView *m_arrowImageView; // @synthesize m_arrowImageView=_m_arrowImageView;
- (void)setupSubviews;
- (id)initWithReddotInfo:(id)arg1;

@end

