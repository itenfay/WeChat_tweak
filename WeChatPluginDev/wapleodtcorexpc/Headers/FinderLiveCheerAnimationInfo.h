//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveCheerAnimationInfo_Resource, NSMutableArray, NSString;

@interface FinderLiveCheerAnimationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bpm; // @dynamic bpm;
@property(retain, nonatomic) NSString *cheerButtonUrl; // @dynamic cheerButtonUrl;
@property(retain, nonatomic) NSMutableArray *cheerIconInfo; // @dynamic cheerIconInfo;
@property(retain, nonatomic) NSMutableArray *color; // @dynamic color;
@property(nonatomic) _Bool enable; // @dynamic enable;
@property(retain, nonatomic) FinderLiveCheerAnimationInfo_Resource *landscapeResource; // @dynamic landscapeResource;
@property(retain, nonatomic) FinderLiveCheerAnimationInfo_Resource *resource; // @dynamic resource;
@property(nonatomic) unsigned long long resourceId; // @dynamic resourceId;
@property(nonatomic) unsigned long long totalDuration; // @dynamic totalDuration;

@end

