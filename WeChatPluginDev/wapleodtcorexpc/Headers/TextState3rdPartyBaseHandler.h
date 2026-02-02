//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TextState3rdPartyContext;

@interface TextState3rdPartyBaseHandler : NSObject
{
    TextState3rdPartyContext *context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextState3rdPartyContext *context; // @synthesize context;
- (id)updateBizData;
- (_Bool)dataReady;
- (_Bool)needUpdateBizData;
- (_Bool)isHybrid;
- (void)getSourceInfoForReferWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canGetSourceInfoForRefer;
- (_Bool)isValid;
- (void)checkValidWithCompletionBlock:(CDUnknownBlockType)arg1 cacheOnly:(_Bool)arg2;
- (id)mediaDescription;
- (_Bool)autoHandleAppLifeCycleEvent;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)mediaContentView;
- (id)reportActivityId;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool useCoverForContent;
- (id)name;
- (id)customView;
@property(readonly, nonatomic) _Bool preferCustomView;
- (id)headImageView;
- (id)title;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomCover;
- (_Bool)supportCustomMedia;
@property(readonly, nonatomic) unsigned int type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

