//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Dragon2024Config, Rabbit2023Config, SnsVideoOptions;

@interface SnsServerConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int closeJumpToFinder; // @dynamic closeJumpToFinder;
@property(nonatomic) int closeJumpToNewLife; // @dynamic closeJumpToNewLife;
@property(nonatomic) int closeLivePhotoPost; // @dynamic closeLivePhotoPost;
@property(nonatomic) int closeLivePhotoShow; // @dynamic closeLivePhotoShow;
@property(nonatomic) int closeVideoAutoPlay; // @dynamic closeVideoAutoPlay;
@property(nonatomic) int copyAndPasteWordLimit; // @dynamic copyAndPasteWordLimit;
@property(retain, nonatomic) Dragon2024Config *dragon2024Config; // @dynamic dragon2024Config;
@property(nonatomic) int enabledTopList; // @dynamic enabledTopList;
@property(nonatomic) int postMentionLimit; // @dynamic postMentionLimit;
@property(nonatomic) int postWithTaLimit; // @dynamic postWithTaLimit;
@property(retain, nonatomic) Rabbit2023Config *rabbit2023Config; // @dynamic rabbit2023Config;
@property(nonatomic) int tiger2022LinkStatus; // @dynamic tiger2022LinkStatus;
@property(nonatomic) int tiger2022PostStatus; // @dynamic tiger2022PostStatus;
@property(retain, nonatomic) SnsVideoOptions *videoOptions; // @dynamic videoOptions;
@property(nonatomic) int videoTmplTipsDisabled; // @dynamic videoTmplTipsDisabled;

@end

