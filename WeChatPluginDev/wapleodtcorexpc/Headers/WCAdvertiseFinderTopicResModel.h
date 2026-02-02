//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdvertiseFinderTopicResImageModel;

@interface WCAdvertiseFinderTopicResModel : NSObject
{
    NSString *_avatar;
    NSString *_nickname;
    NSString *_tag;
    NSString *_desc;
    NSString *_barBgColor;
    NSString *_duration;
    NSString *_finderType;
    WCAdvertiseFinderTopicResImageModel *_imageInfo;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdvertiseFinderTopicResImageModel *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) NSString *finderType; // @synthesize finderType=_finderType;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *barBgColor; // @synthesize barBgColor=_barBgColor;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;

@end

