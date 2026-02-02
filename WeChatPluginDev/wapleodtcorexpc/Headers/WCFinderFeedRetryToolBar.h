//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol WCFinderFeedRetryToolBarDelegate;

@interface WCFinderFeedRetryToolBar : UIView
{
    id <WCFinderFeedRetryToolBarDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderFeedRetryToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickRetryAction;
- (void)clickCancelAction;
- (id)initWithFrame:(struct CGRect)arg1 errorTips:(id)arg2 errorReason:(id)arg3 buttonOptionFlag:(unsigned long long)arg4 errorTipsLabelColor:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 errorTips:(id)arg2 buttonOptionFlag:(unsigned long long)arg3;

@end

