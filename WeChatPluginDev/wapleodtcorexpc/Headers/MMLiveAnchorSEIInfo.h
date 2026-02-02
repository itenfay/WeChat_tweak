//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveAnchorSEILiveModeInfo, MMLiveAudioRoomSEIConnectMicMsg, MMLiveSEIConnectMicMsg, MMLiveSEIKTVStateInfo, MMLiveSEIRecordScreenInfo, NSArray, NSDictionary;

@interface MMLiveAnchorSEIInfo : NSObject
{
    NSDictionary *_baseInfoDic;
    MMLiveSEIConnectMicMsg *_connectMicSEIInfo;
    NSArray *_freeMicUsersSEIInfoList;
    MMLiveAudioRoomSEIConnectMicMsg *_audioRoomMicSEIInfo;
    MMLiveAnchorSEILiveModeInfo *_liveModeInfo;
    MMLiveSEIKTVStateInfo *_ktvStateInfo;
    MMLiveSEIRecordScreenInfo *_recordScreenInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveSEIRecordScreenInfo *recordScreenInfo; // @synthesize recordScreenInfo=_recordScreenInfo;
@property(retain, nonatomic) MMLiveSEIKTVStateInfo *ktvStateInfo; // @synthesize ktvStateInfo=_ktvStateInfo;
@property(retain, nonatomic) MMLiveAnchorSEILiveModeInfo *liveModeInfo; // @synthesize liveModeInfo=_liveModeInfo;
@property(retain, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomMicSEIInfo; // @synthesize audioRoomMicSEIInfo=_audioRoomMicSEIInfo;
@property(retain, nonatomic) NSArray *freeMicUsersSEIInfoList; // @synthesize freeMicUsersSEIInfoList=_freeMicUsersSEIInfoList;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *connectMicSEIInfo; // @synthesize connectMicSEIInfo=_connectMicSEIInfo;
@property(retain, nonatomic) NSDictionary *baseInfoDic; // @synthesize baseInfoDic=_baseInfoDic;

@end

