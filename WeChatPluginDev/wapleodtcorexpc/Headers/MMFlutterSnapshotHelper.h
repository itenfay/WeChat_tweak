//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMFlutterSnapshotHelper : NSObject
{
    NSMutableDictionary *_callbackMap;
    NSMutableDictionary *_imageMap;
    NSMutableDictionary *_offsetMap;
    NSMutableDictionary *_showCallbackMap;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *showCallbackMap; // @synthesize showCallbackMap=_showCallbackMap;
@property(retain, nonatomic) NSMutableDictionary *offsetMap; // @synthesize offsetMap=_offsetMap;
@property(retain, nonatomic) NSMutableDictionary *imageMap; // @synthesize imageMap=_imageMap;
@property(retain, nonatomic) NSMutableDictionary *callbackMap; // @synthesize callbackMap=_callbackMap;
- (void)clearCache;
- (id)getToOffsetForTask:(int)arg1;
- (void)updateTask:(int)arg1 offset:(struct CGPoint)arg2 inScreen:(_Bool)arg3;
- (void)updateTask:(int)arg1 image:(id)arg2 frame:(struct CGRect)arg3 contentFrame:(struct CGRect)arg4;
- (void)removeTaskId:(int)arg1;
- (void)waitForShowTaskId:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)waitForTaskId:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

