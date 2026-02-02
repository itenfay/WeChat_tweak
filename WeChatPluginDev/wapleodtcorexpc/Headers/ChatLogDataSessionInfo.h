//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatLogSessionItemInfo, NSString;

@interface ChatLogDataSessionInfo : NSObject
{
    ChatLogSessionItemInfo *_sessionItem;
    long long _videoDirMTime;
    long long _audioDirMTime;
    long long _imageDirMTime;
    long long _wxamDirMTime;
    long long _vcodeDirMTime;
    long long _appDirMTime;
    long long _groupDirMTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_groupDirMTime;
+ (void)PBArrayAdd_appDirMTime;
+ (void)PBArrayAdd_vcodeDirMTime;
+ (void)PBArrayAdd_wxamDirMTime;
+ (void)PBArrayAdd_imageDirMTime;
+ (void)PBArrayAdd_audioDirMTime;
+ (void)PBArrayAdd_videoDirMTime;
+ (void)PBArrayAdd_sessionItem;
- (void).cxx_destruct;
@property(nonatomic) long long groupDirMTime; // @synthesize groupDirMTime=_groupDirMTime;
@property(nonatomic) long long appDirMTime; // @synthesize appDirMTime=_appDirMTime;
@property(nonatomic) long long vcodeDirMTime; // @synthesize vcodeDirMTime=_vcodeDirMTime;
@property(nonatomic) long long wxamDirMTime; // @synthesize wxamDirMTime=_wxamDirMTime;
@property(nonatomic) long long imageDirMTime; // @synthesize imageDirMTime=_imageDirMTime;
@property(nonatomic) long long audioDirMTime; // @synthesize audioDirMTime=_audioDirMTime;
@property(nonatomic) long long videoDirMTime; // @synthesize videoDirMTime=_videoDirMTime;
@property(retain, nonatomic) ChatLogSessionItemInfo *sessionItem; // @synthesize sessionItem=_sessionItem;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

