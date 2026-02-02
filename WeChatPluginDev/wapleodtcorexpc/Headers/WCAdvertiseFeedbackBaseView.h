//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAdvertiseFeedbackViewDelegate;

@interface WCAdvertiseFeedbackBaseView
{
    id <WCAdvertiseFeedbackViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdvertiseFeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide;
- (void)show;

@end

