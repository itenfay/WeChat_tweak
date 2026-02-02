//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderLiveMsgSessionInfo, WCTableLiveSessionStorage;

@interface WCFinderLiveMsgSessionFindResult : NSObject
{
    WCFinderLiveMsgSessionInfo *_sessionInfoById;
    NSArray *_sessionInfos;
    WCTableLiveSessionStorage *_sessionStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableLiveSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) NSArray *sessionInfos; // @synthesize sessionInfos=_sessionInfos;
@property(retain, nonatomic) WCFinderLiveMsgSessionInfo *sessionInfoById; // @synthesize sessionInfoById=_sessionInfoById;

@end

