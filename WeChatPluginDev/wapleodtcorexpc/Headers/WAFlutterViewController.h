//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterEngine, NSMutableSet;

@interface WAFlutterViewController
{
    _Bool _isRealAppear;
    FlutterEngine *_skylineEngine;
    NSMutableSet *_touchSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealAppear; // @synthesize isRealAppear=_isRealAppear;
@property(retain, nonatomic) NSMutableSet *touchSet; // @synthesize touchSet=_touchSet;
@property(retain, nonatomic) FlutterEngine *skylineEngine; // @synthesize skylineEngine=_skylineEngine;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)dealloc;
- (void)cancelTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)revertOpaque;
- (void)updateByUIWindow:(id)arg1;
- (void)destroyFlutterEngine;
- (void)detachFlutterEngine;
- (id)initWithEngine:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;

@end

