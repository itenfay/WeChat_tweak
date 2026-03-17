//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@class NSObject;
@protocol MMFlutterEdgeGestureDelegate;

@interface MMFlutterEdgeGesture : UIScreenEdgePanGestureRecognizer
{
    NSObject<MMFlutterEdgeGestureDelegate> *_touchDelegate;
}

@property(nonatomic) NSObject<MMFlutterEdgeGestureDelegate> *touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

