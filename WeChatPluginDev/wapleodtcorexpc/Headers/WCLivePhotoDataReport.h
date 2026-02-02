//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, WCMediaItem;

@interface WCLivePhotoDataReport : NSObject
{
    _Bool _isSuccess;
    unsigned long long _actionType;
    WCMediaItem *_mediaItem;
    NSString *_assetID;
    long long _liveVideoDurationMs;
    long long _actionDurationMs;
    NSError *_error;
    NSDictionary *_actionInfoDic;
}

+ (id)safeStringWithString:(id)arg1;
+ (id)safeJSONStringWithObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *actionInfoDic; // @synthesize actionInfoDic=_actionInfoDic;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) long long actionDurationMs; // @synthesize actionDurationMs=_actionDurationMs;
@property(nonatomic) long long liveVideoDurationMs; // @synthesize liveVideoDurationMs=_liveVideoDurationMs;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void)doReportLivePhotoData;
- (id)generateLiveReportString;

@end

