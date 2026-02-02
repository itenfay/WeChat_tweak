//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITapGestureRecognizer.h>

@class NSString;
@protocol MMUIFastTapGestureRecognizerDelegate;

@interface MMUIFastTapGestureRecognizer : UITapGestureRecognizer
{
    double _tapMaxDelay;
    NSString *_contextString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contextString; // @synthesize contextString=_contextString;
@property(nonatomic) double tapMaxDelay; // @synthesize tapMaxDelay=_tapMaxDelay;
- (void)reset;
- (void)setStateToFailedIfNotRecognized;
- (void)setState:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <MMUIFastTapGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

