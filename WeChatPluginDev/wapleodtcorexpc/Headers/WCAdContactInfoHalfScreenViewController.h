//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdConventionalHalfScreenCustomBackgroundView;
@protocol WCAdContactInfoHalfScreenViewControllerDelegate;

@interface WCAdContactInfoHalfScreenViewController
{
    _Bool _isContactViewFullyVisible;
    _Bool _isContactViewClosedByUser;
    id <WCAdContactInfoHalfScreenViewControllerDelegate> _delegate;
    WCAdConventionalHalfScreenCustomBackgroundView *_customBackgroundView;
}

+ (double)profilePageSheetHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isContactViewClosedByUser; // @synthesize isContactViewClosedByUser=_isContactViewClosedByUser;
@property(nonatomic) _Bool isContactViewFullyVisible; // @synthesize isContactViewFullyVisible=_isContactViewFullyVisible;
@property(retain, nonatomic) WCAdConventionalHalfScreenCustomBackgroundView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) __weak id <WCAdContactInfoHalfScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidChangeVisibleHeight:(id)arg1 toHeight:(double)arg2;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (id)onCustomBackgroundViewHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dismissContactInfoPageSheetWithAnimated:(_Bool)arg1;
- (_Bool)isContactInfoPageSheetClosedByUser;
- (id)getAdSheetAdapter;
- (void)showHalfScreenFromViewController:(id)arg1 animated:(_Bool)arg2;
- (double)fetchContactHalfScreenHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

