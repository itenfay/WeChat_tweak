//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;

@protocol WAJSContextPlugin_NativeViewsRootViewProtocol <NSObject>
- (_Bool)removeChildView:(unsigned int)arg1;
- (UIView *)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(UIView *)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

@optional
- (UIView *)rootView;
- (struct CGRect)rootViewFrame;
- (NSArray *)getChildViewsByClass:(Class)arg1;
@end

