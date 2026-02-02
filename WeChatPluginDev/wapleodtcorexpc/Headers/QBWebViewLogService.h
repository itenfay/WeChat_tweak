//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface QBWebViewLogService : NSObject
{
}

+ (id)service;
- (void)reportLogString:(id)arg1 config:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
