//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFlexLayoutSwiftRef : NSObject
{
    void *_flex;
}

@property(nonatomic) void *flex; // @synthesize flex=_flex;
- (struct WCSize)sizeFromSwiftSize:(id)arg1;
- (struct WCValue)valueFromSwiftValue:(id)arg1;
- (int)unitFromSwiftUnit:(long long)arg1;
- (id)aspectRatio:(double)arg1;
- (id)ocSizeWithWidth:(id)arg1 height:(id)arg2;
- (id)ocSize:(id)arg1;
- (id)ocMaxHeight:(id)arg1;
- (id)ocMinHeight:(id)arg1;
- (id)ocHeight:(id)arg1;
- (id)ocMaxWidth:(id)arg1;
- (id)ocMinWidth:(id)arg1;
- (id)ocWidth:(id)arg1;
- (id)ocPaddingInsetsWithTop:(id)arg1 left:(id)arg2 bottom:(id)arg3 right:(id)arg4;
- (id)ocPadding:(id)arg1;
- (id)ocPaddingVertical:(id)arg1;
- (id)ocPaddingHorizontal:(id)arg1;
- (id)ocPaddingRight:(id)arg1;
- (id)ocPaddingBottom:(id)arg1;
- (id)ocPaddingLeft:(id)arg1;
- (id)ocPaddingTop:(id)arg1;
- (id)ocMarginInsetsWithTop:(id)arg1 left:(id)arg2 bottom:(id)arg3 right:(id)arg4;
- (id)ocMargin:(id)arg1;
- (id)ocMarginVertical:(id)arg1;
- (id)ocMarginHorizontal:(id)arg1;
- (id)ocMarginRight:(id)arg1;
- (id)ocMarginBottom:(id)arg1;
- (id)ocMarginLeft:(id)arg1;
- (id)ocMarginTop:(id)arg1;
- (id)ocRight:(id)arg1;
- (id)ocBottom:(id)arg1;
- (id)ocLeft:(id)arg1;
- (id)ocTop:(id)arg1;
- (id)shrink:(double)arg1;
- (id)wrap:(unsigned long long)arg1;
- (id)grow:(double)arg1;
- (id)absolute;
- (id)alignSelf:(unsigned long long)arg1;
- (id)alignItems:(unsigned long long)arg1;
- (id)justifyContent:(unsigned long long)arg1;
- (id)verticalDirection;
- (id)horizontalDirection;
- (id)layoutOrder:(int)arg1;
- (id)itemWithTag:(int)arg1;
- (id)tag:(int)arg1;
- (id)define:(CDUnknownBlockType)arg1;
- (id)addItem:(id)arg1;
- (struct CGSize)ocSizeThatFits:(id)arg1 andH:(id)arg2;
- (struct CGSize)sizeThatFits:(id)arg1;
- (_Bool)ocApplyLayoutWithSize:(id)arg1 andH:(id)arg2;
- (_Bool)applyLayout;
- (id)initWithView:(id)arg1;

@end

