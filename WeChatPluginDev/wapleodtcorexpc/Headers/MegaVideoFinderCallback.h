//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface MegaVideoFinderCallback : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)onSeeLaterStatusChangedFeedId:(id)arg1 seeLater:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onFollowStatusChangedUsername:(id)arg1 isFollow:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onHeartLikeStatusChangedFeedId:(id)arg1 isLike:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onThumbFavStatusChangedFeedId:(id)arg1 isFav:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

