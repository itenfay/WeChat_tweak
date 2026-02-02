//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EmoticonRecommendMessageContext
{
    _Bool _isSelf;
    _Bool _isRelatedEmoticon;
    unsigned int _messageType;
    unsigned int _appMessageInnerType;
    unsigned int _payInfoSceneId;
    unsigned int _createTime;
    NSString *_extInfo;
    NSString *_lensId;
}

+ (id)messageContextsFromMessageWraps:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRelatedEmoticon; // @synthesize isRelatedEmoticon=_isRelatedEmoticon;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int payInfoSceneId; // @synthesize payInfoSceneId=_payInfoSceneId;
@property(nonatomic) unsigned int appMessageInnerType; // @synthesize appMessageInnerType=_appMessageInnerType;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
- (id)panelEmojiCtx;
- (id)initWithMessageWrap:(id)arg1;

@end

