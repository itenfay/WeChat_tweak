//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterCgiPlugin : NSObject
{
}

+ (void)privateSendCgiWrap:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)privateSendCgiWrap:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)cgiWrapRequest:(id)arg1 finderExtInfo:(id)arg2;
+ (id)extractBaseResponseWithFieldNumber:(int)arg1 fromData:(id)arg2;
+ (id)safeExtractBaseResponseWithFieldNumber:(int)arg1 fromData:(id)arg2;
- (void)sendFinderRequest:(id)arg1 extInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

