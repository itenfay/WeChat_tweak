//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderVideoPlayInfoImagePathArray;

@interface WCFinderVideoPlayInfo : NSObject
{
    NSString *_tid;
    unsigned long long _playingTimeRecently;
    NSString *_tempPath;
    NSString *_mediaPath;
    WCFinderVideoPlayInfoImagePathArray *_imagePathArray;
    double _playbackTime;
    double _maxPlaybackTime;
    NSString *_contextID;
    NSString *_feedContentVMAddress;
}

+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_feedContentVMAddress;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)feedContentVMAddress;
+ (id)swift_maxPlaybackTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)maxPlaybackTime;
+ (id)swift_contextID;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)contextID;
+ (id)swift_playbackTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)playbackTime;
+ (id)swift_imagePathArray;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)imagePathArray;
+ (id)swift_mediaPath;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)mediaPath;
+ (id)swift_tempPath;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)tempPath;
+ (id)swift_playingTimeRecently;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)playingTimeRecently;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedContentVMAddress; // @synthesize feedContentVMAddress=_feedContentVMAddress;
@property(retain, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(nonatomic) double maxPlaybackTime; // @synthesize maxPlaybackTime=_maxPlaybackTime;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(retain, nonatomic) WCFinderVideoPlayInfoImagePathArray *imagePathArray; // @synthesize imagePathArray=_imagePathArray;
@property(retain, nonatomic) NSString *mediaPath; // @synthesize mediaPath=_mediaPath;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(nonatomic) unsigned long long playingTimeRecently; // @synthesize playingTimeRecently=_playingTimeRecently;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

