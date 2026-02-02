//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterUndoManagerPlugin;

@protocol FlutterUndoManagerDelegate <NSObject>
- (void)flutterUndoManagerPlugin:(FlutterUndoManagerPlugin *)arg1 handleUndoWithDirection:(long long)arg2;
@end

