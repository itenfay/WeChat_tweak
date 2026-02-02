//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MMSelectCoverView : UIView
{
    UIColor *_selectedColor;
    UIColor *_cursorColor;
    double _leftLineLength;
    double _topLineLength;
    double _rightLineLength;
    double _bottomLineLength;
    double _dotRadius;
    struct CGRect _leftCursorRect;
    struct CGRect _rightCursorRect;
}

- (void).cxx_destruct;
@property(nonatomic) double dotRadius; // @synthesize dotRadius=_dotRadius;
@property(nonatomic) double bottomLineLength; // @synthesize bottomLineLength=_bottomLineLength;
@property(nonatomic) double rightLineLength; // @synthesize rightLineLength=_rightLineLength;
@property(nonatomic) double topLineLength; // @synthesize topLineLength=_topLineLength;
@property(nonatomic) double leftLineLength; // @synthesize leftLineLength=_leftLineLength;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) struct CGRect rightCursorRect; // @synthesize rightCursorRect=_rightCursorRect;
@property(nonatomic) struct CGRect leftCursorRect; // @synthesize leftCursorRect=_leftCursorRect;
- (double)farBottom;
- (double)farTop;
- (double)farRight;
- (double)farLeft;
- (_Bool)isTouchInRightCursor:(struct CGPoint)arg1;
- (_Bool)isTouchInLeftCursor:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

