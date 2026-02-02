//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MinimizeAudioPanelPlayingInfo : NSObject
{
    _Bool _isPlaying;
    _Bool _shouldShowFloatingView;
    unsigned int _bizType;
    unsigned int _bizSubType;
    unsigned int _updateTime;
    unsigned int _tapeType;
    NSString *_bizId;
    NSData *_contextData;
    NSString *_title;
    NSString *_source;
    NSString *_coverUrl;
    NSString *_tapeName;
    NSString *_tapeDesc;
    NSString *_tapeCoverUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_bizSubType;
+ (void)PBArrayAdd_tapeType;
+ (void)PBArrayAdd_tapeCoverUrl;
+ (void)PBArrayAdd_tapeDesc;
+ (void)PBArrayAdd_tapeName;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_contextData;
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_bizType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tapeCoverUrl; // @synthesize tapeCoverUrl=_tapeCoverUrl;
@property(copy, nonatomic) NSString *tapeDesc; // @synthesize tapeDesc=_tapeDesc;
@property(copy, nonatomic) NSString *tapeName; // @synthesize tapeName=_tapeName;
@property(nonatomic) unsigned int tapeType; // @synthesize tapeType=_tapeType;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool shouldShowFloatingView; // @synthesize shouldShowFloatingView=_shouldShowFloatingView;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int bizSubType; // @synthesize bizSubType=_bizSubType;
@property(retain, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned int bizType; // @synthesize bizType=_bizType;
- (id)getPBPropertyTable;
- (_Bool)isSamePlayingInfo:(id)arg1;
- (id)copyPlayingInfo;
- (_Bool)isTapeCoverRounded;
- (id)getTapeCover;
- (id)getTapeDescription;
- (id)getTapeName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

