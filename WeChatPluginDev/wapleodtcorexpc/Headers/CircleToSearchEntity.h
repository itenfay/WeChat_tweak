//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSMutableArray, NSMutableDictionary, NSString, UIImage, WCMediaItem;

@interface CircleToSearchEntity : NSObject
{
    unsigned long long _scene;
    unsigned long long _entrance;
    NSString *_sessionId;
    UIImage *_image;
    CMessageWrap *_messageWrap;
    WCMediaItem *_mediaItem;
    NSString *_imageUrl;
    NSMutableDictionary *_context;
    unsigned long long _debugBeginTime;
    NSMutableArray *_debugMessages;
    struct CGRect _originFrameInWindow;
    struct CGRect _expectedFrameInWindow;
}

+ (void)reportActionType:(unsigned long long)arg1 withScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3 andSessionId:(id)arg4 andActionValue:(id)arg5;
+ (unsigned long long)getSearchSceneFromScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *debugMessages; // @synthesize debugMessages=_debugMessages;
@property(nonatomic) unsigned long long debugBeginTime; // @synthesize debugBeginTime=_debugBeginTime;
@property(readonly, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) struct CGRect expectedFrameInWindow; // @synthesize expectedFrameInWindow=_expectedFrameInWindow;
@property(nonatomic) struct CGRect originFrameInWindow; // @synthesize originFrameInWindow=_originFrameInWindow;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)debug:(id)arg1;
@property(readonly, nonatomic) NSString *debugMessage;
- (void)report:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *searchThirdExtParams;
@property(readonly, nonatomic) NSString *searchExtParams;
- (unsigned long long)searchParentType;
@property(readonly, nonatomic) unsigned long long searchScene;
@property(readonly, nonatomic) _Bool transitionFrame;
@property(readonly, nonatomic) _Bool alignWidthToWindow;
@property(readonly, nonatomic) unsigned long long dataType;
- (id)initWithImage:(id)arg1 andScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3;

@end

