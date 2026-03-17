//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterTextInputPlugin;
@protocol NSCopying><NSObject;

@protocol FlutterIndirectScribbleDelegate <NSObject>
- (void)flutterTextInputPlugin:(FlutterTextInputPlugin *)arg1 requestElementsInRect:(struct CGRect)arg2 result:(void (^)(id))arg3;
- (void)flutterTextInputPlugin:(FlutterTextInputPlugin *)arg1 focusElement:(id <NSCopying><NSObject>)arg2 atPoint:(struct CGPoint)arg3 result:(void (^)(id))arg4;
@end

