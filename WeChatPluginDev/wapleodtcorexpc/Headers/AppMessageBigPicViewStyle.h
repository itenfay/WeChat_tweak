//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface AppMessageBigPicViewStyle : NSObject
{
    double _bigPicEdgeInset;
    double _avatarSize;
    double _iconNameSpacing;
    double _nameFontSize;
    double _picCountFontSize;
    double _picCountIconSize;
    double _titleFontSize;
    double _titleEdgeInset;
    UIColor *_bgColor;
    double _gradientHeight;
    CDUnknownBlockType _sizeCalculation;
}

+ (id)timelineStyle;
+ (id)messageRecordStyle;
+ (id)appMessageStyle;
+ (CDUnknownBlockType)fixWidthSizeCalculationWithWidth:(double)arg1;
+ (id)forwardPreviewSheetStyle;
+ (id)forwardPreviewStyle;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sizeCalculation; // @synthesize sizeCalculation=_sizeCalculation;
@property(readonly, nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) double titleEdgeInset; // @synthesize titleEdgeInset=_titleEdgeInset;
@property(readonly, nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(readonly, nonatomic) double picCountIconSize; // @synthesize picCountIconSize=_picCountIconSize;
@property(readonly, nonatomic) double picCountFontSize; // @synthesize picCountFontSize=_picCountFontSize;
@property(readonly, nonatomic) double nameFontSize; // @synthesize nameFontSize=_nameFontSize;
@property(readonly, nonatomic) double iconNameSpacing; // @synthesize iconNameSpacing=_iconNameSpacing;
@property(readonly, nonatomic) double avatarSize; // @synthesize avatarSize=_avatarSize;
@property(readonly, nonatomic) double bigPicEdgeInset; // @synthesize bigPicEdgeInset=_bigPicEdgeInset;
- (struct CGSize)estimateSizeForOriginSize:(struct CGSize)arg1;
- (id)initWithBigPicEdgeInset:(double)arg1 avatarSize:(double)arg2 iconNameSpacing:(double)arg3 nameFontSize:(double)arg4 picCountFontSize:(double)arg5 picCountIconSize:(double)arg6 titleFontSize:(double)arg7 titleEdgeInset:(double)arg8 bgColor:(id)arg9 gradientHeight:(double)arg10 sizeCalculation:(CDUnknownBlockType)arg11;

@end

