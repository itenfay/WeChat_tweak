//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol TextState3rdPartyHandler;

@interface TextState3rdPartyHybridHandler
{
    id <TextState3rdPartyHandler> _appearHandler;
    id <TextState3rdPartyHandler> _jumpHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TextState3rdPartyHandler> jumpHandler; // @synthesize jumpHandler=_jumpHandler;
@property(retain, nonatomic) id <TextState3rdPartyHandler> appearHandler; // @synthesize appearHandler=_appearHandler;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)isHybrid;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)name;
- (id)customView;
- (_Bool)preferCustomView;
- (id)reportActivityId;
- (void)getSourceInfoForReferWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canGetSourceInfoForRefer;
- (_Bool)isValid;
- (void)checkValidWithCompletionBlock:(CDUnknownBlockType)arg1 cacheOnly:(_Bool)arg2;
- (id)mediaDescription;
- (_Bool)autoHandleAppLifeCycleEvent;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)mediaContentView;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)useCoverForContent;
- (id)headImageView;
- (id)title;
- (_Bool)supportCustomMedia;
- (unsigned int)type;
- (id)initWithJumpHandler:(id)arg1 appearHandler:(id)arg2;

@end

