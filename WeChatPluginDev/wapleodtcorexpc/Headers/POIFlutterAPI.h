//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface POIFlutterAPI : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)noMorePoiStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)appendPoiStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 streamUpdateData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateInitPageTabListData:(id)arg1 defaultTabIndex:(long long)arg2 defaultFilterIndex:(long long)arg3 streamUpdateData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reloadHeadWithInfoPoiBasicInfoPBData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSubAddressSubAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToTopWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateScrollStateProgress:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateFavoriteStateSelected:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

