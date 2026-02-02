//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Size)
+ (double)baselineWithFont:(id)arg1 height:(double)arg2;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 maxHeight:(double)arg3 lineBreakMode:(long long)arg4 defaultFontSize:(double)arg5 minFontSize:(double)arg6;
- (double)fontSizeFittingWidth:(double)arg1 maxHeight:(double)arg2 lineBreakMode:(long long)arg3 defaultFontSize:(double)arg4 minFontSize:(double)arg5;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 lineBreakMode:(long long)arg3 defaultFontSize:(double)arg4 minFontSize:(double)arg5;
- (id)actualFont:(id)arg1 forWidth:(double)arg2;
- (id)prefixWithFont:(id)arg1 inWidth:(double)arg2;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4 alignment:(long long)arg5;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)stringSizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)stringSizeWithFont:(id)arg1;
@end

