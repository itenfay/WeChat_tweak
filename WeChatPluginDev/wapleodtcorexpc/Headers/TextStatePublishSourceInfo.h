//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, TextStateIcon, TextStatePublishBrandInfo, TextStatePublishMediaInfo, UIImage;
@protocol TextState3rdPartyHandler;

@interface TextStatePublishSourceInfo : NSObject
{
    NSString *_sourceId;
    NSString *_sourceActivityId;
    NSString *_sourceVerifyInfo;
    NSString *_emoticonMd5;
    NSString *_emoticonURLString;
    NSString *_emoticonPath;
    NSString *_sourceName;
    NSString *_sourceIconURL;
    NSString *_iconId;
    TextStateIcon *_icon;
    UIImage *_image;
    NSString *_imageURLString;
    NSString *_videoPath;
    TextStatePublishMediaInfo *_mediaInfo;
    NSString *_desc;
    TextStatePublishBrandInfo *_brandInfo;
    NSArray *_dataItems;
    NSArray *_sourceDataItems;
    id <TextState3rdPartyHandler> _thirdPartyHandler;
}

+ (_Bool)requestDataItemFromDataItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TextState3rdPartyHandler> thirdPartyHandler; // @synthesize thirdPartyHandler=_thirdPartyHandler;
@property(retain, nonatomic) NSArray *sourceDataItems; // @synthesize sourceDataItems=_sourceDataItems;
@property(retain, nonatomic) NSArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) TextStatePublishBrandInfo *brandInfo; // @synthesize brandInfo=_brandInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) TextStatePublishMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TextStateIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(retain, nonatomic) NSString *sourceIconURL; // @synthesize sourceIconURL=_sourceIconURL;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *emoticonPath; // @synthesize emoticonPath=_emoticonPath;
@property(retain, nonatomic) NSString *emoticonURLString; // @synthesize emoticonURLString=_emoticonURLString;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
@property(retain, nonatomic) NSString *sourceVerifyInfo; // @synthesize sourceVerifyInfo=_sourceVerifyInfo;
@property(retain, nonatomic) NSString *sourceActivityId; // @synthesize sourceActivityId=_sourceActivityId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
- (void)requestDataItemsFromServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)sourceJumpInfos;
- (id)jumpInfos;
- (void)resetDataItems;
- (void)fill3rdPartyDataItems:(id)arg1 sourceDataItems:(id)arg2;
- (void)fill3rdPartyDataItems:(id)arg1;
- (id)get3rdPartyDataItems;
- (_Bool)supportCustomCover;
- (_Bool)supportCustomMedia;
- (_Bool)isHybrid;
- (void)clearMedia;
- (void)privateSetIcon:(id)arg1;
- (_Bool)isValid;
- (id)description;
- (id)footer;
- (id)initWithFooter:(id)arg1;

@end

