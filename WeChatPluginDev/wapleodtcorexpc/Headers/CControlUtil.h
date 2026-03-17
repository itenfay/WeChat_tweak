//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CControlUtil : NSObject
{
}

+ (id)fitString:(id)arg1 Width:(double)arg2 font:(id)arg3 tailString:(id)arg4;
+ (_Bool)pointInRect:(struct CGRect)arg1 point:(struct CGPoint)arg2 error:(double)arg3;
+ (struct CGRect)autoFitRectForLableAllowMultipleLines:(id)arg1;
+ (struct CGRect)autoFitRectForLable:(id)arg1;
+ (double)enterpriseChatNameLabelMinWidth:(id)arg1;
+ (struct CGSize)labelSizeOfLabel:(id)arg1 maxWidth:(double)arg2;
+ (struct CGSize)labelSizeOfLabel:(id)arg1;
+ (double)labelWordBreakHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 lineSpacing:(double)arg4;
+ (double)labelWordBreakHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelWordBreakWidth:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4 lineSpacing:(double)arg5;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4;
+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelHeight:(id)arg1;
+ (double)labelWidth:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (double)labelLineHeight:(id)arg1;
+ (unsigned long long)labelNumberOfLines:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4;
+ (unsigned long long)labelNumberOfLines:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;

@end

