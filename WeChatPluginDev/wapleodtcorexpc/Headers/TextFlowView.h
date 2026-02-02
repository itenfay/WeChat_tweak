//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSString, UIFont, UILabel;

@interface TextFlowView : UIView
{
    _Bool _needFlow;
    MMTimer *_timer;
    long long _textAlignment;
    unsigned int _spaceLength;
    UIFont *_font;
    NSString *_text;
    UILabel *_label;
    long long _startIndex;
    double _XOffset;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int spaceLength; // @synthesize spaceLength=_spaceLength;
- (void)setTextColor:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Font:(id)arg2 Text:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)cancelRun;
- (void)startRun;
- (void)timerAction;
- (struct CGSize)computeTextSize:(id)arg1 Font:(id)arg2;
- (struct CGRect)moveNewPoint:(struct CGPoint)arg1 rect:(struct CGRect)arg2;

@end

