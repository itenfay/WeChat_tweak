//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderPreviewLiveCGI
{
    int _commentScene;
    int _joinType;
    WCFinderDataItem *_dataItem;
    unsigned long long _scene;
    NSData *_liveCookies;
    NSString *_sessionBuffer;
    NSString *_sessionExtraKey;
    NSData *_uxInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSData *_multiStyleInfo;
    NSData *_previewCookie;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *previewCookie; // @synthesize previewCookie=_previewCookie;
@property(retain, nonatomic) NSData *multiStyleInfo; // @synthesize multiStyleInfo=_multiStyleInfo;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(copy, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) int joinType; // @synthesize joinType=_joinType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderDataItem:(id)arg1 scene:(unsigned long long)arg2 liveCookies:(id)arg3 sessionBuffer:(id)arg4 commentScene:(int)arg5 joinType:(int)arg6 uxInfo:(id)arg7 sessionExtraKey:(id)arg8 multiStyleInfo:(id)arg9 previewCookie:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;

@end

