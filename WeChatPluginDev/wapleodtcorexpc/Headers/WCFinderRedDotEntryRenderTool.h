//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedDotEntryRenderTool : NSObject
{
}

+ (id)currentShowInfoAccessibilityLabel:(id)arg1;
+ (int)getCurrentSyncUserScene;
+ (id)shouldCheckExposeStateRedDotPathArray;
+ (void)updateTargetRedDotAppearState:(_Bool)arg1 ctrlInfo:(id)arg2;
+ (void)updateTargetRedDotAppearState:(_Bool)arg1 targetPath:(id)arg2;
+ (void)updateFinderRedDotAppearState:(_Bool)arg1;
+ (void)resetRedDotContainerViewHeadImage:(id)arg1 entryScene:(unsigned long long)arg2;
+ (double)makeFindPageRedDotAlignmentWith:(id)arg1 entryCell:(id)arg2 reddotTextLabelX:(double)arg3 rightMargin:(double)arg4 reddotTextLabelMinX:(double)arg5 cellWidth:(double)arg6;
+ (void)configRedDotEntry:(struct stEntryRow *)arg1 atPath:(id)arg2;
+ (id)_renderAttributeCellView:(id)arg1 entryScene:(unsigned long long)arg2 availableRect:(struct CGRect)arg3 showInfo:(id)arg4 truncatedWording:(id)arg5;
+ (id)_renderCapsuleContainerView:(id)arg1 entryScene:(unsigned long long)arg2 availableRect:(struct CGRect)arg3 showInfo:(id)arg4 truncatedWording:(id)arg5;
+ (id)renderImageIconRedDotContainerView:(id)arg1 entryScene:(unsigned long long)arg2 availableRect:(struct CGRect)arg3 showInfo:(id)arg4 truncatedWording:(id)arg5;
+ (_Bool)isThumbnailTextContainer:(id)arg1;
+ (_Bool)isOriginalTextContainer:(id)arg1;
+ (id)genCommonRichTextViewByFontWeight:(int)arg1 fontSize:(double)arg2 widthLimit:(double)arg3;
+ (id)getAppendSuffixCharacter;
+ (id)getTextContentBy:(id)arg1 isOriginal:(_Bool)arg2 renderNodeModel:(id)arg3 renderConfig:(id)arg4 redDotContainerView:(id)arg5 availableRect:(struct CGRect)arg6;
+ (_Bool)renderIconIsValid:(id)arg1;
+ (_Bool)renderColorIsValid:(id)arg1;
+ (id)_renderAbbreviationAsAllNodeBy:(id)arg1 redDotContainerView:(id)arg2 availableRect:(struct CGRect)arg3 globalAttr:(id)arg4 isOriginal:(_Bool)arg5 exceedWidth:(double)arg6;
+ (id)_renderIgnoreDSLWidthLimitAsAllNodeBy:(id)arg1 redDotContainerView:(id)arg2 availableRect:(struct CGRect)arg3 globalAttr:(id)arg4 isOriginal:(_Bool)arg5 exceedWidth:(double)arg6;
+ (id)renderDSLNodeRedDotContainerView:(id)arg1 entryScene:(unsigned long long)arg2 availableRect:(struct CGRect)arg3 dslRenderImpl:(id)arg4;
+ (double)calcRichTextViewTargetWidthBy:(id)arg1 width:(double)arg2;
+ (id)_renderSingleTextNodeRedDotContainerView:(id)arg1 node:(id)arg2 availableRect:(struct CGRect)arg3 leftLine:(double)arg4 isOriginal:(_Bool)arg5 remainNodes:(id)arg6 globalAttr:(id)arg7 nodeIndex:(long long)arg8 renderConfig:(id)arg9;
+ (double)estimatePlaceWidthFromNodes:(id)arg1;
+ (id)_renderAttributeTextNodeRedDotContainerView:(id)arg1 nodesArray:(id)arg2 availableRect:(struct CGRect)arg3 leftLine:(double)arg4 isOriginal:(_Bool)arg5 globalAttr:(id)arg6 nodeIndex:(long long)arg7 renderConfig:(id)arg8 isAllTextNode:(_Bool)arg9 remainNodes:(id)arg10;
+ (double)getRenderRemainWidthByNodesArray:(id)arg1 availableRect:(struct CGRect)arg2 leftLine:(double)arg3 isOriginal:(_Bool)arg4 remainNodes:(id)arg5 capsuleBackgroundColor:(id)arg6;
+ (struct CGSize)genTargetDSLRedDotBubbleSize:(id)arg1 leftPadding:(double)arg2 rightPadding:(double)arg3;
+ (void)layoutDSLRedDotBubble:(id)arg1 availableRect:(struct CGRect)arg2;
+ (id)_renderGlobalAttrByRedDotContainerView:(id)arg1 availableRect:(struct CGRect)arg2 globalAttr:(id)arg3 leftLine:(double)arg4;
+ (id)_renderAllNodeBy:(id)arg1 redDotContainerView:(id)arg2 availableRect:(struct CGRect)arg3 globalAttr:(id)arg4 isOriginal:(_Bool)arg5 renderConfig:(id)arg6;
+ (id)_renderSingleAvatarNodeRedDotContainerView:(id)arg1 node:(id)arg2 availableRect:(struct CGRect)arg3 leftLine:(double)arg4 isOriginal:(_Bool)arg5 globalAttr:(id)arg6 nodeIndex:(long long)arg7;
+ (double)_getCurRedDotContainerViewDSLViewMaxRight:(id)arg1;
+ (void)addDSLPinView:(id)arg1 toContainerView:(id)arg2 nodeIndex:(long long)arg3;
+ (_Bool)isDSLRenderViewFromContainerView:(id)arg1;
+ (id)_pinRedDotInfo:(id)arg1 redDotAttr:(id)arg2 pinView:(id)arg3 availableRect:(struct CGRect)arg4 leftLine:(double)arg5 redDotContainerView:(id)arg6 globalAttr:(id)arg7 nodeIndex:(long long)arg8;
+ (id)getLightDarkColorFromLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)getLightDarkColorFrom:(id)arg1;
+ (id)renderDSLRedDotWithDSLRender:(id)arg1 entryScene:(unsigned long long)arg2 containerView:(id)arg3 availableRect:(struct CGRect)arg4 truncatedWording:(id)arg5;
+ (id)renderRedDotContainerView:(id)arg1 entryScene:(unsigned long long)arg2 tEntry:(struct stEntryRow *)arg3 availableRect:(struct CGRect)arg4 truncatedWording:(id)arg5 bindReportView:(id)arg6;

@end

