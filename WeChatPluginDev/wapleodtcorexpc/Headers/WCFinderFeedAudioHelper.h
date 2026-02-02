//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderDataItem;

@interface WCFinderFeedAudioHelper : NSObject
{
    int _commentScene;
    WCFinderDataItem *_bindDataItem;
    NSMutableDictionary *_parseDic;
    CDUnknownBlockType _sucBlock;
    CDUnknownBlockType _failBlock;
}

+ (_Bool)videoHasBeFollowed:(id)arg1;
+ (id)genFeedOutputPathBy:(id)arg1 commentScene:(int)arg2;
+ (_Bool)videoHasDownloaded:(id)arg1 commentScene:(int)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType sucBlock; // @synthesize sucBlock=_sucBlock;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSMutableDictionary *parseDic; // @synthesize parseDic=_parseDic;
@property(retain, nonatomic) WCFinderDataItem *bindDataItem; // @synthesize bindDataItem=_bindDataItem;
- (void)OnCdnDownloadError:(id)arg1;
- (void)extractAudioTrackFromOutputPath:(id)arg1;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)parseTargetAudioDataItem:(id)arg1 sucBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)resetDataItem;
- (void)dealloc;
- (id)genDownloadMediaInfo;
- (id)initWithCommentScene:(int)arg1;
- (_Bool)enableUseFeedDirectlyByDataItem:(id)arg1;
- (_Bool)enableUseFeedDirectly:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

