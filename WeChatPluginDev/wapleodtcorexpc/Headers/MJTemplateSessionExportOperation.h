//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString, OMJMaasCore, OMJMovieExportSettings, OMJMovieSession, OMJMusicInfo, OMJTemplateInfo, UIImage;

@interface MJTemplateSessionExportOperation : NSObject
{
    OMJMaasCore *_maasCore;
    OMJMovieSession *_maasSession;
    NSString *_sessionKey;
    NSString *_outputFilePath;
    OMJMovieExportSettings *_exportSettings;
    OMJTemplateInfo *_templateInfo;
    OMJMusicInfo *_musicInfo;
    NSError *_error;
    long long _status;
    CDUnknownBlockType _statusChangedHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _resultHandler;
    UIImage *_coverImage;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) OMJMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) OMJTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(readonly, nonatomic) OMJMovieExportSettings *exportSettings; // @synthesize exportSettings=_exportSettings;
@property(readonly, copy, nonatomic) NSString *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(readonly, nonatomic) OMJMovieSession *maasSession; // @synthesize maasSession=_maasSession;
@property(readonly, nonatomic) OMJMaasCore *maasCore; // @synthesize maasCore=_maasCore;
- (void)cancelExportingCreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportCreationWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didCompleteWithError:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_updateStatus:(long long)arg1;
- (void)_pauseExporting;
- (void)_startExporting;
- (void)_loadExportInfo;
- (void)resume;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)initWithMaasCore:(id)arg1 maasSession:(id)arg2 sessionKey:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 outputFilePath:(id)arg5 exportSettings:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 resultHandler:(CDUnknownBlockType)arg8;

@end

