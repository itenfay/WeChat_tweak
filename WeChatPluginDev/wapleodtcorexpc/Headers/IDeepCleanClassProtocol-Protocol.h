//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IDeepCleanClassProtocol <NSObject>
@property(nonatomic) _Bool bStop;
@property(nonatomic) _Bool bCleanning;
@property(nonatomic) float progressLevel;
- (void)refreshState;
- (void)stop;
- (void)cleanData;
- (unsigned long long)getClassSize;
@end

