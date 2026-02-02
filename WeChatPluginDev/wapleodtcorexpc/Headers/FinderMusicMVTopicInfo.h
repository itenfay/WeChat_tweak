//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderContact, NSData, NSString;

@class WXPBGeneratedMessage;

@interface FinderMusicMVTopicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSData *finderObject; // @dynamic finderObject;
@property(nonatomic) unsigned long long musicMvTopicId; // @dynamic musicMvTopicId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;

@end

