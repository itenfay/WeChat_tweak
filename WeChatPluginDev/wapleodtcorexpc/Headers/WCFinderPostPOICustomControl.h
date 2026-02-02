//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSMutableArray, NSString, UIColor;
@protocol WCFinderPostPOICustomControlDelegate;

@interface WCFinderPostPOICustomControl : UIControl
{
    unsigned int _poiStyle;
    id <WCFinderPostPOICustomControlDelegate> _delegate;
    NSString *_postSessionId;
    UIColor *_unselectedThemeColor;
    UIColor *_selectedThemeColor;
    double _iconWidth;
    double _defaultHeight;
    NSMutableArray *_bubbleViewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bubbleViewArray; // @synthesize bubbleViewArray=_bubbleViewArray;
@property(nonatomic) unsigned int poiStyle; // @synthesize poiStyle=_poiStyle;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(nonatomic) double iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) UIColor *selectedThemeColor; // @synthesize selectedThemeColor=_selectedThemeColor;
@property(retain, nonatomic) UIColor *unselectedThemeColor; // @synthesize unselectedThemeColor=_unselectedThemeColor;
@property(copy, nonatomic) NSString *postSessionId; // @synthesize postSessionId=_postSessionId;
@property(nonatomic) __weak id <WCFinderPostPOICustomControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeViews;
- (void)_removeBubbleViewArray;
- (void)bindRecommendBubbleReport;
- (id)buildBubbleTextView:(id)arg1 maxWidth:(double)arg2 attachObject:(id)arg3 index:(long long)arg4;
- (void)_setUpRecommendBy:(unsigned long long)arg1 titleContent:(id)arg2 recommendLocationArray:(id)arg3 selectGuideTips:(id)arg4;
- (void)_setUpDefaultViewWithSelectWithTitle:(id)arg1 guideTips:(id)arg2 guidePosition:(unsigned long long)arg3;
- (void)_setUpSelectedView:(id)arg1 selectGuideTips:(id)arg2;
- (id)buildArrowImageView;
- (id)getTitleLabel;
- (void)updateWithPoiStyle:(unsigned int)arg1 titleContent:(id)arg2 selectGuideTips:(id)arg3 guidePosition:(unsigned long long)arg4 recommendMaxLine:(unsigned long long)arg5 recommendLocationArray:(id)arg6 poiName:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1 unselectedThemeColor:(id)arg2 selectedThemeColor:(id)arg3 iconWidth:(double)arg4 defaultHeight:(double)arg5;

@end

