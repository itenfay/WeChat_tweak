//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSSet, NSString;

@interface FaceRecogFlashParamProcessor : NSObject
{
    long long _workMode;
    NSString *_bioId;
    NSString *_appId;
    NSString *_bizName;
    NSString *_personId;
    long long _depthFrameCount;
    NSData *_selectDataFromConfig;
    NSSet *_actionTipsSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *actionTipsSet; // @synthesize actionTipsSet=_actionTipsSet;
@property(retain, nonatomic) NSData *selectDataFromConfig; // @synthesize selectDataFromConfig=_selectDataFromConfig;
@property(nonatomic) long long depthFrameCount; // @synthesize depthFrameCount=_depthFrameCount;
@property(retain, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *bioId; // @synthesize bioId=_bioId;
@property(nonatomic) long long workMode; // @synthesize workMode=_workMode;
- (_Bool)isActionTips:(id)arg1;
- (id)getBestImageFromYtData:(id)arg1 bioId:(id)arg2;
- (id)preprocessYtData:(id)arg1 voiceData:(id)arg2;
- (id)generateLiveHeaderWithKey:(id)arg1 bodyData:(id)arg2;
- (id)generateLiveBodyWithYTContent:(id)arg1 voiceData:(id)arg2;
- (id)generateBioBufferWithYtData:(id)arg1 voiceData:(id)arg2;
- (id)getYtConfigFromResponseAssemble:(id)arg1 liveSelectData:(id)arg2 setConfig:(id)arg3;
- (id)getYtConfigFromResponse:(id)arg1 liveSelectData:(id)arg2;
- (id)getLiveSelectDataFromYTConfig:(id)arg1;
- (id)getEncodedVideoDataFromYtResult:(id)arg1;
- (id)getPayConfigWithActionData:(id)arg1 videoBitRate:(double)arg2;
- (long long)getReportLivessType;
- (long long)getUploadLiveType;
- (int)getBioCheckLiveConfigFlag;
- (unsigned int)getCheckAliveType;
- (id)initWithWorkMode:(long long)arg1;

@end

