//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class WWShareTypeImage, WWShareTypeLink;

@class WXPBGeneratedMessage;

@interface WWShareInvite : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WWShareTypeImage *contentImage; // @dynamic contentImage;
@property(retain, nonatomic) WWShareTypeLink *contentLink; // @dynamic contentLink;
@property(nonatomic) unsigned int shareType; // @dynamic shareType;

@end

