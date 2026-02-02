//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIView, WCFinderContextIdToken, WCFinderDataItem;
@protocol WCFinderMinimizeContentViewProtocol;

@interface WCFinderMinimizePlayInfo : NSObject
{
    _Bool _allowPlay;
    _Bool _mediaIsMute;
    NSString *_forbidenPlayToast;
    NSMutableDictionary *_extInfo;
    UIView<WCFinderMinimizeContentViewProtocol> *_contentView;
    UIView *_minimizeAnimatingView;
    long long _infoState;
    long long _infoPlayType;
    WCFinderDataItem *_dataItem;
    double _playProgress;
    double _playbackTime;
    WCFinderContextIdToken *_contextToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContextIdToken *contextToken; // @synthesize contextToken=_contextToken;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) double playProgress; // @synthesize playProgress=_playProgress;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long infoPlayType; // @synthesize infoPlayType=_infoPlayType;
@property(nonatomic) long long infoState; // @synthesize infoState=_infoState;
@property(retain, nonatomic) UIView *minimizeAnimatingView; // @synthesize minimizeAnimatingView=_minimizeAnimatingView;
@property(retain, nonatomic) UIView<WCFinderMinimizeContentViewProtocol> *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool mediaIsMute; // @synthesize mediaIsMute=_mediaIsMute;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *forbidenPlayToast; // @synthesize forbidenPlayToast=_forbidenPlayToast;
@property(nonatomic) _Bool allowPlay; // @synthesize allowPlay=_allowPlay;
@property(readonly) int commentScene;
- (id)description;

@end

