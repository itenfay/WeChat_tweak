//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecogBindVideoLogic;

@protocol FaceRecogBindVideoLogicDelegate <NSObject>
- (void)bindVideoOperationDone:(int)arg1 logic:(FaceRecogBindVideoLogic *)arg2;
@end

