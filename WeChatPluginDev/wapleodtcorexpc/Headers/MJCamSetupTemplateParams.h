//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WCMJCameraMusicPlayableData;

@interface MJCamSetupTemplateParams : NSObject
{
    unsigned long long _cameraPosition;
    long long _ostSoundOn;
    NSMutableArray *_musicIds;
    id <WCMJCameraMusicPlayableData> _musicData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WCMJCameraMusicPlayableData> musicData; // @synthesize musicData=_musicData;
@property(retain, nonatomic) NSMutableArray *musicIds; // @synthesize musicIds=_musicIds;
@property(nonatomic) long long ostSoundOn; // @synthesize ostSoundOn=_ostSoundOn;
@property(nonatomic) unsigned long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (_Bool)isOstSoundNotSet;
- (id)init;

@end

