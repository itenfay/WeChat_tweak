//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNotifyCommentLogic, UIView;

@interface MMFinderLivePublicCommentContentView
{
    UIView *_notifyCommentContentView;
    MMFinderLiveNotifyCommentLogic *_notifyCommentLogic;
    UIView *_notifyCommentContentContainerView;
    double _currentNotifyCommentContentViewHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double currentNotifyCommentContentViewHeight; // @synthesize currentNotifyCommentContentViewHeight=_currentNotifyCommentContentViewHeight;
@property(retain, nonatomic) UIView *notifyCommentContentContainerView; // @synthesize notifyCommentContentContainerView=_notifyCommentContentContainerView;
@property(retain, nonatomic) MMFinderLiveNotifyCommentLogic *notifyCommentLogic; // @synthesize notifyCommentLogic=_notifyCommentLogic;
@property(retain, nonatomic) UIView *notifyCommentContentView; // @synthesize notifyCommentContentView=_notifyCommentContentView;
- (void)hideNotifyContentView;
- (void)updateNotifyContentViewDisplay;
- (void)changeNotifyContentViewSuperview:(id)arg1;
- (void)layoutNotifyContentView;
- (double)commentContentViewTop;
- (double)getNotifyAreaHeight;
- (void)innerCheckCommentContentTopIsChanged;
- (void)checkCommentContentTopIsChanged;
- (void)reportExpose:(id)arg1;
- (void)layoutNotifyCommentContentContainerView:(double)arg1;
- (void)layoutNotifyCommentContentView;
- (void)layoutUI;

@end

