//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLyricRecognitionHelper : NSObject
{
    NSString *_videoPath;
}

+ (id)helperWithVideoPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void)uploadFileThenRecognit:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onExportFinish:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)run:(CDUnknownBlockType)arg1;
- (id)initWithVideoPath:(id)arg1;

@end

