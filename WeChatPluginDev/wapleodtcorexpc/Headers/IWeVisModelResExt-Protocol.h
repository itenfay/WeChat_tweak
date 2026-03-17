//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IWeVisModelResExt <NSObject>

@optional
- (void)onModelUpdate:(NSString *)arg1;
- (void)onModelListWillUpdate:(NSArray *)arg1;
@end

