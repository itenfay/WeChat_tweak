//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OfflineGetMsgResponse : NSObject
{
    int _pollTime;
    NSString *_ackKey;
    NSString *_appMsg;
}

- (void).cxx_destruct;
@property(nonatomic) int pollTime; // @synthesize pollTime=_pollTime;
@property(copy, nonatomic) NSString *appMsg; // @synthesize appMsg=_appMsg;
@property(copy, nonatomic) NSString *ackKey; // @synthesize ackKey=_ackKey;

@end

