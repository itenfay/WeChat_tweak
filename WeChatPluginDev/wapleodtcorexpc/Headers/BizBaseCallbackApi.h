//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger;

@interface BizBaseCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
    NSString *_messageChannelSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageChannelSuffix; // @synthesize messageChannelSuffix=_messageChannelSuffix;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)notifyFlowListItemExposeExposedItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onNativeBizCreationInfoChangedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRecCardCardId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onInsertMockCanvasModelIndex:(long long)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onBizPageScreenShotWithCompletion:(CDUnknownBlockType)arg1;
- (void)onFinderLiveStatusChangeLiveId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onBizFinderLiveInfoUpdateScene:(long long)arg1 info:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onMoveToTopWithCompletion:(CDUnknownBlockType)arg1;
- (void)onNotifyChangeNotifyInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onDataChangeBizMsgInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

