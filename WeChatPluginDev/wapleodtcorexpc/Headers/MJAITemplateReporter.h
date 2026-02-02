//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString;

@interface MJAITemplateReporter : NSObject
{
    unsigned long long _reportScene;
    NSString *_maasSessionKey;
    NSString *_momentsPostSessionID;
    unsigned long long _assetCount;
    long long _phase;
    NSDate *_assetPreparationStartTime;
    NSDate *_assetPreparationEndTime;
    NSDate *_cdnUploadStartTime;
    NSDate *_cdnUploadEndTime;
    NSDate *_cdnDownloadStartTime;
    NSDate *_cdnDownloadEndTime;
    NSString *_aiAssetGeneratingTaskID;
    NSDate *_aiAssetGeneratingStartTime;
    NSDate *_aiAssetGeneratingEndTime;
    NSDate *_templateSwitchingStartTime;
    NSDate *_templateSwitchingEndTime;
    long long _result;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) NSDate *templateSwitchingEndTime; // @synthesize templateSwitchingEndTime=_templateSwitchingEndTime;
@property(retain, nonatomic) NSDate *templateSwitchingStartTime; // @synthesize templateSwitchingStartTime=_templateSwitchingStartTime;
@property(retain, nonatomic) NSDate *aiAssetGeneratingEndTime; // @synthesize aiAssetGeneratingEndTime=_aiAssetGeneratingEndTime;
@property(retain, nonatomic) NSDate *aiAssetGeneratingStartTime; // @synthesize aiAssetGeneratingStartTime=_aiAssetGeneratingStartTime;
@property(copy, nonatomic) NSString *aiAssetGeneratingTaskID; // @synthesize aiAssetGeneratingTaskID=_aiAssetGeneratingTaskID;
@property(retain, nonatomic) NSDate *cdnDownloadEndTime; // @synthesize cdnDownloadEndTime=_cdnDownloadEndTime;
@property(retain, nonatomic) NSDate *cdnDownloadStartTime; // @synthesize cdnDownloadStartTime=_cdnDownloadStartTime;
@property(retain, nonatomic) NSDate *cdnUploadEndTime; // @synthesize cdnUploadEndTime=_cdnUploadEndTime;
@property(retain, nonatomic) NSDate *cdnUploadStartTime; // @synthesize cdnUploadStartTime=_cdnUploadStartTime;
@property(retain, nonatomic) NSDate *assetPreparationEndTime; // @synthesize assetPreparationEndTime=_assetPreparationEndTime;
@property(retain, nonatomic) NSDate *assetPreparationStartTime; // @synthesize assetPreparationStartTime=_assetPreparationStartTime;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(copy, nonatomic) NSString *momentsPostSessionID; // @synthesize momentsPostSessionID=_momentsPostSessionID;
@property(copy, nonatomic) NSString *maasSessionKey; // @synthesize maasSessionKey=_maasSessionKey;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
- (void)report;

@end

