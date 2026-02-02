//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPPlayerBaseMediaParams, TPPlayerConfigParams, TPPlayerDrmParams, TPPlayerGeneralTrackingParams;

@interface TPGeneralPlayFlowParams : NSObject
{
    TPPlayerConfigParams *_playerConfigParams;
    TPPlayerBaseMediaParams *_playerBaseMediaParams;
    TPPlayerDrmParams *_playerDrmParams;
    TPPlayerGeneralTrackingParams *_playerGeneralTrackingParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerGeneralTrackingParams *playerGeneralTrackingParams; // @synthesize playerGeneralTrackingParams=_playerGeneralTrackingParams;
@property(retain, nonatomic) TPPlayerDrmParams *playerDrmParams; // @synthesize playerDrmParams=_playerDrmParams;
@property(retain, nonatomic) TPPlayerBaseMediaParams *playerBaseMediaParams; // @synthesize playerBaseMediaParams=_playerBaseMediaParams;
@property(retain, nonatomic) TPPlayerConfigParams *playerConfigParams; // @synthesize playerConfigParams=_playerConfigParams;
- (id)init;

@end

