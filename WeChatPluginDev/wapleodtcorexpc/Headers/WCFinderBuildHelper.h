//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderBuildHelper : NSObject
{
}

+ (void)makeHalfCorner:(id)arg1;
+ (_Bool)targetViewIsShowing:(id)arg1;
+ (id)buildWxAvatarImageViewSize:(struct CGSize)arg1 wxUsername:(id)arg2 iconUrl:(id)arg3;
+ (id)buildLongVideoCardSeeLaterButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)createGradientMaskViewRenderFrame:(struct CGRect)arg1 blankArea:(struct CGRect)arg2 targetView:(id)arg3;
+ (struct CGRect)subtractRect:(struct CGRect)arg1 withRect:(struct CGRect)arg2;
+ (id)calculateSubStringCount:(id)arg1 str:(id)arg2;
+ (void)shakeAnimationForView:(id)arg1;
+ (id)splitWXEmotionFromContent:(id)arg1;
+ (double)getTargetTextRichTextViewWidthByContent:(id)arg1;
+ (double)getRichTextViewWidthByFont:(id)arg1 lineNumber:(long long)arg2 content:(id)arg3;
+ (id)buildFinderIconRedDotSize:(struct CGSize)arg1 lightUrl:(id)arg2 darkUrl:(id)arg3 tintColor:(id)arg4;
+ (id)buildFinderAvatorRedDotSize:(struct CGSize)arg1 imageUrl:(id)arg2 isSquare:(_Bool)arg3;
+ (id)buildFinderAvatorRedDotSize:(struct CGSize)arg1 imageUrl:(id)arg2;
+ (id)createCellWithImage:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 themeColor:(id)arg5 showRightArrow:(_Bool)arg6 backgroundColor:(id)arg7 width:(double)arg8 leftPadding:(double)arg9 rightPadding:(double)arg10;
+ (id)createCellWithImage:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 themeColor:(id)arg5 showRightArrow:(_Bool)arg6 backgroundColor:(id)arg7 width:(double)arg8;
+ (id)createSwitchCellWithTitle:(id)arg1 recommendTips:(id)arg2 recommendTag:(long long)arg3 subTitle:(id)arg4 rightIcon:(id)arg5 backgroundColor:(id)arg6 width:(double)arg7 themeColor:(id)arg8 target:(id)arg9 switchOn:(_Bool)arg10 switchTag:(long long)arg11 tipsClickAction:(SEL)arg12 switchChangeAction:(SEL)arg13;
+ (id)buildFinderCustomImgRichTextViewWithFrame:(struct CGRect)arg1 fWidth:(double)arg2 parserType:(unsigned long long)arg3 lineNumber:(long long)arg4 font:(id)arg5 textColor:(id)arg6 textAlignment:(long long)arg7 inlineVerticalAlign:(long long)arg8 defaultText:(id)arg9;
+ (id)buildRichTextViewWithFrame:(struct CGRect)arg1 fWidth:(double)arg2 parserType:(unsigned long long)arg3 lineNumber:(long long)arg4 font:(id)arg5 textColor:(id)arg6 textAlignment:(long long)arg7 inlineVerticalAlign:(long long)arg8 defaultText:(id)arg9;
+ (id)buildImageButtonWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 selectImage:(id)arg3 expandHitHeight:(double)arg4 expandHitWidth:(double)arg5 cornerRadius:(double)arg6 target:(id)arg7 action:(SEL)arg8 voiceOverTips:(id)arg9;
+ (id)truncateString:(id)arg1 withFont:(id)arg2 maxWidth:(double)arg3 maxHeight:(double)arg4;
+ (id)buildLabelWithFont:(id)arg1 textColor:(id)arg2 textHeight:(double)arg3 defaultText:(id)arg4 maxWidth:(double)arg5 textAlignment:(long long)arg6;
+ (id)buildLabelWithFont:(id)arg1 textColor:(id)arg2 textAlignment:(long long)arg3;

@end

