//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTransferCallbackExtContext : NSObject
{
    _Bool _isReqWaitingH5auth;
    _Bool _isReqRetry;
}

@property(nonatomic) _Bool isReqRetry; // @synthesize isReqRetry=_isReqRetry;
@property(nonatomic) _Bool isReqWaitingH5auth; // @synthesize isReqWaitingH5auth=_isReqWaitingH5auth;

@end

