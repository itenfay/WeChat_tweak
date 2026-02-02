//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray;

@protocol IExptLogicCallback <NSObject>
- (void)onGotSvrExptList:(NSArray *)arg1 deleteExptIds:(NSArray *)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(NSArray *)arg4;
- (void)getLocalExptList:(NSMutableArray *)arg1;
@end

