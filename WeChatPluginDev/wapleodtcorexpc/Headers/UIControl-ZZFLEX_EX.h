//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>
typedef void (^CDUnknownBlockType)(void);

@class ZZControlChainModel;

@interface UIControl (ZZFLEX_EX)
+ (CDUnknownBlockType)zz_create;
@property(readonly, copy, nonatomic) ZZControlChainModel *zz_setup;
@end
