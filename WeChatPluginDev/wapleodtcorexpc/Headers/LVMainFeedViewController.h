//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LVDelayingGestureRecognizer;

@interface LVMainFeedViewController : NSObject
{
    LVDelayingGestureRecognizer *_delayingGestureRecognizer;
}

+ (id)commonReportParams;
+ (id)extraPlugins;
+ (id)routeName;
@property(retain, nonatomic) LVDelayingGestureRecognizer *delayingGestureRecognizer; // @synthesize delayingGestureRecognizer=_delayingGestureRecognizer;
- (void)releaseGesture;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)shouldSkipNavInteractiveGesture;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldInteractiveDismiss;

@end

