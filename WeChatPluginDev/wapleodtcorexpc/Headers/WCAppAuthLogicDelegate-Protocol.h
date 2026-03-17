//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCAppAuthLogicDelegate <NSObject>

@optional
- (void)logicDidFinishSearch;
- (void)logicDidSearchMoreApps:(NSArray *)arg1;
- (void)logicDidFinishModification:(int)arg1;
- (void)logicDidFinishLoadApps;
- (void)logicDidLoadMoreApps:(NSArray *)arg1;
- (void)logicDidFailAtCgi:(unsigned int)arg1 errcode:(int)arg2 errmsg:(NSString *)arg3;
@end

