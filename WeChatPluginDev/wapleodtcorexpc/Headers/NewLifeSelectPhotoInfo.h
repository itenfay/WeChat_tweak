//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, NewLifePhotoCropInfo, NewLifePhotoExtInfo, NewLifePictureCropInfo;

@interface NewLifeSelectPhotoInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NewLifePhotoCropInfo *cropInfo; // @dynamic cropInfo;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NewLifePhotoExtInfo *photoExtInfo; // @dynamic photoExtInfo;
@property(retain, nonatomic) NSString *photoId; // @dynamic photoId;
@property(retain, nonatomic) NewLifePictureCropInfo *regionInfo; // @dynamic regionInfo;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

