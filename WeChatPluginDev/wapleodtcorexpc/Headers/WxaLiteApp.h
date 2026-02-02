//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WxaLiteAppConfig;

@interface WxaLiteApp : NSObject
{
    WxaLiteAppConfig *_config;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) WxaLiteAppConfig *config; // @synthesize config=_config;
- (void)setup:(id)arg1;
- (_Bool)checkInit;
- (id)init;

@end

