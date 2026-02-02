//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveCommentPubbleCell;

@interface MMFinderLiveTopCommentContentView : UIView
{
    _Bool _innerShouldDisplay;
    _Bool _outerShouldDisplay;
    double _topCommentMaxWidth;
    double _topCommentMaxHeight;
    double _topCommentMinWidth;
    double _topCommentMinHeight;
    MMLiveCommentPubbleCell *_displayPubbleCell;
    double _currentLayoutStandardWidth;
    double _currentLayoutFontScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool outerShouldDisplay; // @synthesize outerShouldDisplay=_outerShouldDisplay;
@property(nonatomic) _Bool innerShouldDisplay; // @synthesize innerShouldDisplay=_innerShouldDisplay;
@property(nonatomic) double currentLayoutFontScale; // @synthesize currentLayoutFontScale=_currentLayoutFontScale;
@property(nonatomic) double currentLayoutStandardWidth; // @synthesize currentLayoutStandardWidth=_currentLayoutStandardWidth;
@property(retain, nonatomic) MMLiveCommentPubbleCell *displayPubbleCell; // @synthesize displayPubbleCell=_displayPubbleCell;
@property(nonatomic) double topCommentMinHeight; // @synthesize topCommentMinHeight=_topCommentMinHeight;
@property(nonatomic) double topCommentMinWidth; // @synthesize topCommentMinWidth=_topCommentMinWidth;
@property(nonatomic) double topCommentMaxHeight; // @synthesize topCommentMaxHeight=_topCommentMaxHeight;
@property(nonatomic) double topCommentMaxWidth; // @synthesize topCommentMaxWidth=_topCommentMaxWidth;
- (double)getPubbleWidth:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateDisplay;
- (void)updateUIForLayoutFontScaleChanged;
- (void)updateLayoutFontScale;
- (void)updateLayoutStandardWidth;
- (void)initDefaultLayoutFontScale;
- (void)initDefaultLayoutStandardWidth;
- (_Bool)judgeLayoutFontScaleChanged;
- (_Bool)judgeLayoutStandardWidthChanged;
- (void)layoutSubviews;

@end

