//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPostOriginInfo, NSString, WCEditVideoInformation;

@interface WCFinderOriginMediaUploadSession : NSObject
{
    _Bool _canUploadOriginVideo;
    NSString *_originVideoPath;
    FinderPostOriginInfo *_originInfo;
    WCEditVideoInformation *_originVideoInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canUploadOriginVideo; // @synthesize canUploadOriginVideo=_canUploadOriginVideo;
@property(retain, nonatomic) WCEditVideoInformation *originVideoInfo; // @synthesize originVideoInfo=_originVideoInfo;
@property(retain, nonatomic) FinderPostOriginInfo *originInfo; // @synthesize originInfo=_originInfo;
@property(copy, nonatomic) NSString *originVideoPath; // @synthesize originVideoPath=_originVideoPath;
- (_Bool)checkCanUploadOriginInfo;
- (void)asyncGetOriginalVideoInfoWithCompletion:(CDUnknownBlockType)arg1;

@end

