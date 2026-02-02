//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayNoticeBannerView : UIView
{
    id <WCPayNoticeBannerViewDelegate> _m_delegate;
    UILabel *_m_titleLabel;
    NSString *_m_clickUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_clickUrl; // @synthesize m_clickUrl=_m_clickUrl;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(nonatomic) __weak id <WCPayNoticeBannerViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onTap:(id)arg1;
- (void)updateUrl:(id)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

