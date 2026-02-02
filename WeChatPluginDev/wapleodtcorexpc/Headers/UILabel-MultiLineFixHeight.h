//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class ZZLabelChainModel;

@interface UILabel (MultiLineFixHeight)
+ (CDUnknownBlockType)zz_create;
- (void)layoutWithText:(id)arg1 width:(double)arg2 lineHeight:(double)arg3 alignment:(long long)arg4;
@property(readonly, nonatomic) double expBottom;
@property(readonly, nonatomic) double expH;
@property(readonly, nonatomic) double expY;
@property(nonatomic) struct CGPoint expOrigin;
@property(nonatomic) struct CGRect expFrame;
- (void)setTextColorWithHex:(id)arg1;
- (void)sizeFitTwoLineMaxWidth:(double)arg1;
- (void)configMaxWidth:(double)arg1;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3 highlightFont:(id)arg4 highlightColor:(id)arg5;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3 highlightFont:(id)arg4;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(struct _NSRange)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (void)liveSetText:(id)arg1;
- (void)liveSetTextColor:(id)arg1;
- (void)setWXGWidgettextAlign:(id)arg1;
- (void)setWXGWidgethighlightTextColor:(id)arg1;
- (void)setWXGWidgetshadowColor:(id)arg1;
- (void)setWXGWidgetcolor:(id)arg1;
- (void)setWXGWidgetlineBreakMode:(id)arg1;
- (void)setWXGWidgetfontSize:(id)arg1;
- (void)autoFitAllowMultipleLines;
- (void)autoFit;
- (void)widthToFit;
- (void)heightToFitInLimitLines;
- (void)heightToFit;
@property(readonly, copy, nonatomic) ZZLabelChainModel *zz_setup;
- (void)sizeToFitWidth:(double)arg1;
- (void)sizeToFitWidth:(double)arg1 lineBreakMode:(long long)arg2;
@end

