//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCMegaVideo;

@interface WCFinderVideoAttachment : NSObject
{
    unsigned long long _videoId;
    WCMegaVideo *_video;
    NSString *_videoNonceId;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_videoNonceId;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_videoId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(retain, nonatomic) WCMegaVideo *video; // @synthesize video=_video;
@property(nonatomic) unsigned long long videoId; // @synthesize videoId=_videoId;
- (id)genVideoAttachment;
@property(readonly, copy) NSString *description;
- (id)initWithMegaVideo:(id)arg1;
- (id)initWithFinderVideoAttachment:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

