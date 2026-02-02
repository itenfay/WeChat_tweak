//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIFont;

@interface WCTimeLineTagView : UIView
{
    NSArray *_dataArray;
    UIColor *_tagDefaultBackgroundColor;
    UIFont *_tagFont;
    UIColor *_tagDefaultColor;
    double _tagMargin;
    NSMutableArray *_labelArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *labelArray; // @synthesize labelArray=_labelArray;
@property(nonatomic) double tagMargin; // @synthesize tagMargin=_tagMargin;
@property(retain, nonatomic) UIColor *tagDefaultColor; // @synthesize tagDefaultColor=_tagDefaultColor;
@property(retain, nonatomic) UIFont *tagFont; // @synthesize tagFont=_tagFont;
@property(retain, nonatomic) UIColor *tagDefaultBackgroundColor; // @synthesize tagDefaultBackgroundColor=_tagDefaultBackgroundColor;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)layoutSubviews;
- (void)initLabelViews;
- (_Bool)isTagHasIcon:(int)arg1;
- (id)fetchIconUrl:(int)arg1 isForDark:(_Bool)arg2;
- (id)fetchDefaultUIImage;
- (id)fetchUIImageAtIndex:(int)arg1;
- (id)fetchTagNameAtIndex:(int)arg1;
- (id)fetchTagNameColorAtIndex:(int)arg1;
- (id)fetchTagBgColorAtIndex:(int)arg1;
- (id)fetchUIColorAtIndex:(int)arg1 isForTagName:(_Bool)arg2;
- (void)downloadIconInner:(id)arg1 isForDark:(_Bool)arg2 andIndex:(int)arg3;
- (void)checkAndDownloadIcon;
- (void)setIconImage:(id)arg1 andIndex:(int)arg2 isForDark:(_Bool)arg3;
- (void)setIconImageInner:(int)arg1;
- (void)setIconImage:(id)arg1 andUrl:(id)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

