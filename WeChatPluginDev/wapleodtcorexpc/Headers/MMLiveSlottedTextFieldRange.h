//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextRange.h>

@interface MMLiveSlottedTextFieldRange : UITextRange
{
    long long _startIndex;
    long long _endIndex;
}

+ (id)rangeWithRange:(struct _NSRange)arg1;
+ (id)rangeWithStartIndex:(long long)arg1 length:(long long)arg2;
+ (id)rangeWithStartIndex:(long long)arg1 endIndex:(long long)arg2;
@property(nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) long long length;
- (id)end;
- (id)start;
- (_Bool)isEmpty;
- (void)setWithRange:(struct _NSRange)arg1;
- (void)setWithStartIndex:(long long)arg1 length:(long long)arg2;

@end

