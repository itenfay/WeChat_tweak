//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MJPublisherButton, NSString;
@protocol MJSegmentReusableViewDelegate;

@interface MJOSTRecognitionRetryAccessoryView : UICollectionReusableView
{
    id <MJSegmentReusableViewDelegate> _delegate;
    MJPublisherButton *_retryButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPublisherButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)prepareForReuse;
- (void)retryButtonTouchUpInside:(id)arg1;
- (void)setupViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

