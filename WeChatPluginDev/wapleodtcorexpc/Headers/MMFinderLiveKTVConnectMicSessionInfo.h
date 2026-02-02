//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveSdkInfo, NSString;

@interface MMFinderLiveKTVConnectMicSessionInfo : NSObject
{
    _Bool _isCgiOK;
    NSString *_songUniqueId;
    NSString *_liveMicId;
    CDUnknownBlockType _resultBlock;
    LiveSdkInfo *_prepareConnectMicSdkInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveSdkInfo *prepareConnectMicSdkInfo; // @synthesize prepareConnectMicSdkInfo=_prepareConnectMicSdkInfo;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(nonatomic) _Bool isCgiOK; // @synthesize isCgiOK=_isCgiOK;
@property(copy, nonatomic) NSString *songUniqueId; // @synthesize songUniqueId=_songUniqueId;

@end

