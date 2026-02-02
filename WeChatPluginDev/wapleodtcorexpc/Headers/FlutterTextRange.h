//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextRange.h>

@interface FlutterTextRange : UITextRange
{
    struct _NSRange _range;
}

+ (id)rangeWithNSRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqualTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)end;
- (id)start;
- (id)initWithNSRange:(struct _NSRange)arg1;

@end

