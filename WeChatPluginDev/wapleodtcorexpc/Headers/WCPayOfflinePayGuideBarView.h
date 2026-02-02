//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, WCPayOfflinePayGuideBar, WCPayWebImageView;
@protocol WCPayOfflinePayGuideBarViewDelegate;

@interface WCPayOfflinePayGuideBarView : UIView
{
    WCPayOfflinePayGuideBar *_viewData;
    id <WCPayOfflinePayGuideBarViewDelegate> _delegate;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_contentLabel;
    UIButton *_clickBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(nonatomic) __weak id <WCPayOfflinePayGuideBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayOfflinePayGuideBar *viewData; // @synthesize viewData=_viewData;
- (void)onBtnClick;
- (void)setupContentView;
- (id)initWithContiainerWidth:(double)arg1 delegate:(id)arg2 viewData:(id)arg3;

@end

