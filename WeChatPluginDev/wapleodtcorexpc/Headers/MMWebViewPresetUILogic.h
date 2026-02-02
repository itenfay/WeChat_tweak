//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol MMWebViewPresetUILogicDelegate;

@interface MMWebViewPresetUILogic : NSObject
{
    id <MMWebViewPresetUILogicDelegate> _delegate;
    NSMutableDictionary *_functionHandlers;
    NSDictionary *_functions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *functions; // @synthesize functions=_functions;
@property(retain, nonatomic) NSMutableDictionary *functionHandlers; // @synthesize functionHandlers=_functionHandlers;
@property(nonatomic) __weak id <MMWebViewPresetUILogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)handlerForFunction:(id)arg1;
- (void)handlePresetUIConfigs:(id)arg1 permissionList:(id)arg2;
- (id)init;

@end

