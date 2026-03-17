//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol EmoticonListUpdateLogicDelegate <NSObject>
- (void)onGetExptConfig:(NSString *)arg1 reqType:(unsigned int)arg2;
- (NSArray *)forceUpdateForListUpdateWithItemList:(NSArray *)arg1;
@end

