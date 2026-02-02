//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol FlutterBinaryMessenger;

@interface PAGViewListenerApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)onAnimationRepeatWithPagId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)onAnimationCancelWithPagId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)onAnimationEndWithPagId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)onAnimationStartWithPagId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)onAnimationUpdateWithPagId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

