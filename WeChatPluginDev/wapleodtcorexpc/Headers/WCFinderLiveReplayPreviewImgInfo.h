//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveReplayPreviewImgInfo : NSObject
{
    NSString *_imgUrl;
    double _timeValue;
    NSString *_imgTargetUrl;
    unsigned long long _loadState;
    CDUnknownBlockType _preLoadCompletion;
    unsigned long long _preRequestCnt;
}

+ (id)getFixedSectionFromImgUrl:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long preRequestCnt; // @synthesize preRequestCnt=_preRequestCnt;
@property(copy, nonatomic) CDUnknownBlockType preLoadCompletion; // @synthesize preLoadCompletion=_preLoadCompletion;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(retain, nonatomic) NSString *imgTargetUrl; // @synthesize imgTargetUrl=_imgTargetUrl;
@property(nonatomic) double timeValue; // @synthesize timeValue=_timeValue;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
- (void)checkLoadState;
- (void)preLoadImage;
- (unsigned long long)getImgLoadState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

