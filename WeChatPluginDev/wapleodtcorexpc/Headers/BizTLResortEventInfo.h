//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BizTLResortEventInfo : NSObject
{
    int _unreadMsgCount;
    int _unExposeMsgCount;
    int _unValidExposeMsgCount;
    int _covBoxIndex;
    int _digestMsgIdx;
    long long _sessionId;
    NSArray *_unreadMsgTimeStampList;
    long long _digestMsgBizUin;
    long long _digestMsgId;
    NSString *_digestWording;
}

+ (id)initWithSessionId:(long long)arg1 unreadMsgCount:(int)arg2 unExposeMsgCount:(int)arg3 unValidExposeMsgCount:(int)arg4 unreadMsgTimeStampList:(id)arg5 covBoxIndex:(int)arg6 digestMsgBizUin:(long long)arg7 digestMsgId:(long long)arg8 digestMsgIdx:(int)arg9 digestWording:(id)arg10;
+ (id)initWithSessionId:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *digestWording; // @synthesize digestWording=_digestWording;
@property(nonatomic) int digestMsgIdx; // @synthesize digestMsgIdx=_digestMsgIdx;
@property(nonatomic) long long digestMsgId; // @synthesize digestMsgId=_digestMsgId;
@property(nonatomic) long long digestMsgBizUin; // @synthesize digestMsgBizUin=_digestMsgBizUin;
@property(nonatomic) int covBoxIndex; // @synthesize covBoxIndex=_covBoxIndex;
@property(retain, nonatomic) NSArray *unreadMsgTimeStampList; // @synthesize unreadMsgTimeStampList=_unreadMsgTimeStampList;
@property(nonatomic) int unValidExposeMsgCount; // @synthesize unValidExposeMsgCount=_unValidExposeMsgCount;
@property(nonatomic) int unExposeMsgCount; // @synthesize unExposeMsgCount=_unExposeMsgCount;
@property(nonatomic) int unreadMsgCount; // @synthesize unreadMsgCount=_unreadMsgCount;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;

@end

