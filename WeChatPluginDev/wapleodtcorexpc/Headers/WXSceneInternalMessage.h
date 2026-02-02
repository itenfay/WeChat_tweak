//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXSceneInternalMessage : NSObject
{
    NSString *_stateId;
    NSString *_stateToken;
    NSString *_stateUrl;
    NSString *_stateTitle;
    unsigned long long _jumpType;
    NSString *_stateMiniProgramUsername;
    NSString *_stateMiniProgramPath;
    long long _stateMiniProgramType;
    NSString *_stateChannelUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *stateChannelUserName; // @synthesize stateChannelUserName=_stateChannelUserName;
@property(nonatomic) long long stateMiniProgramType; // @synthesize stateMiniProgramType=_stateMiniProgramType;
@property(retain, nonatomic) NSString *stateMiniProgramPath; // @synthesize stateMiniProgramPath=_stateMiniProgramPath;
@property(retain, nonatomic) NSString *stateMiniProgramUsername; // @synthesize stateMiniProgramUsername=_stateMiniProgramUsername;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *stateTitle; // @synthesize stateTitle=_stateTitle;
@property(retain, nonatomic) NSString *stateUrl; // @synthesize stateUrl=_stateUrl;
@property(retain, nonatomic) NSString *stateToken; // @synthesize stateToken=_stateToken;
@property(retain, nonatomic) NSString *stateId; // @synthesize stateId=_stateId;

@end

