//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject, MegaVideoStartPlayContext;

@interface MegaVideoFeed : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderObject *finderObject; // @dynamic finderObject;
@property(nonatomic) unsigned int indexOfPageWhichContainsFeed; // @dynamic indexOfPageWhichContainsFeed;
@property(retain, nonatomic) MegaVideoStartPlayContext *startPlayContext; // @dynamic startPlayContext;

@end

