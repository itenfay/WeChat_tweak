//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveStarterLiveModeSubItem : NSObject
{
    _Bool _isSelect;
    unsigned long long _liveMode;
    NSString *_title;
    NSString *_subTitle;
    NSString *_subDetail;
    NSString *_redDotPath;
    CDUnknownBlockType _redDotQueryBlock;
    CDUnknownBlockType _redDotExposeBlock;
    CDUnknownBlockType _redDotClickBlock;
    double _width;
    double _originX;
    double _originY;
}

+ (id)getGameSubItemWithLiveGameUserInfo:(id)arg1 gameEntryScene:(long long)arg2;
+ (id)getInitGameModeItemWithAppId:(id)arg1 gameEntryScene:(long long)arg2;
+ (id)getInitAudioModeItem;
+ (id)getInitVideoModeItem;
+ (id)getChangeVideoSubItemWithSubItem:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_redDotPath;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_liveMode;
- (void).cxx_destruct;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double originX; // @synthesize originX=_originX;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(copy, nonatomic) CDUnknownBlockType redDotClickBlock; // @synthesize redDotClickBlock=_redDotClickBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotExposeBlock; // @synthesize redDotExposeBlock=_redDotExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
@property(retain, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(retain, nonatomic) NSString *subDetail; // @synthesize subDetail=_subDetail;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;
@property(readonly, copy) NSString *description;
- (void)onRedDotClicked;
- (void)onRedDotExposed;
- (_Bool)canShowRedDot;
- (_Bool)isGameSubItem;
- (_Bool)isAudioSubItem;
- (_Bool)isVideoSubItem;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

