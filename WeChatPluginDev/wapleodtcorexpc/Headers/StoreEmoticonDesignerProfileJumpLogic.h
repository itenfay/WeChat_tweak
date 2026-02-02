//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class StoreEmoticonDesignerProfileJumpConfig;

@interface StoreEmoticonDesignerProfileJumpLogic : NSObject
{
    StoreEmoticonDesignerProfileJumpConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmoticonDesignerProfileJumpConfig *config; // @synthesize config=_config;
- (void)showFailTips;
- (void)openFinderVC:(id)arg1;
- (void)openDesignerVC:(id)arg1;
- (void)internalOpenVC:(id)arg1;
- (void)asyncShowWith:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

