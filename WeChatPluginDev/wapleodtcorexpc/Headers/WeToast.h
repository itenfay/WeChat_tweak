//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMToastParameter, MMToastView;

@interface WeToast
{
    _Bool _needEndEditing;
    _Bool _blockUserInteraction;
    _Bool _loadingStyle;
    _Bool _customTimeLoading;
    _Bool _forbidAccessibilityAnnouncement;
    _Bool _isShowing;
    double _showDuration;
    unsigned long long _supportedOrientationsInIphone;
    MMToastView *_toastView;
    MMToastParameter *_parameter;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _transitionToNewSizeBlock;
    struct UIEdgeInsets _contentInsets;
}

+ (id)toast;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transitionToNewSizeBlock; // @synthesize transitionToNewSizeBlock=_transitionToNewSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MMToastParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) MMToastView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool forbidAccessibilityAnnouncement; // @synthesize forbidAccessibilityAnnouncement=_forbidAccessibilityAnnouncement;
@property(nonatomic) _Bool customTimeLoading; // @synthesize customTimeLoading=_customTimeLoading;
@property(nonatomic) _Bool loadingStyle; // @synthesize loadingStyle=_loadingStyle;
@property(nonatomic) unsigned long long supportedOrientationsInIphone; // @synthesize supportedOrientationsInIphone=_supportedOrientationsInIphone;
@property(nonatomic) _Bool blockUserInteraction; // @synthesize blockUserInteraction=_blockUserInteraction;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) _Bool needEndEditing; // @synthesize needEndEditing=_needEndEditing;
@property(nonatomic) double showDuration; // @synthesize showDuration=_showDuration;
- (id)topViewControllerInMainWindow;
- (void)showIconToastWithText:(id)arg1 success:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showIconToastWithText:(id)arg1 success:(_Bool)arg2;
- (void)showErrorToastWithText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showErrorToastWithText:(id)arg1;
- (void)showDoneToastWithText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showDoneToastWithText:(id)arg1;
- (void)showToastWithIcon:(id)arg1 iconImage:(id)arg2 text:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)showToastWithIcon:(id)arg1 text:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showToastWithIconImage:(id)arg1 text:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showToastWithIcon:(id)arg1 text:(id)arg2;
- (void)showToastWithText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showToastWithText:(id)arg1;
- (void)privateHideToast;
- (void)privateShowToast;
- (CDUnknownBlockType)hideToast;
- (CDUnknownBlockType)showToast;
- (CDUnknownBlockType)transitionToNewSize;
- (CDUnknownBlockType)completion;
- (CDUnknownBlockType)customView;
- (CDUnknownBlockType)attributedString;
- (CDUnknownBlockType)loading;
- (CDUnknownBlockType)icon;
- (CDUnknownBlockType)svgIconName;
- (CDUnknownBlockType)text;
- (CDUnknownBlockType)errorText;
- (CDUnknownBlockType)doneText;
- (CDUnknownBlockType)block;
- (CDUnknownBlockType)insets;
- (CDUnknownBlockType)endEditing;
- (CDUnknownBlockType)duration;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)hideWithAnimated:(int)arg1;
- (id)init;

@end

