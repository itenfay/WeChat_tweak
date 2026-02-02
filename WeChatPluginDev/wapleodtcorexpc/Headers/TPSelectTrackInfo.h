//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPTrackInfo;

@interface TPSelectTrackInfo : NSObject
{
    long long _selectTrackId;
    long long _selectTrackStartTimeSinceBootMs;
    TPTrackInfo *_trackInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPTrackInfo *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long selectTrackStartTimeSinceBootMs; // @synthesize selectTrackStartTimeSinceBootMs=_selectTrackStartTimeSinceBootMs;
@property(nonatomic) long long selectTrackId; // @synthesize selectTrackId=_selectTrackId;

@end

