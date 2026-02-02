//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Star_FINDER_Author, Star_H5_Author, Star_KYK_Video_Author, Star_MusicAuthor;

@interface StarAuthor : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int atype; // @dynamic atype;
@property(retain, nonatomic) Star_FINDER_Author *finder; // @dynamic finder;
@property(retain, nonatomic) Star_H5_Author *h5; // @dynamic h5;
@property(retain, nonatomic) Star_KYK_Video_Author *kykVideo; // @dynamic kykVideo;
@property(retain, nonatomic) Star_MusicAuthor *music; // @dynamic music;

@end

