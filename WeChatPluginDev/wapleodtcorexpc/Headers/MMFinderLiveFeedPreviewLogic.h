//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderDataItem, WCFinderFeedStreamGetLiveMsgCGI, WCFinderPreviewLiveCGI;

@interface MMFinderLiveFeedPreviewLogic : NSObject
{
    _Bool _forceDisableGetLiveMsg;
    _Bool _canGetLiveMsg;
    _Bool _hasRequestPreview;
    _Bool _hasOffline;
    int _commentScene;
    int _joinLiveType;
    NSData *_uxInfo;
    NSString *_adData;
    CDUnknownBlockType _previewLastestCookieBlock;
    NSString *_logicID;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    WCFinderPreviewLiveCGI *_joinLiveCgi;
    WCFinderFeedStreamGetLiveMsgCGI *_getLiveMsgCgi;
    long long _getLiveMsgScene;
    NSData *_multiStyleInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *multiStyleInfo; // @synthesize multiStyleInfo=_multiStyleInfo;
@property(nonatomic) long long getLiveMsgScene; // @synthesize getLiveMsgScene=_getLiveMsgScene;
@property(nonatomic) int joinLiveType; // @synthesize joinLiveType=_joinLiveType;
@property(nonatomic) _Bool hasOffline; // @synthesize hasOffline=_hasOffline;
@property(nonatomic) _Bool hasRequestPreview; // @synthesize hasRequestPreview=_hasRequestPreview;
@property(nonatomic) _Bool canGetLiveMsg; // @synthesize canGetLiveMsg=_canGetLiveMsg;
@property(retain, nonatomic) WCFinderFeedStreamGetLiveMsgCGI *getLiveMsgCgi; // @synthesize getLiveMsgCgi=_getLiveMsgCgi;
@property(retain, nonatomic) WCFinderPreviewLiveCGI *joinLiveCgi; // @synthesize joinLiveCgi=_joinLiveCgi;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *logicID; // @synthesize logicID=_logicID;
@property(nonatomic) _Bool forceDisableGetLiveMsg; // @synthesize forceDisableGetLiveMsg=_forceDisableGetLiveMsg;
@property(copy, nonatomic) CDUnknownBlockType previewLastestCookieBlock; // @synthesize previewLastestCookieBlock=_previewLastestCookieBlock;
@property(retain, nonatomic) NSString *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) NSData *uxInfo; // @synthesize uxInfo=_uxInfo;
- (id)previewCookie;
- (void)dealloc;
- (void)continueGetLiveMsgWithDuration:(double)arg1;
- (void)startGetLiveMsg;
- (void)internalJoinLive;
- (void)offline;
- (void)stop;
- (void)start;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 joinLiveType:(int)arg3 getLiveMsgScene:(long long)arg4 multiStyleInfo:(id)arg5;

@end

