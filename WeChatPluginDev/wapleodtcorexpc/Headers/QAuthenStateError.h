//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TBMapCommonCounter;

@interface QAuthenStateError : NSObject
{
    TBMapCommonCounter *_retryCounter;
    NSMutableDictionary *_errorInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(retain, nonatomic) TBMapCommonCounter *retryCounter; // @synthesize retryCounter=_retryCounter;
- (id)toDictionary;
- (id)init;

@end

