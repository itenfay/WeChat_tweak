//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveInfo, LiveSdkInfo, MMLiveAnchorStatusItem, NSData, NSMutableArray, NSString;

@interface MMLiveInfoWrap : NSObject
{
    unsigned long long _liveId;
    LiveSdkInfo *_liveSdkInfo;
    LiveInfo *_liveInfo;
    NSData *_liveCookies;
    NSMutableArray *_currentRoomIds;
    NSString *_latestLiveMicId;
    MMLiveAnchorStatusItem *_anchorStatusItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveAnchorStatusItem *anchorStatusItem; // @synthesize anchorStatusItem=_anchorStatusItem;
@property(retain, nonatomic) NSString *latestLiveMicId; // @synthesize latestLiveMicId=_latestLiveMicId;
@property(retain, nonatomic) NSMutableArray *currentRoomIds; // @synthesize currentRoomIds=_currentRoomIds;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @synthesize liveSdkInfo=_liveSdkInfo;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end

