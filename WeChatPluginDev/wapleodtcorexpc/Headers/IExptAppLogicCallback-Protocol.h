//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray;

@protocol IExptAppLogicCallback <NSObject>
- (void)onGotAppExptList:(NSArray *)arg1 deleteExptIds:(NSArray *)arg2 andExptFlag:(unsigned int)arg3 andFromScene:(unsigned int)arg4;
- (void)getLocalAppExptList:(NSMutableArray *)arg1;
@end

