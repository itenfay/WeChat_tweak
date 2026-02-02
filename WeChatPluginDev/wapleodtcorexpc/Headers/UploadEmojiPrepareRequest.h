//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EmotionFinderLinkInfo, NSMutableArray, NSString, UploadUGCFinderInfo;

@interface UploadEmojiPrepareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @dynamic attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedText; // @dynamic attachedText;
@property(retain, nonatomic) NSString *attachedTextColor; // @dynamic attachedTextColor;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) EmotionFinderLinkInfo *finderLinkInfo; // @dynamic finderLinkInfo;
@property(retain, nonatomic) NSString *followingEmojiMd5; // @dynamic followingEmojiMd5;
@property(nonatomic) _Bool isSelfie; // @dynamic isSelfie;
@property(nonatomic) _Bool isWxam; // @dynamic isWxam;
@property(retain, nonatomic) NSString *lensId; // @dynamic lensId;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSMutableArray *meanings; // @dynamic meanings;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) UploadUGCFinderInfo *ugcfinderInfo; // @dynamic ugcfinderInfo;
@property(nonatomic) unsigned int uploadScene; // @dynamic uploadScene;
@property(retain, nonatomic) NSMutableArray *wordings; // @dynamic wordings;

@end

