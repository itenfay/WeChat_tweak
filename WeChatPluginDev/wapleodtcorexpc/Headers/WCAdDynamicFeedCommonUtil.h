//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdDynamicFeedCommonUtil : NSObject
{
}

+ (_Bool)shouldProcessHitTest:(struct CGPoint)arg1 withEvent:(id)arg2 forView:(id)arg3;
+ (struct CGSize)calcMediaSizeForMediaItem:(id)arg1 dataItem:(id)arg2 elementInfo:(id)arg3 fitSize:(struct CGSize)arg4;
+ (void)setAllDynamicCornersToView:(id)arg1 recursive:(_Bool)arg2;
+ (double)fetchDynamicCornerRadiusForView:(id)arg1;
+ (id)fetchTextFontWithInfo:(id)arg1 defaultFontSize:(double)arg2;
+ (id)fetchTextFontWithInfo:(id)arg1;
+ (id)genSpecialContainerViewWithElementInfo:(id)arg1;
+ (id)genGridViewWithElementInfo:(id)arg1 adInfo:(id)arg2 dataItem:(id)arg3;
+ (id)genSeparatorViewWithElementInfo:(id)arg1;
+ (id)genTagViewWithElementInfo:(id)arg1 adInfo:(id)arg2;
+ (id)genEasyBuyViewWithElementInfo:(id)arg1;
+ (id)genButtonViewWithElementInfo:(id)arg1 adInfo:(id)arg2;
+ (id)genImageViewWithElementInfo:(id)arg1 adInfo:(id)arg2 dataItem:(id)arg3 index:(unsigned long long)arg4;
+ (id)genTextViewWithElementInfo:(id)arg1 adInfo:(id)arg2;
+ (id)genLabelWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 lineSpacing:(double)arg4 numberOfLines:(long long)arg5 textAlign:(long long)arg6;
+ (void)layoutCommonItemWithFlex:(void *)arg1 elementInfo:(id)arg2;
+ (void)appendLayoutWithContainer:(id)arg1 flex:(void *)arg2 dataItem:(id)arg3 index:(unsigned long long)arg4 elementInfo:(id)arg5 animationHandler:(CDUnknownBlockType)arg6;
+ (void)appendLayoutWithContainer:(id)arg1 flex:(void *)arg2 dataItem:(id)arg3 elementInfo:(id)arg4 animationHandler:(CDUnknownBlockType)arg5;
+ (_Bool)shouldViewEnabledUserInteractionForElementInfo:(id)arg1 adInfo:(id)arg2;
+ (_Bool)shouldKeepOutOfLayoutForElement:(id)arg1;
+ (_Bool)needToGenEmptyLayoutWithElementInfo:(id)arg1;
+ (id)appendViewWithElementInfo:(id)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3 isLayoutContainer:(_Bool *)arg4;
+ (id)generateLayoutWithDataItem:(id)arg1 animationHandler:(CDUnknownBlockType)arg2;
+ (id)calculateAdjustedMargin:(id)arg1 dataItem:(id)arg2;
+ (id)calculateAdjustedLength:(id)arg1 dataItem:(id)arg2;
+ (void)parseAdjustedValues:(id)arg1 dataItem:(id)arg2;
+ (struct CGSize)calculateCardMediaSize;
+ (struct CGSize)calculateMediaSizeWithMediaItem:(id)arg1 dataItem:(id)arg2;
+ (id)getLocalImageWithResource:(id)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3;
+ (id)getDisplayTypeForOriValue:(id)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3;
+ (id)getValueForParams:(id)arg1 fromAdInfo:(id)arg2;
+ (id)invokeGetFirstNotBlankValueFor:(id)arg1 fromAdInfo:(id)arg2;
+ (id)invokeGetValueFor:(id)arg1 fromAdInfo:(id)arg2;
+ (id)substringFor:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
+ (id)getValueForOriValue:(id)arg1 fromAdInfo:(id)arg2;

@end

