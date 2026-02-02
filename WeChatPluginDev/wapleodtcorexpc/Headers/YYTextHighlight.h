//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface YYTextHighlight : NSObject
{
    NSDictionary *_attributes;
    NSDictionary *_userInfo;
    CDUnknownBlockType _tapAction;
    CDUnknownBlockType _longPressAction;
}

+ (id)highlightWithBackgroundColor:(id)arg1;
+ (id)highlightWithAttributes:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType longPressAction; // @synthesize longPressAction=_longPressAction;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)setAttachment:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setBackgroundBorder:(id)arg1;
- (void)setStrikethrough:(id)arg1;
- (void)setUnderline:(id)arg1;
- (void)setInnerShadow:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setTextAttribute:(id)arg1 value:(id)arg2;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)_makeMutableAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

