//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCChatRoomImageZoomAnimation, GCOpenReportParam, NSString, UIImage, UIImageView;

@interface GameChatRoomConfig : NSObject
{
    _Bool _isImgDefaultImg;
    _Bool _isRealTimeHotChat;
    _Bool _autoJoinIfCan;
    _Bool _backToGameLifeTab;
    _Bool _popCurrentVc;
    NSString *_roomCoverImgUrl;
    UIImage *_roomBgImage;
    UIImageView *_animateCoverImgView;
    UIImageView *_fromImgView;
    GCChatRoomImageZoomAnimation *_zoomAnimation;
    NSString *_animationIdentifer;
    NSString *_chatRoomName;
    NSString *_chatRoomDisplayName;
    long long _targetChannelId;
    long long _targetSeq;
    GCOpenReportParam *_reportParam;
    struct CGSize _desireViewSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize desireViewSize; // @synthesize desireViewSize=_desireViewSize;
@property(nonatomic) _Bool popCurrentVc; // @synthesize popCurrentVc=_popCurrentVc;
@property(nonatomic) _Bool backToGameLifeTab; // @synthesize backToGameLifeTab=_backToGameLifeTab;
@property(retain, nonatomic) GCOpenReportParam *reportParam; // @synthesize reportParam=_reportParam;
@property(nonatomic) _Bool autoJoinIfCan; // @synthesize autoJoinIfCan=_autoJoinIfCan;
@property(nonatomic) _Bool isRealTimeHotChat; // @synthesize isRealTimeHotChat=_isRealTimeHotChat;
@property(nonatomic) long long targetSeq; // @synthesize targetSeq=_targetSeq;
@property(nonatomic) long long targetChannelId; // @synthesize targetChannelId=_targetChannelId;
@property(retain, nonatomic) NSString *chatRoomDisplayName; // @synthesize chatRoomDisplayName=_chatRoomDisplayName;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(retain, nonatomic) NSString *animationIdentifer; // @synthesize animationIdentifer=_animationIdentifer;
@property(retain, nonatomic) GCChatRoomImageZoomAnimation *zoomAnimation; // @synthesize zoomAnimation=_zoomAnimation;
@property(retain, nonatomic) UIImageView *fromImgView; // @synthesize fromImgView=_fromImgView;
@property(retain, nonatomic) UIImageView *animateCoverImgView; // @synthesize animateCoverImgView=_animateCoverImgView;
@property(nonatomic) _Bool isImgDefaultImg; // @synthesize isImgDefaultImg=_isImgDefaultImg;
@property(retain, nonatomic) UIImage *roomBgImage; // @synthesize roomBgImage=_roomBgImage;
@property(retain, nonatomic) NSString *roomCoverImgUrl; // @synthesize roomCoverImgUrl=_roomCoverImgUrl;
- (id)init;

@end

