//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MJPublisherButton, MJTimelineViewModel, NSString;
@protocol MJSegmentReusableViewDelegate;

@interface MJTimelineLeadingAccessoryView : UICollectionReusableView
{
    id <MJSegmentReusableViewDelegate> _delegate;
    MJPublisherButton *_muteButton;
    MJTimelineViewModel *_timelineVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
@property(retain, nonatomic) MJPublisherButton *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) __weak id <MJSegmentReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)prepareForReuse;
- (void)updateMuteButton;
- (void)setupWithTimelineViewModel:(id)arg1;
- (void)muteButtonTouchUpInside:(id)arg1;
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

