//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@protocol MMKView;

@protocol MMKViewLayout <MMKView>
- (long long)getAlignContent;
- (void)setAlignContent:(long long)arg1;
- (long long)getAlignItems;
- (void)setAlignItems:(long long)arg1;
- (long long)getFlexWrap;
- (void)setFlexWrap:(long long)arg1;
- (long long)getJustifyContent;
- (void)setJustifyContent:(long long)arg1;
- (long long)getFlexDirection;
- (void)setFlexDirection:(long long)arg1;
- (void)setFocusableInTouchMode:(_Bool)arg1;
- (void)removeAllViews;
- (void)removeView:(id <MMKView>)arg1;
- (void)addView:(id <MMKView>)arg1 position:(int)arg2;
- (void)addView:(id <MMKView>)arg1;
@end

