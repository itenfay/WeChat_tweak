//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCPayPaidDetailFinderInfoViewData;
@protocol WCPayPaidDetailFinderInfoViewDelegate;

@interface WCPayPaidDetailFinderInfoView : UIView
{
    WCPayPaidDetailFinderInfoViewData *_viewData;
    id <WCPayPaidDetailFinderInfoViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayPaidDetailFinderInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayPaidDetailFinderInfoViewData *viewData; // @synthesize viewData=_viewData;
- (void)coverBtnClick;
- (void)setupContentView;
- (id)initFinderInfoViewWithViewData:(id)arg1 delegate:(id)arg2;

@end

