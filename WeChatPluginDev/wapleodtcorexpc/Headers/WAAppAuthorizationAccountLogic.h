//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface WAAppAuthorizationAccountLogic : NSObject
{
    NSString *_appId;
    NSString *_scopeKey;
}

@property(retain, nonatomic) NSString *scopeKey; // @synthesize scopeKey=_scopeKey;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)requestDeleteAcctountById:(id)arg1 completeAction:(CDUnknownBlockType)arg2;
- (void)requestSwitchAuthState:(unsigned int)arg1 accountId:(id)arg2 completeAction:(CDUnknownBlockType)arg3;
- (id)initWithAppId:(id)arg1 scopeKey:(id)arg2;

@end
