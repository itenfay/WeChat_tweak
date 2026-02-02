//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor, WCRecordFBNormalView, WCRecordFBSmallView;

@interface WCRecordFeedbackView : UIView
{
    _Bool _bShowRecordingState;
    WCRecordFBSmallView *_smallFbView;
    WCRecordFBNormalView *_normalFbView;
    UIColor *_pillarColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *pillarColor; // @synthesize pillarColor=_pillarColor;
@property(retain, nonatomic) WCRecordFBNormalView *normalFbView; // @synthesize normalFbView=_normalFbView;
@property(retain, nonatomic) WCRecordFBSmallView *smallFbView; // @synthesize smallFbView=_smallFbView;
@property(nonatomic) _Bool bShowRecordingState; // @synthesize bShowRecordingState=_bShowRecordingState;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPeakPower:(float)arg1;
- (void)initNormalFbView;
- (void)initSmallFbView;
- (id)initWithFrame:(struct CGRect)arg1 pillarColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

