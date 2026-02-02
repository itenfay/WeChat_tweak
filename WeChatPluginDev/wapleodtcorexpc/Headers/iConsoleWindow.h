//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface iConsoleWindow
{
    _Bool _haveFirstTouch;
    _Bool _shouldLogHitTest;
    int _logHitTestCount;
}

+ (id)createWindow;
+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (void)initialize;
@property(nonatomic) int logHitTestCount; // @synthesize logHitTestCount=_logHitTestCount;
@property(nonatomic) _Bool shouldLogHitTest; // @synthesize shouldLogHitTest=_shouldLogHitTest;
@property(nonatomic) _Bool haveFirstTouch; // @synthesize haveFirstTouch=_haveFirstTouch;
- (_Bool)lookin_shouldCaptureImage;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)accessibilityElementsHidden;
- (void)setRootViewController:(id)arg1;
- (void)becomeKeyWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;

@end

