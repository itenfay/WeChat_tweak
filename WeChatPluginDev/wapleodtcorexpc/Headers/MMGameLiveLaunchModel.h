//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMGameLiveLaunchModel : NSObject
{
    int _opensdkVersion;
    NSString *_gameAppId;
    unsigned long long _ticketExpiredTime;
    NSMutableDictionary *_gameLiveExtInfo;
    NSString *_ticket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSMutableDictionary *gameLiveExtInfo; // @synthesize gameLiveExtInfo=_gameLiveExtInfo;
@property(nonatomic) unsigned long long ticketExpiredTime; // @synthesize ticketExpiredTime=_ticketExpiredTime;
@property(nonatomic) int opensdkVersion; // @synthesize opensdkVersion=_opensdkVersion;
@property(retain, nonatomic) NSString *gameAppId; // @synthesize gameAppId=_gameAppId;

@end

