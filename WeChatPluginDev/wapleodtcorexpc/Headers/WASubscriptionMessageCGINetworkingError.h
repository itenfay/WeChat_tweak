//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WASubscriptionMessageCGINetworkingError : NSObject
{
    int _errorCode;
    unsigned int _uiMessage;
    NSString *_errorMessage;
}

+ (id)errorWithErrorCode:(int)arg1 errorMessage:(id)arg2 uiMessage:(int)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiMessage; // @synthesize uiMessage=_uiMessage;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (id)init;

@end

