//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITapGestureRecognizer.h>

@protocol POITapGestureRecognizerDelegate;

@interface POITapGestureRecognizer : UITapGestureRecognizer
{
    id <POITapGestureRecognizerDelegate> _actionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <POITapGestureRecognizerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

