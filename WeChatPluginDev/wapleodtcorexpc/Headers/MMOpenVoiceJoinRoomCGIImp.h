//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOpenVoiceJoinRoomCGIImp : NSObject
{
    NSString *_currentRequestAppId;
    CDUnknownBlockType _currentRoomCGICallback;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)cgiJoinRoomWithAppid:(id)arg1 groupId:(id)arg2 signature:(id)arg3 nonceStr:(id)arg4 timeStamp:(int)arg5 privateData:(id)arg6 callback:(CDUnknownBlockType)arg7;

@end

