//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <MMRouter/MMRouterAuthorizer.h>

@interface MMRouterAuthorizer (WeChat)
+ (void)ShowCannotUseTip:(id)arg1;
- (CDUnknownBlockType)doLimitedModeCheck;
- (CDUnknownBlockType)tipCannotFindPageIfNotSatisfy;
- (CDUnknownBlockType)blockInBackDevice;
- (id)universalAuth;
- (CDUnknownBlockType)doUniversalAuth;
@end

