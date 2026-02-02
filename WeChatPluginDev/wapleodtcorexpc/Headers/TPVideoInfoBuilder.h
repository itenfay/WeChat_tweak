//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPVideoInfo;

@interface TPVideoInfoBuilder : NSObject
{
    TPVideoInfo *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPVideoInfo *model; // @synthesize model=_model;
- (id)build;
- (id)setDownloadParamDataArray:(id)arg1;
- (id)downloadParamDataArray;
- (id)setVideoCodecId:(long long)arg1;
- (long long)videoCodecId;
- (id)setDownloadFileID:(id)arg1;
- (id)downloadFileID;
- (id)setHeight:(long long)arg1;
- (long long)height;
- (id)setWidth:(long long)arg1;
- (long long)width;
- (id)init;

@end

