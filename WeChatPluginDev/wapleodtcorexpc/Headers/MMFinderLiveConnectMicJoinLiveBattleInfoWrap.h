//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBattleInfo, NSString;

@interface MMFinderLiveConnectMicJoinLiveBattleInfoWrap : NSObject
{
    unsigned int _receiveBattleInfoTime;
    FinderLiveBattleInfo *_battleInfoFromJoinLive;
    NSString *_micSessionId;
    NSString *_vroomId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *vroomId; // @synthesize vroomId=_vroomId;
@property(retain, nonatomic) NSString *micSessionId; // @synthesize micSessionId=_micSessionId;
@property(nonatomic) unsigned int receiveBattleInfoTime; // @synthesize receiveBattleInfoTime=_receiveBattleInfoTime;
@property(retain, nonatomic) FinderLiveBattleInfo *battleInfoFromJoinLive; // @synthesize battleInfoFromJoinLive=_battleInfoFromJoinLive;

@end

