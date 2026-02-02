//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMToastView, NSString;

@interface MMLoadingView : UIView
{
    _Bool _loading;
    _Bool _ignoreInteractionEventsWhenLoading;
    _Bool _previousLoading;
    _Bool _shouldResumeInteraction;
    NSString *_text;
    MMToastView *_loadingView;
    double _toastDuration;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResumeInteraction; // @synthesize shouldResumeInteraction=_shouldResumeInteraction;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double toastDuration; // @synthesize toastDuration=_toastDuration;
@property(retain, nonatomic) MMToastView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool previousLoading; // @synthesize previousLoading=_previousLoading;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool ignoreInteractionEventsWhenLoading; // @synthesize ignoreInteractionEventsWhenLoading=_ignoreInteractionEventsWhenLoading;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)privateCheckLoadingViewCenter;
- (id)privateText;
- (void)privateRealStopLoading;
- (void)privateRealStartLoading;
- (void)privateEndToast;
- (void)privateCheckLoadingAction;
- (void)privateStopLoading;
- (void)showLoadingView;
- (void)updateLayout;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 duration:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 duration:(double)arg3;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1 duration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stopLoadingAndShowOK:(id)arg1 duration:(double)arg2;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoading;
- (void)startLoadingAfterDelay:(double)arg1;
- (void)startLoading;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

