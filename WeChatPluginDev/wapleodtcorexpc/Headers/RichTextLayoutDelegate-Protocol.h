//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RichTextView;

@protocol RichTextLayoutDelegate <NSObject>

@optional
- (void)richTextView:(RichTextView *)arg1 updateTruncatedTrailing:(_Bool)arg2 truncatedViewframe:(struct CGRect)arg3 lastStyleViewFrame:(struct CGRect)arg4;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(RichTextView *)arg3;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(RichTextView *)arg3;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(RichTextView *)arg2;
@end

