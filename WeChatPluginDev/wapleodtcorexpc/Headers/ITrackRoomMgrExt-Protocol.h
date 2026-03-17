//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TrackPOIItem;

@protocol ITrackRoomMgrExt <NSObject>

@optional
- (void)OnTrackRoomStateDidChangedTo:(int)arg1;
- (void)OnHeadingChanged:(double)arg1;
- (void)OnTrackRoomError:(int)arg1 Message:(NSString *)arg2;
- (void)OnGetRoomPOI:(TrackPOIItem *)arg1;
- (void)OnExitTrackRoom;
- (void)OnRefreshTrackRoom:(NSArray *)arg1 Type:(int)arg2;
- (void)OnJoinTrackRoomOK:(NSString *)arg1;
- (void)OnOpenTrackRoom:(NSString *)arg1;
- (void)OnSta;
@end

