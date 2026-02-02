//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IDeepCleanClassProtocol;

@protocol IDeepCleanClassExt <NSObject>
- (void)onDeepCleanStop:(id <IDeepCleanClassProtocol>)arg1;
- (void)onDeepClean:(id <IDeepCleanClassProtocol>)arg1 progressChange:(float)arg2;
@end

