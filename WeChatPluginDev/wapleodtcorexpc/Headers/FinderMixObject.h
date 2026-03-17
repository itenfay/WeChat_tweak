//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderEcObject, FinderObject;

@class WXPBGeneratedMessage;

@interface FinderMixObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEcObject *finderEcObject; // @dynamic finderEcObject;
@property(retain, nonatomic) FinderObject *finderObject; // @dynamic finderObject;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(nonatomic) unsigned int purchasedContentFlag; // @dynamic purchasedContentFlag;

@end

