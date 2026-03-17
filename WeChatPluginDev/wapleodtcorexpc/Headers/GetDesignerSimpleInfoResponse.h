//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, PersonalDesigner;

@class WXPBGeneratedMessage;

@interface GetDesignerSimpleInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) PersonalDesigner *designer; // @dynamic designer;
@property(nonatomic) unsigned int emojiTotalCount; // @dynamic emojiTotalCount;
@property(retain, nonatomic) NSMutableArray *previewEmoji; // @dynamic previewEmoji;
@property(retain, nonatomic) NSMutableArray *previewEmotion; // @dynamic previewEmotion;

@end

