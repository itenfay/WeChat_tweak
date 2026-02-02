//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface MagicBrushResponse : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)onViewTextureReadyViewId:(id)arg1 textureId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onViewStyleChangedViewId:(id)arg1 x:(long long)arg2 y:(long long)arg3 width:(long long)arg4 height:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)onSubViewCreatedViewGroupId:(id)arg1 viewId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

