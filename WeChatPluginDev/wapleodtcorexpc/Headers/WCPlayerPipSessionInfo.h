//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCPlayerPipSessionInfo : NSObject
{
    _Bool _isPipStoppedByEnterForeground;
    int _startTime;
    int _stopTime;
    NSString *_pipId;
    NSMutableArray *_arrTaskId;
    long long _stopReason;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPipStoppedByEnterForeground; // @synthesize isPipStoppedByEnterForeground=_isPipStoppedByEnterForeground;
@property(nonatomic) long long stopReason; // @synthesize stopReason=_stopReason;
@property(retain, nonatomic) NSMutableArray *arrTaskId; // @synthesize arrTaskId=_arrTaskId;
@property(nonatomic) int stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *pipId; // @synthesize pipId=_pipId;
- (long long)getDisplayPipWindowReason;
- (id)init;

@end

