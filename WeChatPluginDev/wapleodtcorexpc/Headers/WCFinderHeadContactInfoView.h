//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSHashTable, NSMutableArray, RichTextView;

@interface WCFinderHeadContactInfoView : UIView
{
    _Bool _hasChangeFontSize;
    RichTextView *_nameLabel;
    double _maxWidth;
    NSArray *_otherViewsArray;
    UIView *_lastShowView;
    NSMutableArray *_showViewArray;
    unsigned long long _currentShowLineType;
    NSHashTable *_currentOtherViewsArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *currentOtherViewsArray; // @synthesize currentOtherViewsArray=_currentOtherViewsArray;
@property(nonatomic) _Bool hasChangeFontSize; // @synthesize hasChangeFontSize=_hasChangeFontSize;
@property(nonatomic) unsigned long long currentShowLineType; // @synthesize currentShowLineType=_currentShowLineType;
@property(retain, nonatomic) NSMutableArray *showViewArray; // @synthesize showViewArray=_showViewArray;
@property(retain, nonatomic) UIView *lastShowView; // @synthesize lastShowView=_lastShowView;
@property(copy, nonatomic) NSArray *otherViewsArray; // @synthesize otherViewsArray=_otherViewsArray;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id)getLayoutCache;
- (id)genGradientMaskView;
- (long long)overrideUserInterfaceStyle;
- (void)relayoutShowArray;
- (void)reloadLayout;
- (_Bool)layoutSubView:(id)arg1 lastView:(id)arg2;
- (void)checkShouldAdjustNameLabelWithView:(id)arg1;
- (struct CGRect)getLastLineRect;
- (_Bool)addViewOverMaxWidth:(id)arg1;
- (struct CGRect)getLastViewFrame;
- (void)updateNickname:(id)arg1 maxWidth:(double)arg2 otherViews:(id)arg3;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

