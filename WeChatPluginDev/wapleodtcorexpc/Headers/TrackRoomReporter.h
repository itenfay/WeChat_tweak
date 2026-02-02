//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSString;

@interface TrackRoomReporter : NSObject
{
    CLLocation *_userEnterLocation;
    NSArray *_othersEnterLocation;
    CLLocation *_userCurrentLocation;
    NSArray *_othersCurrentLocation;
    double _movePathDistance;
}

- (void).cxx_destruct;
@property(nonatomic) double movePathDistance; // @synthesize movePathDistance=_movePathDistance;
@property(retain, nonatomic) NSArray *othersCurrentLocation; // @synthesize othersCurrentLocation=_othersCurrentLocation;
@property(retain, nonatomic) CLLocation *userCurrentLocation; // @synthesize userCurrentLocation=_userCurrentLocation;
@property(retain, nonatomic) NSArray *othersEnterLocation; // @synthesize othersEnterLocation=_othersEnterLocation;
@property(retain, nonatomic) CLLocation *userEnterLocation; // @synthesize userEnterLocation=_userEnterLocation;
@property(readonly, nonatomic) NSString *allDistanceWhenLeave;
@property(readonly, nonatomic) NSString *allDistanceWhenEnter;
@property(readonly, nonatomic) unsigned int leaveCount;
@property(readonly, nonatomic) unsigned int enterCount;
@property(readonly, nonatomic) unsigned int distanceWithRoomCreater;
@property(readonly, nonatomic) unsigned int userMovePathDistance;
@property(readonly, nonatomic) unsigned int userMoveDistance;
- (void)onUserUpdate:(id)arg1 otherLocations:(id)arg2;
- (void)onUserEnter:(id)arg1 otherLocations:(id)arg2;

@end

