//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasPageViewController;

@interface WCCanvasPageMiddleViewController
{
    _Bool _hasJumped;
    WCCanvasPageViewController *_canvasPageVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasJumped; // @synthesize hasJumped=_hasJumped;
@property(retain, nonatomic) WCCanvasPageViewController *canvasPageVC; // @synthesize canvasPageVC=_canvasPageVC;
- (void)onCanvasViewDidBePushed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCanvasPageVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

