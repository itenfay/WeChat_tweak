//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderMusicRadio : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)toShowInfo;
- (id)toCategoryItem;

// Remaining properties
@property(retain, nonatomic) NSData *ctxRecommendInfoBuffer; // @dynamic ctxRecommendInfoBuffer;
@property(retain, nonatomic) NSData *finderProfileShowInfoBuffer; // @dynamic finderProfileShowInfoBuffer;
@property(retain, nonatomic) NSData *singerRadioInfoBuffer; // @dynamic singerRadioInfoBuffer;

@end

