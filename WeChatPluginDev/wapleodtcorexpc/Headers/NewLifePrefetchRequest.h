//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderObject, FinderObjectEventDesc, FinderTopicHashTagDesc;

@class WXPBGeneratedMessage;

@interface NewLifePrefetchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderObjectEventDesc *eventDesc; // @dynamic eventDesc;
@property(retain, nonatomic) FinderTopicHashTagDesc *hashTagDesc; // @dynamic hashTagDesc;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) int type; // @dynamic type;

@end

