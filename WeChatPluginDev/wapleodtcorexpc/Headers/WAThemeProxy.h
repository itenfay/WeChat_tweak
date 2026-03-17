//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAThemeProxy : NSObject
{
}

+ (void)reloadCssForMultiTaskingIfNeed;
+ (id)pathOfResNamed:(id)arg1;
+ (id)getImageName:(id)arg1;
+ (id)svgImageDisableNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageHighlightNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageNamed:(id)arg1 color:(id)arg2;
+ (id)svgImageFromData:(id)arg1;
+ (id)imageFromColor:(id)arg1;
+ (id)imageDisableNamed:(id)arg1;
+ (id)imageHighlightNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 alpha:(double)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)getColorByName:(id)arg1 withAlpha:(double)arg2;
+ (id)getColorByName:(id)arg1;
+ (id)getRuleSetForSeletor:(id)arg1;
+ (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

