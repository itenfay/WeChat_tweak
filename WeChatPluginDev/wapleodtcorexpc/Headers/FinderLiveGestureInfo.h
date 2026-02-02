//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGestureRenderConfig, FinderLiveNoticeGestureRenderConfig, NSString;

@interface FinderLiveGestureInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorUrl; // @dynamic anchorUrl;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(retain, nonatomic) NSString *gestureIconUrl; // @dynamic gestureIconUrl;
@property(nonatomic) unsigned int gestureId; // @dynamic gestureId;
@property(retain, nonatomic) NSString *gestureName; // @dynamic gestureName;
@property(retain, nonatomic) FinderLiveNoticeGestureRenderConfig *noticeRenderConfig; // @dynamic noticeRenderConfig;
@property(nonatomic) unsigned int rankNumber; // @dynamic rankNumber;
@property(retain, nonatomic) FinderLiveGestureRenderConfig *renderConfig; // @dynamic renderConfig;
@property(retain, nonatomic) NSString *resourceUrl; // @dynamic resourceUrl;
@property(nonatomic) unsigned long long supportSdkMaxVersion; // @dynamic supportSdkMaxVersion;
@property(nonatomic) unsigned long long supportSdkMinVersion; // @dynamic supportSdkMinVersion;
@property(retain, nonatomic) NSString *tipsIconUrl; // @dynamic tipsIconUrl;
@property(retain, nonatomic) NSString *tipsName; // @dynamic tipsName;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

