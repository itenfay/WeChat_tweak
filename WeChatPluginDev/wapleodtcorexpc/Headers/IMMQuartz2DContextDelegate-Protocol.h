//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;

@protocol IMMQuartz2DContextDelegate <NSObject>
- (void)restoreContext;
- (void)saveContext;
- (void)removeContext:(NSString *)arg1;
- (void)setContext:(NSObject *)arg1 forKey:(NSString *)arg2;
- (NSObject *)getContext:(NSString *)arg1;
@end

