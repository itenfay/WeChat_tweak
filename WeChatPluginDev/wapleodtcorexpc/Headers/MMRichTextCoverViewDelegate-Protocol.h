//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSMutableArray, NSString, UIView;

@protocol MMRichTextCoverViewDelegate <NSObject>
- (_Bool)isEmojiLocation:(unsigned long long)arg1 bStart:(_Bool)arg2;
- (UIView *)delegateView;
- (float)getLineHeight;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1 FrontCursor:(_Bool)arg2;
- (struct _NSRange)getTouchRangeWithTouchPoint:(struct CGPoint)arg1;
- (NSString *)getTextString;
- (NSString *)getStringWithRange:(struct _NSRange)arg1;
- (NSMutableArray *)getSelectRectsWithRange:(struct _NSRange)arg1;

@optional
- (CMessageWrap *)getCurrentMessageWrap;
@end

