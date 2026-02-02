//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;

@interface MPVideoPageOpenParameter
{
    unsigned int _duration;
    unsigned int _videoWidth;
    unsigned int _videoHeight;
    NSString *_videoId;
    NSNumber *_videoInitialTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoInitialTime;
+ (void)PBArrayAdd_videoHeight;
+ (void)PBArrayAdd_videoWidth;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *videoInitialTime; // @synthesize videoInitialTime=_videoInitialTime;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

