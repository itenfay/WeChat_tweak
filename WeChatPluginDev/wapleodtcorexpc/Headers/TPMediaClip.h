//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, TPMediaAssetExtraParam;

@interface TPMediaClip : NSObject
{
    int _clipId;
    TPMediaAssetExtraParam *extraParams;
    NSDictionary *httpHeader;
    long long _mediaType;
    NSURL *_filePath;
    CDStruct_e83c9415 _timeRange;
}

+ (id)mediaTrackClipWithFilePath:(id)arg1 mediaType:(long long)arg2;
+ (int)genTrackClipIdWithMediaType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSURL *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) int clipId; // @synthesize clipId=_clipId;
@property(copy, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader;
@property(retain, nonatomic) TPMediaAssetExtraParam *extraParams; // @synthesize extraParams;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)initWithFilePath:(id)arg1 mediaType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

