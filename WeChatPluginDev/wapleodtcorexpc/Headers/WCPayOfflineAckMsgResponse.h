//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflineAckMsgResponse : NSObject
{
    long long _retCode;
    NSString *_retMsg;
    long long _pollTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long pollTime; // @synthesize pollTime=_pollTime;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;

@end

