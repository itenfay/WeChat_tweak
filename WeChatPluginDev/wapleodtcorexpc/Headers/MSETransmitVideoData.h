//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MSETransmitVideoData
{
    NSString *_videoUrl;
    NSString *_filePath;
    NSString *_thumbPath;
}

+ (void)initialize;
+ (void)PBArrayAdd_thumbPath;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_videoUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

